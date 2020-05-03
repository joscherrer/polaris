/* Copyright 2019 Ryota Goto
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define XXXXXXX KC_NO

enum layer_names {
    _BASE,
    _FN,
    _NUMPAD,
    _CAPSLOCK,
    _DOFUS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_all( /* Base */
    KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, XXXXXXX, // 15
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, // 14
    MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, // 13
    KC_LSFT, XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, XXXXXXX, // 14
    KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, KC_SPC, XXXXXXX, KC_RALT, MO(1), OSL(1), KC_LCTL // 10
  ),
  [_FN] = LAYOUT_all( /* FN */
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, XXXXXXX, // 15 + 1
    DF(2), DEBUG, XXXXXXX, XXXXXXX, KC_BTN1, XXXXXXX, XXXXXXX, KC_PGUP, KC_UP, KC_PGDN, KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, RESET,
    KC_LSFT, XXXXXXX, BL_TOGG, BL_DEC, BL_INC, XXXXXXX, XXXXXXX, KC_END, XXXXXXX, DF(2), DF(3), DF(4), KC_RSFT, XXXXXXX, // 14 + 2
    KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, DF(4), XXXXXXX, KC_RALT, _______, _______, KC_RCTL // 10 + 2
  ),
  [_NUMPAD] = LAYOUT_all(
    XXXXXXX, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC, XXXXXXX, // + 1
    DF(0), KC_P7, KC_P8, KC_P9, KC_PPLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS,
    XXXXXXX, KC_P4, KC_P5, KC_P6, KC_PMNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,
    XXXXXXX, XXXXXXX, KC_P1, KC_P2, KC_P3, KC_PEQL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DF(0), KC_RSFT, XXXXXXX, // + 2
    XXXXXXX, XXXXXXX, KC_P0, XXXXXXX, KC_PDOT, XXXXXXX, XXXXXXX, XXXXXXX, DF(0), KC_RCTL // + 2
  ),
  [_CAPSLOCK] = LAYOUT_all(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, XXXXXXX, // + 1
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    KC_CAPS, KC_A, KC_S, KC_D, KC_D, KC_F, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, XXXXXXX, // + 2
    KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, KC_SPC, XXXXXXX, KC_LCTL, XXXXXXX, DF(0), KC_RCTL // + 2
  ),
	[_DOFUS] = LAYOUT_all(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC, XXXXXXX,
    KC_F2, KC_6, KC_7, KC_8, KC_9, KC_0, KC_Y, XXXXXXX, KC_I, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_F3, KC_DOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,
    KC_F1, XXXXXXX, KC_Z, KC_L, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DF(0), XXXXXXX,
    KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, DF(0), XXXXXXX, XXXXXXX, XXXXXXX, DF(0), XXXXXXX
  )
};

const rgblight_segment_t PROGMEM my_base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {1, 14, 0, 0, 0}
);
const rgblight_segment_t PROGMEM my_fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {1, 14, HSV_CYAN}
);
const rgblight_segment_t PROGMEM my_numpad_layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {1, 14, HSV_GREEN}
);
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {1, 14, HSV_RED}
);
const rgblight_segment_t PROGMEM my_dofus_layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {1, 14, HSV_YELLOW}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
  my_base_layer,
  my_fn_layer,
  my_numpad_layer,
  my_capslock_layer,
  my_dofus_layer
);

void keyboard_post_init_user(void) {
  rgblight_layers = my_rgb_layers;
  rgblight_enable_noeeprom();
  rgblight_sethsv_noeeprom(0,0,0);
}

layer_state_t layer_state_set_user(layer_state_t state) {
  rgblight_set_layer_state(_FN, layer_state_cmp(state, _FN));
  return state;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
  rgblight_set_layer_state(_NUMPAD, layer_state_cmp(state, _NUMPAD));
  rgblight_set_layer_state(_CAPSLOCK, layer_state_cmp(state, _CAPSLOCK));
  rgblight_set_layer_state(_DOFUS, layer_state_cmp(state, _DOFUS));
  return state;
}
