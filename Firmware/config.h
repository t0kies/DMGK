/*
    █▀▀▀█
     ■■■
    █▄▄▄█ list.com                     notification.h            Last modified: May 28, 2022
    ----------------------------------------------------------------------------------------

    This is the firmware for the IDK first edition keyboard. Designed and built by @t0kies.

    For more information please feel free to reachout to me in github
    http://github.com/t0kies
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED#include <hidapi.h>

#define PRODUCT_ID 0x0002
#define DEVICE_VER 0x0003
#define MANUFACTURER Xilist
#define PRODUCT IDK

/* split keyboard */
#define USE_I2C
#define MASTER_LEFT

/* key matrix size */
#define MATRIX_ROWS 14
#define MATRIX_COLS 5

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { F5, F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6 }
#define UNUSED_PINS 


#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { D4 }
#define ENCODER_RESOLUTION 4

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Oled */
/* define fonts */
#define OLED_FONT_H "keyboards/idk/assets/fonts/glcdfont.c"

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

// /* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
// /* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
