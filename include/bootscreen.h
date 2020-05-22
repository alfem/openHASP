// Images can be converted to XBM format by using the online converter here:
// https://www.online-utility.org/image/convert/to/XBM

// The output must be pasted in a header file, renamed and adjusted to appear
// as as a const unsigned char array in PROGMEM (FLASH program memory).

// The xbm format adds padding to pixel rows so they are a whole number of bytes
// In this example 50 pixel width means 56 bits = 7 bytes
// the 50 height then means array uses 50 x 7 = 350 bytes of FLASH
// The library ignores the padding bits when drawing the image on the display.

// The NetWize logo uses the MaterialDesign icons font, released under the OFL license

#include <pgmspace.h> // PROGMEM support header

#define logoWidth 148
#define logoHeight 24

// Image is stored in this array
PROGMEM const unsigned char bootscreen[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0F, 0x0F, 0xC0, 0xFF, 0x03, 0xF8, 0x7F, 0x00, 0x0F, 0x00, 0x0F, 0x80, 0x7F, 0x00, 0xFE, 0x1F, 0x00, 0xFF, 0x0F,
    0x1F, 0x0F, 0xC0, 0xFF, 0x03, 0xF8, 0x7F, 0x00, 0x0F, 0x00, 0x0F, 0x80, 0x7F, 0x00, 0xFE, 0x1F, 0x00, 0xFF, 0x0F,
    0x1F, 0x0F, 0xC0, 0xFF, 0x03, 0xF8, 0x7F, 0x00, 0x0F, 0x0F, 0x0F, 0x80, 0x7F, 0x00, 0xFE, 0x1F, 0x00, 0xFF, 0x0F,
    0x1F, 0x0F, 0xC0, 0xFF, 0x03, 0xF8, 0x7F, 0x00, 0x0F, 0x0F, 0x0F, 0x80, 0x7F, 0x00, 0xFE, 0x1F, 0x00, 0xFF, 0x0F,
    0x3F, 0x0F, 0xC0, 0x03, 0x00, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0x00, 0x1E, 0x00, 0x0F, 0x00,
    0x3F, 0x0F, 0xC0, 0x03, 0x00, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0x00, 0x0F, 0x00, 0x0F, 0x00,
    0x7F, 0x0F, 0xC0, 0x03, 0x00, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0x80, 0x07, 0x00, 0x0F, 0x00,
    0x7F, 0x0F, 0xC0, 0x03, 0x00, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0x80, 0x07, 0x00, 0x0F, 0x00,
    0xFF, 0x0F, 0xC0, 0xFF, 0x03, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0xC0, 0x03, 0x00, 0xFF, 0x0F,
    0xFF, 0x0F, 0xC0, 0xFF, 0x03, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0xE0, 0x01, 0x00, 0xFF, 0x0F,
    0xFF, 0x0F, 0xC0, 0xFF, 0x03, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0xE0, 0x01, 0x00, 0xFF, 0x0F,
    0xFF, 0x0F, 0xC0, 0xFF, 0x03, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0xF0, 0x00, 0x00, 0xFF, 0x0F,
    0xEF, 0x0F, 0xC0, 0x03, 0x00, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0x78, 0x00, 0x00, 0x0F, 0x00,
    0xEF, 0x0F, 0xC0, 0x03, 0x00, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0x78, 0x00, 0x00, 0x0F, 0x00,
    0xCF, 0x0F, 0xC0, 0x03, 0x00, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0x3C, 0x00, 0x00, 0x0F, 0x00,
    0xCF, 0x0F, 0xC0, 0x03, 0x00, 0x80, 0x07, 0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x1E, 0x00, 0x1E, 0x00, 0x00, 0x0F, 0x00,
    0x8F, 0x0F, 0xC0, 0xFF, 0x03, 0x80, 0x07, 0x00, 0xFF, 0xFF, 0x0F, 0x80, 0x7F, 0x00, 0xFE, 0x1F, 0x00, 0xFF, 0x0F,
    0x8F, 0x0F, 0xC0, 0xFF, 0x03, 0x80, 0x07, 0x00, 0xFF, 0xFF, 0x0F, 0x80, 0x7F, 0x00, 0xFE, 0x1F, 0x00, 0xFF, 0x0F,
    0x8F, 0x0F, 0xC0, 0xFF, 0x03, 0x80, 0x07, 0x00, 0xFE, 0xFF, 0x07, 0x80, 0x7F, 0x00, 0xFE, 0x1F, 0x00, 0xFF, 0x0F,
    0x0F, 0x0F, 0xC0, 0xFF, 0x03, 0x80, 0x07, 0x00, 0xFC, 0xFF, 0x03, 0x80, 0x7F, 0x00, 0xFE, 0x1F, 0x00, 0xFF, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
