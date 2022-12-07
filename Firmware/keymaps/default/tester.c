/*
    █▀▀▀█
     ■■■
    █▄▄▄█ list.com                     notification.h            Last modified: May 28, 2022
    ----------------------------------------------------------------------------------------

    This is the firmware for the IDK first edition keyboard. Designed and built by @t0kies.

    For more information please feel free to reachout to me in github
    http://github.com/t0kies
*/

static const char PROGMEM idle[2][fram_width] = {
	// 'pixil-frame-2, 
32x32px
{	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0xe0, 
0x40, 
0x80, 
0x00, 
0x00, 
0x00, 
0x80, 
0x40, 
0xe0, 
	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0xf0, 
0x08, 
0xe8, 
0x10, 
0x00, 
0x00, 
0x00, 
	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x22, 
0x3e, 
0x49, 
0x84, 
0x10, 
0xc9, 
0xd1, 
0x85, 
0x00, 
0x08, 
0x55, 
	0x3e, 
0x30, 
0x10, 
0x10, 
0x10, 
0x10, 
0x10, 
0x10, 
0x10, 
0xcf, 
0x20, 
0x1f, 
0x00, 
0x00, 
0x00, 
0x00, 
	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x03, 
0xfc, 
0x7f, 
0x3f, 
0x1f, 
0x1c, 
0x18, 
0xf0, 
	0x60, 
0x38, 
0x10, 
0x30, 
0x70, 
0xf0, 
0x20, 
0x20, 
0x40, 
0xff, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00 
	},
	// 'pixil-frame-1, 
32x32px
{	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0xe0, 
0x40, 
0x80, 
0x00, 
0x00, 
0x00, 
0x80, 
0x40, 
0xe0, 

	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0xf0, 
0x08, 
0xf0, 
0x00, 
0x00, 
0x00, 
0x00, 

	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x22, 
0x3e, 
0x49, 
0x80, 
0x08, 
0xc5, 
0xc9, 
0x81, 
0x00, 
0x08, 
0x5d, 

	0x3e, 
0x28, 
0x08, 
0x08, 
0x08, 
0x08, 
0x08, 
0x08, 
0x08, 
0xcf, 
0x20, 
0x1f, 
0x00, 
0x00, 
0x00, 
0x00, 

	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x03, 
0xfc, 
0x7f, 
0x3f, 
0x1f, 
0x1c, 
0x18, 
0xf0, 

	0x60, 
0x38, 
0x08, 
0x18, 
0x70, 
0xf0, 
0x20, 
0x20, 
0x40, 
0xff, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 

	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 

	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00 
	},
	// 'pixil-frame-0, 
32x32px
{	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0xe0, 
0x40, 
0x80, 
0x00, 
0x00, 
0x00, 
0x80, 
0x40, 
0xe0, 

	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x10, 
0xe8, 
0x08, 
0xf0, 
0x00, 
0x00, 
0x00, 
0x00, 

	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x22, 
0x3e, 
0x69, 
0x84, 
0x10, 
0x89, 
0x91, 
0x85, 
0x00, 
0x08, 
0x55, 

	0x3e, 
0x30, 
0x10, 
0x10, 
0x10, 
0x10, 
0x10, 
0x10, 
0x10, 
0xcf, 
0x20, 
0x1f, 
0x00, 
0x00, 
0x00, 
0x00, 

	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x03, 
0xfc, 
0x41, 
0x3f, 
0x1f, 
0x1c, 
0x18, 
0xf0, 

	0xc0, 
0x38, 
0x30, 
0x30, 
0x70, 
0xf0, 
0x20, 
0x20, 
0x40, 
0xff, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 

	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 

	0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00, 
0x00
    }
};