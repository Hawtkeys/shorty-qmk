// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =   { ENCODER_CCW_CW(HYPR(KC_VOLU), HYPR(KC_VOLD)), ENCODER_CCW_CW(HYPR(KC_MS_WH_UP), HYPR(KC_MS_WH_DOWN))  }
    //                  Encoder 1                                     Encoder 2
};
#endif
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        // KC_A,   /* KC_NO,   KC_NO,   KC_NO, */   KC_B,    
        /* KC_NO, */          KC_P7,   KC_P8,   KC_P9,   /* KC_NO, */
        /* KC_NO, */          KC_P4,   KC_P5,   KC_P6,   /* KC_NO, */   
        /* KC_NO, */          KC_P1,   KC_P2,   KC_P3   /* KC_NO  */  
    )
};
