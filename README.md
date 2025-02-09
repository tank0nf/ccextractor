<img src ="https://github.com/CCExtractor/ccextractor-org-media/blob/master/static/ccx_logo_transparent_800x600.png" width="200px" alt="logo" />

# CCExtractor

<a href="https://travis-ci.org/CCExtractor/ccextractor"><img src="https://raw.githubusercontent.com/CCExtractor/ccextractor-org-media/master/static/macOS-build-badge-logo.png" width="20"></a> [![Build Status](https://travis-ci.org/CCExtractor/ccextractor.svg?branch=master)](https://travis-ci.org/CCExtractor/ccextractor)
[![Sample-Platform Build Status Windows](https://sampleplatform.ccextractor.org/static/img/status/build-windows.svg?maxAge=1800)](https://sampleplatform.ccextractor.org/test/master/windows)
[![Sample-Platform Build Status Linux](https://sampleplatform.ccextractor.org/static/img/status/build-linux.svg?maxAge=1800)](https://sampleplatform.ccextractor.org/test/master/linux)
[![SourceForge](https://img.shields.io/badge/SourceForge%20downloads-213k%2Ftotal-brightgreen.svg)](https://sourceforge.net/projects/ccextractor/)
[![GitHub All Releases](https://img.shields.io/github/downloads/CCExtractor/CCExtractor/total.svg)](https://github.com/CCExtractor/ccextractor/releases/latest)

CCExtractor is a tool used to produce subtitles for TV recordings from almost anywhere in the world. We intend to keep up with all sources and formats.

Subtitles are important for many people. If you're learning a new language, subtitles are a great way to learn it from movies or TV shows. If you are hard of hearing, subtitles can help you better understand what's happening on the screen. We aim to make it easy to generate subtitles by using the command line tool or Windows GUI.

The official repository is ([CCExtractor/ccextractor](https://github.com/CCExtractor/ccextractor)) and master being the most stable branch.

### **Features**

- Extract subtitles in real-time
- Translate subtitles
- Extract closed captions from DVDs
- Convert closed captions to subtitles

### Programming Languages & Technologies

The core functionality is written in C. Other languages used include C++ and Python.

## Installation and Usage

Downloads for precompiled binaries and source code can be found [on our website](https://ccextractor.org/public/general/downloads/).

Extracting subtitles is relatively simple. Just run the following command:

`ccextractor <input>`

This will extract the subtitles.

More usage information can be found on our website:

- [Using the command line tool](https://ccextractor.org/public/general/command_line_usage/)
- [Using the Flutter GUI](https://ccextractor.org/public/general/flutter_gui/)

You can also find the list of parameters and their brief description by running `ccextractor` without any arguments.

You can find sample files on [our website](https://ccextractor.org/public/general/tvsamples/) to test the software.

## Compiling CCExtractor

To learn more about how to compile and build CCExtractor for your platform check the [compilation guide](https://github.com/CCExtractor/ccextractor/blob/master/docs/COMPILATION.MD).

## Support

By far the best way to get support is by opening an issue at our [issue tracker](https://github.com/CCExtractor/ccextractor/issues).

When you create a new issue, please fill in the needed details in the provided template. That makes it easier for us to help you more efficiently.

If you have a question or a problem you can also [contact us by email or chat with the team in Slack](https://ccextractor.org/public/general/support/).

If you want to contribute to CCExtractor but can't submit some code patches or issues or video samples, you can also [donate to us](https://sourceforge.net/donate/index.php?group_id=190832)

## Contributing

You can contribute to the project by reporting issues, forking it, modifying the code and making a pull request to the repository. We have some rules, outlined in the [contributor's guide](.github/CONTRIBUTING.md).

## News & Other Information

News about releases and modifications to the code can be found in the [CHANGES.TXT](docs/CHANGES.TXT) file.

For more information visit the CCExtractor website: [https://www.ccextractor.org](https://www.ccextractor.org)

## License

GNU General Public License version 2.0 (GPL-2.0)






 133 |                                 write_wrapped(fileno(fileno(context->out->fh)), context->encoded_crlf, context->encoded_crlf_length);
      |                                               ~~~~~~~~~~~~^~~~
      |                                                           |
      |                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_smptett.c:135:59: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  135 |                                 write_wrapped(fileno(context->out->fh), buf, strlen(buf));
      |                                               ~~~~~~~~~~~~^~~~
      |                                                           |
      |                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_smptett.c: In function 'write_cc_buffer_as_smptett':
../src/lib_ccx/ccx_encoders_smptett.c:227:59: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  227 |                                 write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                                               ~~~~~~~~~~~~^~~~
      |                                                           |
      |                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_smptett.c:384:59: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  384 |                                 write_wrapped(fileno(context->out->fh), final, strlen(final));
      |                                               ~~~~~~~~~~~~^~~~
      |                                                           |
      |                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_smptett.c:386:59: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  386 |                                 write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                                               ~~~~~~~~~~~~^~~~
      |                                                           |
      |                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_smptett.c:395:59: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  395 |                                 write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                                               ~~~~~~~~~~~~^~~~
      |                                                           |
      |                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_spupng.c: In function 'spunpg_init':
../src/lib_ccx/ccx_encoders_spupng.c:77:36: error: passing argument 1 of 'fdopen' makes integer from pointer without a cast [-Wint-conversion]
   77 |         if ((sp->fpxml = fdopen(out->fh, "w")) == NULL)
      |                                 ~~~^~~~
      |                                    |
      |                                    FILE *
In file included from ../src/lib_ccx/ccx_common_platform.h:5,
                 from ../src/lib_ccx/ccx_common_common.h:4,
                 from ../src/lib_ccx/ccx_encoders_spupng.c:2:
/usr/include/stdio.h:299:26: note: expected 'int' but argument is of type 'FILE *'
  299 | extern FILE *fdopen (int __fd, const char *__modes) __THROW
      |                      ~~~~^~~~
../src/lib_ccx/ccx_encoders_spupng.c: In function 'write_spumux_footer':
../src/lib_ccx/ccx_encoders_spupng.c:181:25: error: assignment to 'FILE *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
  181 |                 out->fh = -1;
      |                         ^
../src/lib_ccx/ccx_encoders_srt.c: In function 'write_stringz_as_srt':
../src/lib_ccx/ccx_encoders_srt.c:26:35: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
   26 |         write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                       ~~~~~~~~~~~~^~~~
      |                                   |
      |                                   FILE *
In file included from ../src/lib_ccx/ccx_demuxer.h:8,
                 from ../src/lib_ccx/lib_ccx.h:15,
                 from ../src/lib_ccx/ccx_encoders_srt.c:1:
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:33:35: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
   33 |         write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                       ~~~~~~~~~~~~^~~~
      |                                   |
      |                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:67:43: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
   67 |                 write_wrapped(fileno(context->out->fh), el, u);
      |                               ~~~~~~~~~~~~^~~~
      |                                           |
      |                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:68:43: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
   68 |                 write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                               ~~~~~~~~~~~~^~~~
      |                                           |
      |                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:74:35: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
   74 |         write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                       ~~~~~~~~~~~~^~~~
      |                                   |
      |                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c: In function 'write_cc_bitmap_as_srt':
../src/lib_ccx/ccx_encoders_srt.c:117:59: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  117 |                                 write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                                               ~~~~~~~~~~~~^~~~
      |                                                           |
      |                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:121:59: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  121 |                                 write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                                               ~~~~~~~~~~~~^~~~
      |                                                           |
      |                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:123:59: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  123 |                                 write_wrapped(fileno(context->out->fh), str, len);
      |                                               ~~~~~~~~~~~~^~~~
      |                                                           |
      |                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:124:59: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  124 |                                 write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                                               ~~~~~~~~~~~~^~~~
      |                                                           |
      |                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c: In function 'write_cc_buffer_as_srt':
../src/lib_ccx/ccx_encoders_srt.c:201:35: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  201 |         write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                       ~~~~~~~~~~~~^~~~
      |                                   |
      |                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:206:35: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  206 |         write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                       ~~~~~~~~~~~~^~~~
      |                                   |
      |                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:265:67: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  265 |                                         write_wrapped(fileno(context->out->fh), "- ", 2);
      |                                                       ~~~~~~~~~~~~^~~~
      |                                                                   |
      |                                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:277:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  277 |                         write_wrapped(fileno(context->out->fh), context->subline, length);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:278:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  278 |                         write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_srt.c:286:35: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  286 |         write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                       ~~~~~~~~~~~~^~~~
      |                                   |
      |                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c: In function 'write_stringz_as_ssa':
../src/lib_ccx/ccx_encoders_ssa.c:27:35: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
   27 |         write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                       ~~~~~~~~~~~~^~~~
      |                                   |
      |                                   FILE *
In file included from ../src/lib_ccx/ccx_demuxer.h:8,
                 from ../src/lib_ccx/lib_ccx.h:15,
                 from ../src/lib_ccx/ccx_encoders_ssa.c:1:
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c:61:43: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
   61 |                 write_wrapped(fileno(context->out->fh), el, u);
      |                               ~~~~~~~~~~~~^~~~
      |                                           |
      |                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c:62:43: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
   62 |                 write_wrapped(fileno(context->out->fh), "\\N", 2);
      |                               ~~~~~~~~~~~~^~~~
      |                                           |
      |                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c:68:35: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
   68 |         write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                       ~~~~~~~~~~~~^~~~
      |                                   |
      |                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c: In function 'write_cc_bitmap_as_ssa':
../src/lib_ccx/ccx_encoders_ssa.c:116:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  116 |                         write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c:117:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  117 |                         write_wrapped(fileno(context->out->fh), str, len);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c:118:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  118 |                         write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c: In function 'write_cc_buffer_as_ssa':
../src/lib_ccx/ccx_encoders_ssa.c:191:35: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  191 |         write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                       ~~~~~~~~~~~~^~~~
      |                                   |
      |                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c:247:67: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  247 |                                         write_wrapped(fileno(context->out->fh), "- ", 2);
      |                                                       ~~~~~~~~~~~~^~~~
      |                                                                   |
      |                                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c:261:59: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  261 |                                 write_wrapped(fileno(context->out->fh), "\\N", 2);
      |                                               ~~~~~~~~~~~~^~~~
      |                                                           |
      |                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c:263:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  263 |                         write_wrapped(fileno(context->out->fh), context->subline, length);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_ssa.c:271:35: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  271 |         write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                       ~~~~~~~~~~~~^~~~
      |                                   |
      |                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c: In function 'write_cc_bitmap_as_transcript':
../src/lib_ccx/ccx_encoders_transcript.c:41:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   41 |                                         fdprintf(fileno(context->out->fh), "%s|", buf1);
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
In file included from ../src/lib_ccx/ccx_encoders_helpers.h:4,
                 from ../src/lib_ccx/ccx_encoders_transcript.c:9:
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:49:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   49 |                                         fdprintf(fileno(context->out->fh), "%s%c%03d|", buf1, context->millis_separator, start_time_dec);
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:59:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   59 |                                         fdprintf(fileno(context->out->fh), "%s|", buf2);
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:67:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   67 |                                         fdprintf(fileno(context->out->fh), "%s%c%03d|", buf2, context->millis_separator, end_time_dec);
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:72:54: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   72 |                                 fdprintf(fileno(context->out->fh), "%s|", language[sub->lang_index]);
      |                                          ~~~~~~~~~~~~^~~~
      |                                                      |
      |                                                      FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:76:54: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   76 |                                 fdprintf(fileno(context->out->fh), "DVB|");
      |                                          ~~~~~~~~~~~~^~~~
      |                                                      |
      |                                                      FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:84:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   84 |                                         fdprintf(fileno(context->out->fh), "%s", token);
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:91:70: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   91 |                                                 fdprintf(fileno(context->out->fh), "%c", *token);
      |                                                          ~~~~~~~~~~~~^~~~
      |                                                                      |
      |                                                                      FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:95:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   95 |                                         fdprintf(fileno(context->out->fh), "%c", ' ');
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:99:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
   99 |                         write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
In file included from ../src/lib_ccx/ccx_encoders_transcript.c:3:
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c: In function 'write_cc_subtitle_as_transcript':
../src/lib_ccx/ccx_encoders_transcript.c:159:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  159 |                                         fdprintf(fileno(context->out->fh), "%s|", buf);
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:167:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  167 |                                         fdprintf(fileno(context->out->fh), "%s%c%03d|", buf, context->millis_separator, start_time_dec);
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:177:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  177 |                                         fdprintf(fileno(context->out->fh), "%s|", buf);
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:185:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  185 |                                         fdprintf(fileno(context->out->fh), "%s%c%03d|", buf, context->millis_separator, end_time_dec);
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:192:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  192 |                                         fdprintf(fileno(context->out->fh), sub->info);
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:195:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  195 |                                         fdprintf(fileno(context->out->fh), "CC?|");
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:200:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  200 |                                         fdprintf(fileno(context->out->fh), "|");
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:202:62: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  202 |                                         fdprintf(fileno(context->out->fh), "%s|", sub->mode);
      |                                                  ~~~~~~~~~~~~^~~~
      |                                                              |
      |                                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:204:49: error: passing argument 1 of 'write' makes integer from pointer without a cast [-Wint-conversion]
  204 |                         ret = write(fileno(context->out->fh), context->subline, length);
      |                                     ~~~~~~~~~~~~^~~~
      |                                                 |
      |                                                 FILE *
In file included from ../src/lib_ccx/ccx_common_platform.h:45,
                 from ../src/lib_ccx/ccx_decoders_common.h:4,
                 from ../src/lib_ccx/ccx_encoders_transcript.c:1:
/usr/include/unistd.h:378:27: note: expected 'int' but argument is of type 'FILE *'
  378 | extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur
      |                       ~~~~^~~~
../src/lib_ccx/ccx_encoders_transcript.c:210:49: error: passing argument 1 of 'write' makes integer from pointer without a cast [-Wint-conversion]
  210 |                         ret = write(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                                     ~~~~~~~~~~~~^~~~
      |                                                 |
      |                                                 FILE *
/usr/include/unistd.h:378:27: note: expected 'int' but argument is of type 'FILE *'
  378 | extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur
      |                       ~~~~^~~~
../src/lib_ccx/ccx_encoders_transcript.c: In function 'write_cc_line_as_transcript2':
../src/lib_ccx/ccx_encoders_transcript.c:262:54: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  262 |                                 fdprintf(fileno(context->out->fh), "%s|", buf1);
      |                                          ~~~~~~~~~~~~^~~~
      |                                                      |
      |                                                      FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:270:54: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  270 |                                 fdprintf(fileno(context->out->fh), "%s%c%03d|", buf1, context->millis_separator, start_time_dec);
      |                                          ~~~~~~~~~~~~^~~~
      |                                                      |
      |                                                      FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:280:54: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  280 |                                 fdprintf(fileno(context->out->fh), "%s|", buf2);
      |                                          ~~~~~~~~~~~~^~~~
      |                                                      |
      |                                                      FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:288:54: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  288 |                                 fdprintf(fileno(context->out->fh), "%s%c%03d|", buf2, context->millis_separator, end_time_dec);
      |                                          ~~~~~~~~~~~~^~~~
      |                                                      |
      |                                                      FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:294:46: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  294 |                         fdprintf(fileno(context->out->fh), "CC%d|", data->my_field == 1 ? data->channel : data->channel + 2); // Data from field 2 is CC3 or 4
      |                                  ~~~~~~~~~~~~^~~~
      |                                              |
      |                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:323:46: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
  323 |                         fdprintf(fileno(context->out->fh), "%s|", mode);
      |                                  ~~~~~~~~~~~~^~~~
      |                                              |
      |                                              FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_transcript.c:326:41: error: passing argument 1 of 'write' makes integer from pointer without a cast [-Wint-conversion]
  326 |                 ret = write(fileno(context->out->fh), context->subline, length);
      |                             ~~~~~~~~~~~~^~~~
      |                                         |
      |                                         FILE *
/usr/include/unistd.h:378:27: note: expected 'int' but argument is of type 'FILE *'
  378 | extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur
      |                       ~~~~^~~~
../src/lib_ccx/ccx_encoders_transcript.c:332:41: error: passing argument 1 of 'write' makes integer from pointer without a cast [-Wint-conversion]
  332 |                 ret = write(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                             ~~~~~~~~~~~~^~~~
      |                                         |
      |                                         FILE *
/usr/include/unistd.h:378:27: note: expected 'int' but argument is of type 'FILE *'
  378 | extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur
      |                       ~~~~^~~~
../src/lib_ccx/ccx_encoders_webvtt.c: In function 'write_stringz_as_webvtt':
../src/lib_ccx/ccx_encoders_webvtt.c:140:37: error: passing argument 1 of 'write' makes integer from pointer without a cast [-Wint-conversion]
  140 |         written = write(fileno(context->out->fh), context->buffer, used);
      |                         ~~~~~~~~~~~~^~~~
      |                                     |
      |                                     FILE *
In file included from ../src/lib_ccx/ccx_common_platform.h:45,
                 from ../src/lib_ccx/lib_ccx.h:7,
                 from ../src/lib_ccx/ccx_encoders_webvtt.c:1:
/usr/include/unistd.h:378:27: note: expected 'int' but argument is of type 'FILE *'
  378 | extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur
      |                       ~~~~^~~~
../src/lib_ccx/ccx_encoders_webvtt.c:176:45: error: passing argument 1 of 'write' makes integer from pointer without a cast [-Wint-conversion]
  176 |                 written = write(fileno(context->out->fh), el, u);
      |                                 ~~~~~~~~~~~~^~~~
      |                                             |
      |                                             FILE *
/usr/include/unistd.h:378:27: note: expected 'int' but argument is of type 'FILE *'
  378 | extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur
      |                       ~~~~^~~~
../src/lib_ccx/ccx_encoders_webvtt.c:183:45: error: passing argument 1 of 'write' makes integer from pointer without a cast [-Wint-conversion]
  183 |                 written = write(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                                 ~~~~~~~~~~~~^~~~
      |                                             |
      |                                             FILE *
/usr/include/unistd.h:378:27: note: expected 'int' but argument is of type 'FILE *'
  378 | extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur
      |                       ~~~~^~~~
../src/lib_ccx/ccx_encoders_webvtt.c:194:37: error: passing argument 1 of 'write' makes integer from pointer without a cast [-Wint-conversion]
  194 |         written = write(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                         ~~~~~~~~~~~~^~~~
      |                                     |
      |                                     FILE *
/usr/include/unistd.h:378:27: note: expected 'int' but argument is of type 'FILE *'
  378 | extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur
      |                       ~~~~^~~~
../src/lib_ccx/ccx_encoders_webvtt.c: In function 'write_webvtt_header':
../src/lib_ccx/ccx_encoders_webvtt.c:223:43: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  223 |                 write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                               ~~~~~~~~~~~~^~~~
      |                                           |
      |                                           FILE *
In file included from ../src/lib_ccx/ccx_demuxer.h:8,
                 from ../src/lib_ccx/lib_ccx.h:15:
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:230:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  230 |                         write_wrapped(fileno(context->out->fh), "\n", 1);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:234:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  234 |                         write_wrapped(fileno(context->out->fh), "\r\n", 2);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:255:43: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  255 |                 write_wrapped(fileno(context->out->fh), outline_css_file, strlen(outline_css_file));
      |                               ~~~~~~~~~~~~^~~~
      |                                           |
      |                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:259:43: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  259 |                 write_wrapped(fileno(context->out->fh), webvtt_inline_css, strlen(webvtt_inline_css));
      |                               ~~~~~~~~~~~~^~~~
      |                                           |
      |                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:262:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  262 |                         write_wrapped(fileno(context->out->fh), "\n", 1);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:266:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  266 |                         write_wrapped(fileno(context->out->fh), "\r\n", 2);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:268:43: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  268 |                 write_wrapped(fileno(context->out->fh), "##\n", 3);
      |                               ~~~~~~~~~~~~^~~~
      |                                           |
      |                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:269:43: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  269 |                 write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                               ~~~~~~~~~~~~^~~~
      |                                           |
      |                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c: In function 'write_cc_bitmap_as_webvtt':
../src/lib_ccx/ccx_encoders_webvtt.c:307:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  307 |                         write_wrapped(fileno(context->out->fh), context->buffer, used);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:309:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  309 |                         write_wrapped(fileno(context->out->fh), str, len);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:310:51: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  310 |                         write_wrapped(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                                       ~~~~~~~~~~~~^~~~
      |                                                   |
      |                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c: In function 'write_cc_buffer_as_webvtt':
../src/lib_ccx/ccx_encoders_webvtt.c:445:53: error: passing argument 1 of 'write' makes integer from pointer without a cast [-Wint-conversion]
  445 |                         written = write(fileno(context->out->fh), context->buffer, used);
      |                                         ~~~~~~~~~~~~^~~~
      |                                                     |
      |                                                     FILE *
/usr/include/unistd.h:378:27: note: expected 'int' but argument is of type 'FILE *'
  378 | extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur
      |                       ~~~~^~~~
../src/lib_ccx/ccx_encoders_webvtt.c:478:83: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  478 |                                                         write_wrapped(fileno(context->out->fh), strdup("<i>"), 3);
      |                                                                       ~~~~~~~~~~~~^~~~
      |                                                                                   |
      |                                                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:480:83: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  480 |                                                         write_wrapped(fileno(context->out->fh), strdup("<u>"), 3);
      |                                                                       ~~~~~~~~~~~~^~~~
      |                                                                                   |
      |                                                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:487:75: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  487 |                                                 write_wrapped(fileno(context->out->fh), strdup("<c."), 3);
      |                                                               ~~~~~~~~~~~~^~~~
      |                                                                           |
      |                                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:488:75: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  488 |                                                 write_wrapped(fileno(context->out->fh), color_text[open_color][0], strlen(color_text[open_color][0]));
      |                                                               ~~~~~~~~~~~~^~~~
      |                                                                           |
      |                                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:489:75: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  489 |                                                 write_wrapped(fileno(context->out->fh), ">", 1);
      |                                                               ~~~~~~~~~~~~^~~~
      |                                                                           |
      |                                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:499:67: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  499 |                                         write_wrapped(fileno(context->out->fh), buf, bytes);
      |                                                       ~~~~~~~~~~~~^~~~
      |                                                                   |
      |                                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:508:75: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  508 |                                                 write_wrapped(fileno(context->out->fh), strdup("</c>"), 4);
      |                                                               ~~~~~~~~~~~~^~~~
      |                                                                           |
      |                                                                           FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:516:83: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  516 |                                                         write_wrapped(fileno(context->out->fh), strdup("</u>"), 4);
      |                                                                       ~~~~~~~~~~~~^~~~
      |                                                                                   |
      |                                                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:518:83: error: passing argument 1 of 'write_wrapped' makes integer from pointer without a cast [-Wint-conversion]
  518 |                                                         write_wrapped(fileno(context->out->fh), strdup("</i>"), 4);
      |                                                                       ~~~~~~~~~~~~^~~~
      |                                                                                   |
      |                                                                                   FILE *
../src/lib_ccx/utility.h:61:24: note: expected 'int' but argument is of type 'FILE *'
   61 | void write_wrapped(int fd, const char *buf, size_t count);
      |                    ~~~~^~
../src/lib_ccx/ccx_encoders_webvtt.c:529:53: error: passing argument 1 of 'write' makes integer from pointer without a cast [-Wint-conversion]
  529 |                         written = write(fileno(context->out->fh),
      |                                         ~~~~~~~~~~~~^~~~
      |                                                     |
      |                                                     FILE *
/usr/include/unistd.h:378:27: note: expected 'int' but argument is of type 'FILE *'
  378 | extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur
      |                       ~~~~^~~~
../src/lib_ccx/ccx_encoders_webvtt.c:534:53: error: passing argument 1 of 'write' makes integer from pointer without a cast [-Wint-conversion]
  534 |                         written = write(fileno(context->out->fh), context->encoded_crlf, context->encoded_crlf_length);
      |                                         ~~~~~~~~~~~~^~~~
      |                                                     |
      |                                                     FILE *
/usr/include/unistd.h:378:27: note: expected 'int' but argument is of type 'FILE *'
  378 | extern ssize_t write (int __fd, const void *__buf, size_t __n) __wur
      |                       ~~~~^~~~
../src/lib_ccx/ccx_encoders_xds.c: In function 'xds_write_transcript_line_prefix':
../src/lib_ccx/ccx_encoders_xds.c:21:27: warning: comparison between pointer and integer
   21 |         if (!wb || wb->fh == -1)
      |                           ^~
../src/lib_ccx/ccx_encoders_xds.c:42:44: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   42 |                                 fdprintf(wb->fh, "%lld%c%03d|", start_time / 1000,
      |                                          ~~^~~~
      |                                            |
      |                                            FILE *
In file included from ../src/lib_ccx/ccx_encoders_xds.c:2:
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_xds.c:53:36: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   53 |                         fdprintf(wb->fh, "%s%c%03d|", buffer, context->millis_separator, start_time_dec);
      |                                  ~~^~~~
      |                                    |
      |                                    FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_xds.c:69:44: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   69 |                                 fdprintf(wb->fh, "%lld%s%03d|", end_time / 1000, context->millis_separator, end_time % 1000);
      |                                          ~~^~~~
      |                                            |
      |                                            FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_xds.c:79:36: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   79 |                         fdprintf(wb->fh, "%s%c%03d|", buffer, context->millis_separator, end_time_dec);
      |                                  ~~^~~~
      |                                    |
      |                                    FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_xds.c:86:28: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   86 |                 fdprintf(wb->fh, "%s|", mode);
      |                          ~~^~~~
      |                            |
      |                            FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/ccx_encoders_xds.c:91:28: error: passing argument 1 of 'fdprintf' makes integer from pointer without a cast [-Wint-conversion]
   91 |                 fdprintf(wb->fh, "%s|", XDSclasses_short[cur_xds_packet_class]);
      |                          ~~^~~~
      |                            |
      |                            FILE *
../src/lib_ccx/ccx_common_common.h:44:18: note: expected 'int' but argument is of type 'FILE *'
   44 | int fdprintf(int fd, const char *fmt, ...);
      |              ~~~~^~
../src/lib_ccx/output.c: In function 'dinit_write':
../src/lib_ccx/output.c:17:25: error: passing argument 1 of 'close' makes integer from pointer without a cast [-Wint-conversion]
   17 |                 close(wb->fh);
      |                       ~~^~~~
      |                         |
      |                         FILE *
In file included from ../src/lib_ccx/ccx_common_platform.h:45,
                 from ../src/lib_ccx/lib_ccx.h:7,
                 from ../src/lib_ccx/output.c:1:
/usr/include/unistd.h:358:23: note: expected 'int' but argument is of type 'FILE *'
  358 | extern int close (int __fd);
      |                   ~~~~^~~~
../src/lib_ccx/output.c: In function 'temporarily_close_output':
../src/lib_ccx/output.c:29:17: error: passing argument 1 of 'close' makes integer from pointer without a cast [-Wint-conversion]
   29 |         close(wb->fh);
      |               ~~^~~~
      |                 |
      |                 FILE *
/usr/include/unistd.h:358:23: note: expected 'int' but argument is of type 'FILE *'
  358 | extern int close (int __fd);
      |                   ~~~~^~~~
../src/lib_ccx/output.c:30:16: error: assignment to 'FILE *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
   30 |         wb->fh = -1;
      |                ^
../src/lib_ccx/output.c: In function 'temporarily_open_output':
../src/lib_ccx/output.c:41:32: warning: comparison between pointer and integer
   41 |         while (t < 5 && wb->fh == -1)
      |                                ^~
../src/lib_ccx/output.c:43:24: error: assignment to 'FILE *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
   43 |                 wb->fh = open(wb->filename, O_RDWR | O_CREAT | O_TRUNC | O_BINARY, S_IREAD | S_IWRITE);
      |                        ^
../src/lib_ccx/output.c:46:20: warning: comparison between pointer and integer
   46 |         if (wb->fh == -1)
      |                    ^~
../src/lib_ccx/output.c: In function 'init_write':
../src/lib_ccx/output.c:57:16: error: assignment to 'FILE *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
   57 |         wb->fh = -1;
      |                ^
../src/lib_ccx/output.c:65:24: error: assignment to 'FILE *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
   65 |                 wb->fh = open(filename, O_RDWR | O_CREAT | O_TRUNC | O_BINARY, S_IREAD | S_IWRITE);
      |                        ^
../src/lib_ccx/output.c:67:24: error: assignment to 'FILE *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
   67 |                 wb->fh = open(filename, O_RDWR | O_CREAT | O_APPEND | O_BINARY, S_IREAD | S_IWRITE);
      |                        ^
../src/lib_ccx/output.c:69:20: warning: comparison between pointer and integer
   69 |         if (wb->fh == -1)
      |                    ^~
../src/lib_ccx/output.c:82:33: error: passing argument 1 of 'close' makes integer from pointer without a cast [-Wint-conversion]
   82 |                         close(wb->fh);
      |                               ~~^~~~
      |                                 |
      |                                 FILE *
/usr/include/unistd.h:358:23: note: expected 'int' but argument is of type 'FILE *'
  358 | extern int close (int __fd);
      |                   ~~~~^~~~
../src/lib_ccx/utility.c: In function 'change_filename':
../src/lib_ccx/utility.c:472:30: warning: comparison between pointer and integer
  472 |         if (enc_ctx->out->fh != -1)
      |                              ^~
../src/lib_ccx/utility.c:475:43: error: passing argument 1 of 'close' makes integer from pointer without a cast [-Wint-conversion]
  475 |                         close(enc_ctx->out->fh);
      |                               ~~~~~~~~~~~~^~~~
      |                                           |
      |                                           FILE *
In file included from ../src/lib_ccx/ccx_common_platform.h:45,
                 from ../src/lib_ccx/lib_ccx.h:7,
                 from ../src/lib_ccx/utility.c:4:
/usr/include/unistd.h:358:23: note: expected 'int' but argument is of type 'FILE *'
  358 | extern int close (int __fd);
      |                   ~~~~^~~~
../src/lib_ccx/utility.c:476:34: error: assignment to 'FILE *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
  476 |                 enc_ctx->out->fh = -1;
      |                                  ^
../src/lib_ccx/utility.c:514:34: error: assignment to 'FILE *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
  514 |                 enc_ctx->out->fh = open(enc_ctx->out->filename, O_RDWR | O_CREAT | O_TRUNC | O_BINARY, S_IREAD | S_IWRITE);
      |                                  ^
../src/lib_ccx/utility.c:516:38: warning: comparison between pointer and integer
  516 |                 if (enc_ctx->out->fh == -1)
      |                                