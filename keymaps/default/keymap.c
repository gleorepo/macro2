// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
  _ART_BASE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_ART_BASE] = LAYOUT_ortho_2x4(
KC_A,OSM(KC_LSFT),KC_NO,KC_NO,
KC_B,KC_NO,KC_NO,KC_NO
),

};
