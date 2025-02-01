#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    YourName
#define PRODUCT         Ergodox_Custom
#define DESCRIPTION     "Handwired Split Keyboard with Pro Micro"

/* Key Matrix Size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 7

/* Key Matrix Assignments */
#define MATRIX_ROW_PINS { D3, D2, D0, D1, D4, D7 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2 }

/* Diode Direction */
#define DIODE_DIRECTION COL2ROW  // Common for handwired keyboards

/* Split Keyboard Options */
#define USE_SERIAL  // Enable serial communication for split halves
//#define USE_I2C    // Uncomment if using I2C instead of serial

/* Serial Settings */
#define SOFT_SERIAL_PIN D0  // Data line for serial communication

/* Debounce Time */
#define DEBOUNCE 5  // Milliseconds

/* Key Combination for Reset */
#define BOOTMAGIC_KEY_EEPROM_CLEAR  { LCTL, LALT, DEL }

/* Enable NKRO by default */
#define FORCE_NKRO

/* Tapping Term for Tap-Hold Keys */
#define TAPPING_TERM 200

/* Enable Dynamic Macros */
#define DYNAMIC_MACRO_ENABLE

/* Enable RGB if using */
#ifdef RGBLIGHT_ENABLE
    #define RGB_DI_PIN D3
    #define RGBLED_NUM 12
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8
#endif