// Copyright 2023 aki27 (@aki27kbd)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

//#define VIAL_KEYBOARD_UID {0xC4, 0x18, 0xCC, 0x6D, 0x1C, 0x16, 0x5B, 0x8D}
//#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
//#define VIAL_UNLOCK_COMBO_COLS {1, 11}

/* VIA */
//#define DYNAMIC_KEYMAP_LAYER_COUNT 8


/* key matrix size */
//#define MATRIX_COLS 13
//#define MATRIX_ROWS 4


/* tapping term */
// #define TAPPING_FORCE_HOLD
//#define TAPPING_TERM 200
// #define IGNORE_MOD_TAP_INTERRUPT

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

#ifdef COMBO_ENABLE
#    define COMBO_COUNT 6
#    define COMBO_TERM 200
#endif

/* Encoder */
//#define ENCODERS_PAD_A { GP11 }
//#define ENCODERS_PAD_B { GP12 }
//#define ENCODER_RESOLUTION 4

/* Matrix*/
//#define MATRIX_COL_PINS { GP25, GP24, GP23, GP22, GP21, GP26, GP27, GP20, GP19, GP18, GP17, GP16, GP13 }
//#define MATRIX_ROW_PINS { GP28, GP10, GP14, GP15 }

/* COL2ROW, ROW2COL */
//#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
//#define DEBOUNCE 5


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap (Very Important for Scroll Lock!!!) */
#undef LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE


/* RGB LED */
//#define WS2812_PIO_USE_PIO1
#define WS2812_DI_PIN GP29

#ifdef RGBLIGHT_ENABLE
    #define RGBLED_NUM 20
    #define RGBLIGHT_LIMIT_VAL 255
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17

    // #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_EFFECT_ALTERNATING
#endif


/* Trackball */

#ifdef POINTING_DEVICE_ENABLE

//#    undef RP_SPI_USE_SPI0
//#    define RP_SPI_USE_SPI0 TRUE
//#    undef RP_SPI_USE_SPI1
//#    define RP_SPI_USE_SPI1 FALSE
#    define SPI_DRIVER SPID0

//#    define SPI_SCK_PIN GP22 //6
//#    define SPI_MISO_PIN GP24 //4
//#    define SPI_MOSI_PIN GP23 //7
#    define SPI_SCK_PIN GP18
#    define SPI_MISO_PIN GP16
#    define SPI_MOSI_PIN GP19

#endif


#ifndef PMW33XX_CS_PIN
#    define PMW33XX_CS_PIN GP17
#endif
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_INVERT_Y
//#define ROTATIONAL_TRANSFORM_ANGLE 90
#define POINTING_DEVICE_ROTATION_180
