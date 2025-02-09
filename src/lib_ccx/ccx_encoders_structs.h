#ifndef CCX_ENCODERS_STRUCTS_H
#define CCX_ENCODERS_STRUCTS_H

typedef struct ccx_encoders_transcript_format {
	// TODO: add more options, and (perhaps) reduce other ccextractor options?
	int showStartTime, showEndTime; // Show start and/or end time.
	int showMode;                   // Show which mode if available (E.G.: POP, RU1, ...)
	int showCC;                     // Show which CC channel has been captured.
	int relativeTimestamp;          // Timestamps relative to start of sample or in UTC?
	int xds;                        // Show XDS or not
	int useColors;                  // Add colors or no colors
	int isFinal;                    // Used to determine if these parameters should be changed afterwards.

} ccx_encoders_transcript_format;

struct ccx_s_write
{
    char *filename;                    // Output filename
    char *original_filename;           // Original filename before any modifications
    FILE *fh;                         // File handle (changed from int)
    int temporarily_closed;           // 1 means the file was created OK before but we released the handle
    void* spupng_data;               // Subtitle PNG data
    int with_semaphore;              // 1 means create a .sem file when the file is open and delete it when it's closed
    char *semaphore_filename;        // Semaphore filename
    int with_playlist;               // For m3u8 /webvtt: If 1, we'll generate a playlist and segments
    char *playlist_filename;         // Playlist filename
    int renaming_extension;          // Used for file rotations
    int append_mode;                 // Append the file. Prevent overwriting of files
    struct encoder_ctx *enc_ctx;     // Encoder context
    LLONG fts;                      // File timestamp
    LLONG fts_max;                  // Max file timestamp
    LLONG fts_now;                  // Current timestamp
    char *encoding;                 // Character encoding
    char *subtype;                 // Subtitle type
    struct ccx_s_write *prev;      // Previous write context
    struct ccx_s_write *next;      // Next write context
};

#endif
