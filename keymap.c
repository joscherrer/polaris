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


enum layer_names {
    _BASE,
    _FN,
    _FN2,
    _DOFUS
};

enum custom_keycodes {
    WORKLEFT = SAFE_RANGE,
    WORKRGHT,
    CODEBLCK,
    DFZAP,
    KCAG,
    KCAC,
    KCAT,
    KCEA,
    KCEG,
    KCEC,
    KCET,
    KCIT,
    KCIC,
    KCOC,
    KCOT,
    KCUG,
    KCUC,
    KCUT,
    KCYT
};

enum combos {
    CAG, // Combo A grave
    CAC, // Combo A circumflex
    CAT, // Combo A trema
    CEA, // Combo E acute
    CEG, // Combo E grave
    CEC, // Combo E circumflex
    CET, // Combo E trema
    CIT, // Combo I trema
    CIC, // Combo I circumflex
    COC, // Combo O circumflex
    COT, // Combo O trema
    CUG, // Combo U grave
    CUC, // Combo U circumflex
    CUT, // Combo U trema
    CYT, // Combo Y trema
    COMBO_COUNT
};

uint16_t COMBO_LEN = COMBO_COUNT;

const uint16_t PROGMEM cag_combo[] = { KC_A, KC_J, COMBO_END};
const uint16_t PROGMEM cac_combo[] = { KC_A, KC_I, COMBO_END};
const uint16_t PROGMEM cat_combo[] = { KC_A, KC_K, COMBO_END};
const uint16_t PROGMEM cea_combo[] = { KC_E, KC_L, COMBO_END};
const uint16_t PROGMEM ceg_combo[] = { KC_E, KC_J, COMBO_END};
const uint16_t PROGMEM cec_combo[] = { KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM cet_combo[] = { KC_E, KC_K, COMBO_END};
const uint16_t PROGMEM cit_combo[] = { KC_I, KC_D, COMBO_END};
const uint16_t PROGMEM cic_combo[] = { KC_I, KC_F, COMBO_END};
const uint16_t PROGMEM coc_combo[] = { KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM cot_combo[] = { KC_O, KC_D, COMBO_END};
const uint16_t PROGMEM cug_combo[] = { KC_U, KC_S, COMBO_END};
const uint16_t PROGMEM cuc_combo[] = { KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM cut_combo[] = { KC_U, KC_D, COMBO_END};
const uint16_t PROGMEM cyt_combo[] = { KC_Y, KC_D, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [CAG] = COMBO(cag_combo, KCAG),
    [CAC] = COMBO(cac_combo, KCAC),
    [CAT] = COMBO(cat_combo, KCAT),
    [CEA] = COMBO(cea_combo, KCEA),
    [CEG] = COMBO(ceg_combo, KCEG),
    [CEC] = COMBO(cec_combo, KCEC),
    [CET] = COMBO(cet_combo, KCET),
    [CIT] = COMBO(cit_combo, KCIT),
    [CIC] = COMBO(cic_combo, KCIC),
    [COC] = COMBO(coc_combo, KCOC),
    [COT] = COMBO(cot_combo, KCOT),
    [CUG] = COMBO(cug_combo, KCUG),
    [CUC] = COMBO(cuc_combo, KCUC),
    [CUT] = COMBO(cut_combo, KCUT),
    [CYT] = COMBO(cyt_combo, KCYT)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case KCAG:
        if (record->event.pressed) {
            tap_code16(KC_GRV);
            tap_code16(KC_A);
        }
        break;
    case KCAC:
        if (record->event.pressed) {
            tap_code16(KC_CIRC);
            tap_code16(KC_A);
        }
        break;
    case KCAT:
        if (record->event.pressed) {
            tap_code16(KC_DQT);
            tap_code16(KC_A);
        }
        break;
    case KCEA:
        if (record->event.pressed) {
            tap_code16(KC_QUOT);
            tap_code16(KC_E);
        }
        break;
    case KCEG:
        if (record->event.pressed) {
            tap_code16(KC_GRV);
            tap_code16(KC_E);
        }
        break;
    case KCEC:
        if (record->event.pressed) {
            tap_code16(KC_CIRC);
            tap_code16(KC_E);
        }
        break;
    case KCET:
        if (record->event.pressed) {
            tap_code16(KC_DQT);
            tap_code16(KC_E);
        }
        break;
    case KCIT:
        if (record->event.pressed) {
            tap_code16(KC_DQT);
            tap_code16(KC_I);
        }
        break;
    case KCIC:
        if (record->event.pressed) {
            tap_code16(KC_CIRC);
            tap_code16(KC_I);
        }
        break;
    case KCOC:
        if (record->event.pressed) {
            tap_code16(KC_CIRC);
            tap_code16(KC_O);
        }
        break;
    case KCOT:
        if (record->event.pressed) {
            tap_code16(KC_DQT);
            tap_code16(KC_O);
        }
        break;
    case KCUG:
        if (record->event.pressed) {
            tap_code16(KC_GRV);
            tap_code16(KC_U);
        }
        break;
    case KCUC:
        if (record->event.pressed) {
            tap_code16(KC_CIRC);
            tap_code16(KC_U);
        }
        break;
    case KCUT:
        if (record->event.pressed) {
            tap_code16(KC_DQT);
            tap_code16(KC_U);
        }
        break;
    case KCYT:
        if (record->event.pressed) {
            tap_code16(KC_DQT);
            tap_code16(KC_Y);
        }
        break;
    case WORKLEFT:
        if (record->event.pressed) {
            tap_code16(LALT(LCTL(KC_HOME)));
            SEND_STRING(SS_DELAY(100));
            tap_code16(LGUI(LCTL(KC_LEFT)));
        }
        break;
    case WORKRGHT:
        if (record->event.pressed) {
            tap_code16(LALT(LCTL(KC_HOME)));
            SEND_STRING(SS_DELAY(100));
            tap_code16(LGUI(LCTL(KC_RGHT)));
        }
        break;
    case CODEBLCK:
        if (record->event.pressed) {
            for (int i = 0; i < 6; i++)
                tap_code16(KC_GRV);

            for (int i = 0; i < 3; i++)
                tap_code16(KC_LEFT);
        }
        break;
    case DFZAP:
        if (record->event.pressed) {
            tap_code16(KC_BTN1);
            tap_code16(KC_PASTE);
            tap_code16(KC_F3);
        }
        break;
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Map
    // OOOOOOOOOOOOOO.
    // OOOOOOOOOOOOOO
    // OOOOOOOOOOOOO
    // O.OOOOOOOOOOO.
    // OOO.O.OOOO

    [_BASE] = LAYOUT_all( /* Base */
        KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, XXXXXXX,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, XXXXXXX,
        KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, KC_SPC, XXXXXXX, KC_RALT, MO(1), OSL(1), KC_RCTL
    ),
    [_FN] = LAYOUT_all( /* FN */
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, XXXXXXX,
        MO(2), WORKLEFT, WORKRGHT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGUP, KC_UP, KC_PGDN, KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN1, XXXXXXX, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_GESC, XXXXXXX, KC_GRV,
        KC_LSFT, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, KC_END, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, XXXXXXX,
        KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, TG(3), XXXXXXX, KC_RALT, _______, _______, KC_RCTL
    ),
    [_FN2] = LAYOUT_all( /* FN2 */
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, RESET,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CODEBLCK, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
        [_DOFUS] = LAYOUT_all( /* DOFUS */
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC, XXXXXXX,
        KC_F2, KC_6, KC_7, KC_8, KC_9, KC_0, XXXXXXX, XXXXXXX, KC_I, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_F3, LSFT(KC_COMM), LSFT(KC_DOT), DFZAP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,
        KC_F1, XXXXXXX, KC_Z, KC_L, KC_Y, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(3), XXXXXXX,
        KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, TG(3), XXXXXXX, XXXXXXX, XXXXXXX, TG(3), KC_RCTL
    )
};

const rgblight_segment_t PROGMEM my_base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 14, 0, 0, 0}
);
const rgblight_segment_t PROGMEM my_fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 14, HSV_CYAN}
);
const rgblight_segment_t PROGMEM my_fn2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 14, HSV_GREEN}
);
const rgblight_segment_t PROGMEM my_dofus_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 14, HSV_YELLOW}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_base_layer,
    my_fn_layer,
    my_fn2_layer,
    my_dofus_layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers;
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom(0,0,0);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(_FN, layer_state_cmp(state, _FN));
    rgblight_set_layer_state(_FN2, layer_state_cmp(state, _FN2));
    rgblight_set_layer_state(_DOFUS, layer_state_cmp(state, _DOFUS));
    return state;
}
