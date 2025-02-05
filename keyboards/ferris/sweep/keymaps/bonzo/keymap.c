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
        LALT_T(KC_A), LCTL_T(KC_S), LSFT_T(KC_D),  LGUI_T(KC_F),          KC_G, /*|*/           KC_H,   RGUI_T(KC_J), RSFT_T(KC_K), RCTL_T(KC_L), RALT_T(KC_SCLN),
                KC_Z,         KC_X,         KC_C,          KC_V,          KC_B, /*|*/           KC_N,           KC_M,      KC_COMM,       KC_DOT,         KC_SLSH,
                                                         KC_ESC, LT(1, KC_SPC), /*|*/ LT(2, KC_BSPC),  LT(3, KC_ENT)
    ),

    [1] = LAYOUT_split_3x5_2(
                KC_F12,         KC_F7,         KC_F8,         KC_F9, KC_NO, /*|*/ KC_HOME,         KC_PGDN,         KC_PGUP,          KC_END,         KC_NO,
        LALT_T(KC_F11), LCTL_T(KC_F4), LSFT_T(KC_F5), LGUI_T(KC_F6), KC_NO, /*|*/ KC_LEFT, RGUI_T(KC_DOWN),   RSFT_T(KC_UP), RCTL_T(KC_RGHT), RALT_T(KC_NO),
                KC_F10,         KC_F1,         KC_F2,         KC_F3, KC_NO, /*|*/   KC_NO,           KC_NO,           KC_NO,           KC_NO,         KC_NO,
                                                              KC_NO, KC_NO, /*|*/  KC_DEL,           KC_NO
    ),

    [2] = LAYOUT_split_3x5_2(
                   KC_1,           KC_2,            KC_3,            KC_4,    KC_5, /*|*/    KC_6,            KC_7,            KC_8,            KC_9,           KC_0,
        LALT_T(KC_CAPS), LCTL_T(KC_GRV), LSFT_T(KC_TRNS), LGUI_T(KC_TRNS), KC_TRNS, /*|*/ KC_LBRC, RGUI_T(KC_RBRC), RSFT_T(KC_QUOT), RCTL_T(KC_MINS), RALT_T(KC_EQL),
                CW_TOGG,        KC_TRNS,         KC_TRNS,         KC_TRNS, KC_TRNS, /*|*/   KC_NO,           KC_NO,         KC_TRNS,         KC_TRNS,        KC_BSLS,
                                                                    KC_NO,  KC_TAB, /*|*/   KC_NO,           KC_NO
    ),

    [3] = LAYOUT_split_3x5_2(
        KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, /*|*/   KC_NO, KC_MUTE, KC_MPLY,   KC_NO, KC_NO,
          KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, /*|*/ KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
          KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, /*|*/   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                                 KC_NO, KC_NO, /*|*/   KC_NO,   KC_NO
    ),
};
// clang-format on

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
