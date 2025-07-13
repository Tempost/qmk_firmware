// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include QMK_KEYBOARD_H

enum custom_layers {
     _QWERTY,
     _GAME,
     _LOWER,
     _RAISE,
};

#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LCTL_T(KC_F)

#define HOME_J RCTL_T(KC_J)
#define HOME_K RSFT_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
     TO(1),   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                  KC_6,   KC_7,   KC_8,   KC_9,    KC_0,      KC_BSPC,
     KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                  KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,      KC_DEL,
     QK_GESC, HOME_A, HOME_S, HOME_D, HOME_F, KC_G,                  KC_H,   HOME_J, HOME_K, HOME_L,  HOME_SCLN, KC_QUOT,
     KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B, KC_HOME, KC_END, KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH,   KC_RSFT,
                                   KC_LGUI, TL_LOWR, KC_SPC, KC_ENT, TL_UPPR, KC_LALT
  ),

  [_GAME] = LAYOUT(
     TO(0),   _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
     _______, KC_A,    KC_S,    KC_D,    KC_F,    _______,                     _______, KC_J,    KC_K,    KC_L,    KC_SCLN, _______,
     _______, _______, _______, _______, _______, _______, KC_LGUI,   _______, _______, _______, _______, _______, _______, _______,
                                         KC_LCTL, _______, _______,   _______, _______, _______
  ),

  [_LOWER] = LAYOUT(
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PGUP,
     KC_GRV,  _______, KC_UP,   _______, QK_BOOT, _______,                   _______, KC_7,    KC_8,    KC_9,    KC_0,    KC_PGDN,
     KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_LBRC,                   KC_RBRC, KC_4,    KC_5,    KC_6,    KC_PLUS, KC_PIPE,
     RM_NEXT, EE_CLR,  _______, _______, _______, KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_1,    KC_2,    KC_3,    KC_MINS, _______,
                                         _______, _______,  KC_DEL, KC_DEL,  _______, KC_P0
  ),

  [_RAISE] = LAYOUT(
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
     RM_TOGG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, QK_BOOT,
     RM_NEXT, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_UNDS,                   KC_EQL,  KC_HOME, RM_HUEU, RM_SATU, RM_VALU, KC_BSLS,
     KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_MINS, _______, _______, KC_PLUS, KC_END,  RM_HUED, RM_SATD, RM_VALD, EE_CLR,
                                    _______, _______, KC_BACKSPACE, KC_BACKSPACE, _______, _______
  ),
};
