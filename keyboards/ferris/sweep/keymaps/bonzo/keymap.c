/*
 * Copyright 2024 Lorenzo Bellina <lollobellina@gmail.com>
 *
 * This file is provided under MIT license
 */

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
                KC_Q,         KC_W,         KC_E,          KC_R,          KC_T, /*|*/           KC_Y,           KC_U,         KC_I,         KC_O,            KC_P,
        LALT_T(KC_A), LCTL_T(KC_S), LSFT_T(KC_D),  LGUI_T(KC_F),          KC_G, /*|*/           KC_H,   LGUI_T(KC_J), LSFT_T(KC_K), LCTL_T(KC_L), LALT_T(KC_SCLN),
                KC_Z,         KC_X,         KC_C,          KC_V,          KC_B, /*|*/           KC_N,           KC_M,      KC_COMM,       KC_DOT,         KC_SLSH,
                                                  LT(3, KC_ESC), LT(1, KC_SPC), /*|*/ LT(2, KC_BSPC), LT(4, KC_ENT)
    ),

    [1] = LAYOUT_split_3x5_2(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, /*|*/ KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_NO,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, /*|*/ KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_NO,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, /*|*/   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                                     KC_NO,   KC_NO, /*|*/  KC_DEL,   KC_NO
    ),

    [2] = LAYOUT_split_3x5_2(
        KC_F12, KC_F7, KC_F8, KC_F9,   TO(5), /*|*/ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_F11, KC_F4, KC_F5, KC_F6, KC_CAPS, /*|*/ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_F10, KC_F1, KC_F2, KC_F3, CW_TOGG, /*|*/ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                              KC_NO,  KC_TAB, /*|*/   KC_NO,   KC_NO
    ),

    [3] = LAYOUT_split_3x5_2(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, /*|*/ KC_LCBR, KC_RCBR, KC_DQUO, KC_TILD, KC_PIPE,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, /*|*/ KC_LBRC, KC_RBRC, KC_QUOT,  KC_GRV, KC_BSLS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, /*|*/   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                     KC_NO,   KC_NO, /*|*/   KC_NO,   KC_NO
    ),

    [4] = LAYOUT_split_3x5_2(
          KC_NO, KC_7, KC_8,  KC_9,    KC_0, /*|*/ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_COMM, KC_4, KC_5,  KC_6,  KC_EQL, /*|*/ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_DOT, KC_1, KC_2,  KC_3, KC_MINS, /*|*/ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                             KC_NO,   KC_NO, /*|*/   KC_NO,   KC_NO
    ),

    [5] = LAYOUT_split_3x5_2(
        KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, /*|*/   KC_NO, KC_MUTE, KC_MPLY,   KC_NO, KC_NO,
          KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, /*|*/ KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
          KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, /*|*/   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                                 TO(0), TO(0), /*|*/   TO(0),   TO(0)
    ),
};
// clang-format on

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
