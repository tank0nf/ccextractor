/*
* DVB subtitle decoding
* Copyright (c) 2014 Anshul
* License: LGPL
*
* This file is part of CCEXtractor
* You should have received a copy of the GNU Lesser General Public
* License along with CCExtractor; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*
*/
/**
* @file dvbsub.c
*/

#ifndef DVBSUBDEC_H
#define DVBSUBDEC_H

#define MAX_LANGUAGE_PER_DESC 5

#include "lib_ccx.h"
#ifdef __cplusplus
extern "C"
{
#endif
typedef struct DVBSubCLUT
{
	int id;
	int version;

	uint32_t clut4[4];
	uint32_t clut16[16];
	uint32_t clut256[256];
	uint8_t ilut4[4];
	uint8_t ilut16[16];
	uint8_t ilut256[256];

	struct DVBSubCLUT *next;
} DVBSubCLUT;

static DVBSubCLUT default_clut;

typedef struct DVBSubObjectDisplay
{
	int object_id;
	int region_id;

	int x_pos;
	int y_pos;

	int fgcolor;
	int bgcolor;

	struct DVBSubObjectDisplay *region_list_next;
	struct DVBSubObjectDisplay *object_list_next;
} DVBSubObjectDisplay;

typedef struct DVBSubObject
{
	int id;
	int version;

	int type;

	DVBSubObjectDisplay *display_list;

	struct DVBSubObject *next;
} DVBSubObject;

typedef struct DVBSubRegionDisplay
{
	int region_id;

	int x_pos;
	int y_pos;

	struct DVBSubRegionDisplay *next;
} DVBSubRegionDisplay;

typedef struct DVBSubRegion
{
	int id;
	int version;

	int width;
	int height;
	int depth;

	int clut;
	int bgcolor;

	uint8_t *pbuf;
	int buf_size;
	int dirty;

	DVBSubObjectDisplay *display_list;

	struct DVBSubRegion *next;
} DVBSubRegion;

typedef struct DVBSubDisplayDefinition
{
	int version;

	int x;
	int y;
	int width;
	int height;
} DVBSubDisplayDefinition;

typedef struct DVBSubContext {
    // Language support
    int num_languages;                              
    int composition_ids[MAX_LANGUAGE_PER_DESC];     
    int ancillary_ids[MAX_LANGUAGE_PER_DESC];      
    int lang_indices[MAX_LANGUAGE_PER_DESC];       
    
    // Display and timing
    int version;
    LLONG time_out;
    
    // Output handlers
    struct ccx_s_write *out[MAX_LANGUAGE_PER_DESC];
    
    // OCR context
#ifdef ENABLE_OCR
    void *ocr_ctx;
#endif

    // Display elements
    DVBSubRegion *region_list;
    DVBSubCLUT *clut_list;
    DVBSubObject *object_list;
    DVBSubRegionDisplay *display_list;
    DVBSubDisplayDefinition *display_definition;
} DVBSubContext;

void dvbsub_set_write(void *dvb_ctx, struct ccx_s_write *out);

struct dvb_config
{
	unsigned char n_language;
	unsigned int lang_index[MAX_LANGUAGE_PER_DESC];
	/* subtitle type */
	unsigned char sub_type[MAX_LANGUAGE_PER_DESC];
	/* composition page id */
	unsigned short composition_id[MAX_LANGUAGE_PER_DESC];
	/* ancillary_page_id */
	unsigned short ancillary_id[MAX_LANGUAGE_PER_DESC];
};

	/**
	* @param cfg Structure containg configuration
	*
	* @return DVB context kept as void* for abstraction
	*
	*/
	void* dvbsub_init_decoder(struct dvb_config* cfg, int initialized_ocr);

	int dvbsub_close_decoder(void **dvb_ctx);

	/**
	* @param dvb_ctx    PreInitialized DVB context using DVB
	* @param buf        buffer containing segment data, first sync byte need to 0x0f.
	*                   does not include data_identifier and subtitle_stream_id.
	* @param buf_size   size of buf buffer
	* @param sub        output subtitle data
	*
	* @return           -1 on error
	*/
	int dvbsub_decode(struct encoder_ctx *enc_ctx, struct lib_cc_decode *dec_ctx, const unsigned char *buf, int buf_size, struct cc_subtitle *sub);

	/**
	* @func parse_dvb_description
	*
	* data pointer to this function should be after description length and description tag is parsed
	*
	* @param cfg preallocated dvb_config structure where parsed description will be stored,Not to be NULL
	*
	* @return return -1 if invalid data found other wise 0 if everything goes well
	* errno is set is to EINVAL if invalid data is found
	*/
	int parse_dvb_description(struct dvb_config* cfg, unsigned char*data,
		unsigned int len);

	/*
	* @func dvbsub_set_write the output structure in dvb
	* set ccx_s_write structure in dvb_ctx
	*
	* @param dvb_ctx context of dvb which was returned by dvbsub_init_decoder
	*
	* @param out output context returned by init_write
	*
	*/
	void dvbsub_set_write(void *dvb_ctx, struct ccx_s_write *out);

#ifdef __cplusplus
}
#endif
#endif