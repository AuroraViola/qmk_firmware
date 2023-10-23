 /* Copyright 2021 OpenAnnePro community
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

enum keycodes {
    RED0 = SAFE_RANGE,
	RED5,
	RED10,
	RED15,
	ORNG21,
	ORNG26,
	ORNG31,
	ORNG36,
	YLLW43,
	YLLW53,
	YLLW63,
	YLLW73,
	GRN85,
	GRN95,
	GRN105,
	GRN115,
	CYAN127,
	CYAN132,
	CYAN137,
	CYAN142,
	AZRE148,
	AZRE153,
	AZRE158,
	AZRE163,
	BLUE169,
	BLUE172,
	BLUE175,
	BLUE178,
	VILT180,
	VILT185,
	VILT190,
	VILT195,
	MGTA201,
	MGTA206,
	MGTA211,
	MGTA217,
	ROSE222,
	ROSE230,
	ROSE238,
	ROSE245,
    WHITE,
    RAINBOW,
    LESBIAN,
    TRANS,
};

enum anne_pro_layers {
    BASE,
    FN1,
    FN2,
    COLOR,
};

// clang-format off
// Key symbols are based on QMK. Use them to remap your keyboard
/*
* Layer BASE
* ,-----------------------------------------------------------------------------------------.
* | esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |    Bksp   |
* |-----------------------------------------------------------------------------------------+
* | Tab    |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  |  [  |  ]  |   \    |
* |-----------------------------------------------------------------------------------------+
* | Caps    |  a  |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |  '  |    Enter    |
* |-----------------------------------------------------------------------------------------+
* | Shift      |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  |    Shift       |
* |-----------------------------------------------------------------------------------------+
* | Ctrl  |  L1   |  Alt  |               space             |  Alt  |  FN1  |  FN2  | Ctrl  |
* \-----------------------------------------------------------------------------------------/
* Layer TAP in BASE
* ,-----------------------------------------------------------------------------------------.
* |     |     |     |     |     |     |     |     |     |     |     |     |     |           |
* |-----------------------------------------------------------------------------------------+
* |        |     |     |     |     |     |     |     |     |     |     |     |     |        |
* |-----------------------------------------------------------------------------------------+
* |         |     |     |     |     |     |     |     |     |     |     |     |             |
* |-----------------------------------------------------------------------------------------+
* |            |     |     |     |     |     |     |     |     |     |     |       UP       |
* |-----------------------------------------------------------------------------------------+
* |       |       |       |                                 |       |  LEFT | DOWN  | RIGHT |
* \-----------------------------------------------------------------------------------------/
*/
 const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [BASE] = LAYOUT_60_ansi( /* Base */
    KC_ESC,           KC_1,    KC_2,    KC_3, KC_4, KC_5, KC_6,   KC_7, KC_8, KC_9,    KC_0,             KC_MINS,          KC_EQL,        KC_BSPC,
    KC_TAB,           KC_Q,    KC_W,    KC_E, KC_R, KC_T, KC_Y,   KC_U, KC_I, KC_O,    KC_P,             KC_LBRC,          KC_RBRC,       KC_BSLS,
    LT(FN1, KC_CAPS), KC_A,    KC_S,    KC_D, KC_F, KC_G, KC_H,   KC_J, KC_K, KC_L,    KC_SCLN,          KC_QUOT,          KC_ENT,
    KC_LSFT,                   KC_Z,    KC_X, KC_C, KC_V, KC_B,   KC_N, KC_M, KC_COMM, KC_DOT,           KC_SLSH,          RSFT_T(KC_UP),
    KC_LCTL,          KC_LGUI, KC_LALT,                   KC_SPC,             KC_RALT, LT(FN1, KC_LEFT), LT(FN2, KC_DOWN), RCTL_T(KC_RGHT)
),
  /*
  * Layer FN1
  * ,-----------------------------------------------------------------------------------------.
  * |  `  |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |  DELETE   |
  * |-----------------------------------------------------------------------------------------+
  * | Tab    |  q  | UP  |  e  |  r  |  t  |  y  |  u  |  i  |  o  | PS | HOME | END |   \    |
  * |-----------------------------------------------------------------------------------------+
  * | Esc     |LEFT |DOWN |RIGHT|  f  |  g  |  h  |  j  |  k  |  l  | PGUP|PGDN |    Enter    |
  * |-----------------------------------------------------------------------------------------+
  * | Shift      |V-UP |V-DWN|MUTE |  v  |  b  |  n  |  m  |  ,  |INSRT| DEL |    Shift       |
  * |-----------------------------------------------------------------------------------------+
  * | Ctrl  |  L1   |  Alt  |               space             |  Alt  |  FN1  |  FN2  | Ctrl  |
  * \-----------------------------------------------------------------------------------------/
  *
  */
 [FN1] = LAYOUT_60_ansi( /* FN1 */
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    _______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_HOME, KC_END,  _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_PGUP, KC_PGDN, _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, KC_INS,  KC_DEL,  _______,
    _______, _______, _______,                            _______,                   _______, _______, MO(FN2), _______
),
  /*
  * Layer FN2
  * ,-----------------------------------------------------------------------------------------.
  * |  ~  | BT1 | BT2 | BT3 | BT4 |  F5 |  F6 | F7 | F8 | TOG | MUTE| VOLD | VOLU |    Bksp   |
  * |-----------------------------------------------------------------------------------------+
  * | Tab    |  q  | UP  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |PLAY| PREV | NEXT|   \    |
  * |-----------------------------------------------------------------------------------------+
  * | Esc     |LEFT |DOWN |RIGHT|  f  |  g  |  h  |  j  |  k  |  l  | PGUP|PGDN |    Enter    |
  * |-----------------------------------------------------------------------------------------+
  * | Shift      |  z  |  x  | RGB |  v  |  b  |  n  |  m  |  ,  |INSRT| NUM.|    Shift       |
  * |-----------------------------------------------------------------------------------------+
  * | Ctrl  |  L1   |  Alt  |               space             |  Alt  |  FN1  |  FN2  | Ctrl  |
  * \-----------------------------------------------------------------------------------------/
  *
  */
 [FN2] = LAYOUT_60_ansi( /* FN2 */
    _______, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, _______, _______, _______, _______, KC_AP_RGB_TOG, KC_MUTE, KC_VOLD, KC_VOLU, KC_PAUSE,
    MO(FN2), _______,    KC_UP,      _______,    _______,    _______, _______, _______, _______, _______,       KC_MPLY,       KC_MPRV,       KC_MNXT,        _______,
    _______, KC_LEFT,    KC_DOWN,    KC_RGHT,    _______,    _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,       KC_PGUP,       KC_PGDN,       _______,
    _______,             _______,    _______,    _______,    _______, _______, _______, _______, _______,       KC_INS,        KC_KP_DOT,        _______,
    _______, _______,    _______,                                     _______,                   _______,       MO(FN1),       MO(FN2),       OSL(COLOR)
 ),
 [COLOR] = LAYOUT_60_ansi( /* COLOR */
    _______, RED0, ORNG21, YLLW43, GRN85, CYAN127, AZRE148, BLUE169, VILT180, MGTA201, ROSE222, _______, _______, RAINBOW,
    _______, RED5, ORNG26, YLLW53, GRN95, CYAN132, AZRE153, BLUE172, VILT185, MGTA206, ROSE230, _______, _______, LESBIAN,
    _______, RED10, ORNG31, YLLW63, GRN105, CYAN137, AZRE158, BLUE175, VILT190, MGTA211, ROSE238, _______, TRANS,
    _______, RED15, ORNG36, YLLW73, GRN115, CYAN142, AZRE163, BLUE178, VILT195, MGTA217, ROSE245, _______,
    _______, _______, _______,                   WHITE,                            _______, _______, _______, _______
 ),
};
// clang-format on


void keyboard_post_init_user(void) {
    ap2_led_enable();
    ap2_led_set_profile(7);
}

bool led_update_user(led_t leds) {
    if (leds.caps_lock) {
        // Set the caps-lock to red
        const ap2_led_t color = {.p.red = 0xff, .p.green = 0x00, .p.blue = 0x00, .p.alpha = 0xff};
        ap2_led_sticky_set_key(2, 0, color);
        /* NOTE: Instead of colouring the capslock only, you can change the whole
           keyboard with ap2_led_mask_set_mono */
    } else {
        // Reset the capslock if there is no layer active
        ap2_led_unset_sticky_key(2, 0);
    }

    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RED0:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(0, 255, 255); //set HSV 
            }
        return false;

        //	RED5,
        case RED5:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(5, 255, 255); //set HSV 
            }
        return false;

        //	RED10,
        case RED10:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(10, 255, 255); //set HSV 
            }
        return false;

        //	RED15,
        case RED15:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(15, 255, 255); //set HSV 
            }
        return false;

        //	ORNG21,
        case ORNG21:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(21, 255, 255); //set HSV 
            }
        return false;

        //	ORNG26,
        case ORNG26:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(26, 255, 255); //set HSV 
            }
        return false;

        //	ORNG31,
        case ORNG31:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(31, 255, 255); //set HSV 
            }
        return false;

        //	ORNG36,
        case ORNG36:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(36, 255, 255); //set HSV 
            }
        return false;

        //	YLLW43,
        case YLLW43:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(43, 255, 255); //set HSV 
            }
        return false;

        //	YLLW53,
        case YLLW53:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(53, 255, 255); //set HSV 
            }
        return false;

        //	YLLW63,
        case YLLW63:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(63, 255, 255); //set HSV 
            }
        return false;

        //	YLLW73,
        case YLLW73:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(73, 255, 255); //set HSV 
            }
        return false;

        //	GRN85,
        case GRN85:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(85, 255, 255); //set HSV 
            }
        return false;

        //	GRN95,
        case GRN95:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(95, 255, 255); //set HSV 
            }
        return false;

        //	GRN105,
        case GRN105:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(105, 255, 255); //set HSV 
            }
        return false;

        //	GRN115,
        case GRN115:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(115, 255, 255); //set HSV 
            }
        return false;

        //	CYAN127,
        case CYAN127:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(127, 255, 255); //set HSV 
            }
        return false;

        //	CYAN132,
        case CYAN132:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(132, 255, 255); //set HSV 
            }
        return false;

        //	CYAN137,
        case CYAN137:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(137, 255, 255); //set HSV 
            }
        return false;

        //	CYAN142,
        case CYAN142:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(142, 255, 255); //set HSV 
            }
        return false;

        //	AZRE148,
        case AZRE148:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(148, 255, 255); //set HSV 
            }
        return false;

        //	AZRE153,
        case AZRE153:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(153, 255, 255); //set HSV 
            }
        return false;

        //	AZRE158,
        case AZRE158:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(158, 255, 255); //set HSV 
            }
        return false;

        //	AZRE163,
        case AZRE163:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(163, 255, 255); //set HSV 
            }
        return false;

        //	BLUE169,
        case BLUE169:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(169, 255, 255); //set HSV 
            }
        return false;

        //	BLUE172,
        case BLUE172:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(172, 255, 255); //set HSV 
            }
        return false;

        //	BLUE175,
        case BLUE175:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(175, 255, 255); //set HSV 
            }
        return false;

        //	BLUE178,
        case BLUE178:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(178, 255, 255); //set HSV 
            }
        return false;

        //	VILT180,
        case VILT180:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(180, 255, 255); //set HSV 
            }
        return false;

        //	VILT185,
        case VILT185:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(185, 255, 255); //set HSV 
            }
        return false;

        //	VILT190,
        case VILT190:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(190, 255, 255); //set HSV 
            }
        return false;

        //	VILT195,
        case VILT195:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(195, 255, 255); //set HSV 
            }
        return false;

        //	MGTA201,
        case MGTA201:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(201, 255, 255); //set HSV 
            }
        return false;

        //	MGTA206,
        case MGTA206:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(206, 255, 255); //set HSV 
            }
        return false;

        //	MGTA211,
        case MGTA211:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(211, 255, 255); //set HSV 
            }
        return false;

        //	MGTA217,
        case MGTA217:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(217, 255, 255); //set HSV 
            }
        return false;

        //	ROSE222,
        case ROSE222:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(222, 255, 255); //set HSV 
            }
        return false;

        //	ROSE230,
        case ROSE230:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(230, 255, 255); //set HSV 
            }
        return false;

        //	ROSE238,
        case ROSE238:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(238, 255, 255); //set HSV 
            }
        return false;

        //	ROSE245,
        case ROSE245:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(245, 255, 255); //set HSV 
            }
        return false;

        //	ROSE245,
        case WHITE:
            if (record->event.pressed) {
                rgb_matrix_mode(1); //set mode
                rgb_matrix_sethsv(0, 0, 255); //set HSV 
            }
        return false;

        //  Rainbow
        case RAINBOW:
            if (record->event.pressed) {
                rgb_matrix_mode(2); //set mode
                rgb_matrix_sethsv(0, 255, 255); //set HSV 
            }
        return false;

        //  Lesbian flag
        case LESBIAN:
            if (record->event.pressed) {
                rgb_matrix_mode(RGB_MATRIX_CUSTOM_lesbian_flag); //set mode
                rgb_matrix_sethsv(0, 255, 255); //set HSV 
            }
        return false;

        //  Lesbian flag
        case TRANS:
            if (record->event.pressed) {
                rgb_matrix_mode(RGB_MATRIX_CUSTOM_trans_flag); //set mode
                rgb_matrix_sethsv(0, 255, 255); //set HSV 
            }
        return false;

        default:
            return true; //Process all other keycodes normally
    }
}

bool rgb_matrix_indicators_user(void) {
    uint8_t layer = biton32(layer_state);
    switch (layer) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            rgb_matrix_set_color_all(0, 0, 0); // rest of keys blank/black
            rgb_matrix_set_color(1, 255, 0, 0); // RED0 true red, 1
            rgb_matrix_set_color(15, 255, 68, 0); // RED5, Q
            rgb_matrix_set_color(29, 255, 111, 0); // RED10, A
            rgb_matrix_set_color(42, 255, 179, 0); // RED15 red orange, Z
            rgb_matrix_set_color(2, 204, 204, 0); // ORNG21 true orange, 2
            rgb_matrix_set_color(16, 255, 205, 0); // ORNG26, W
            rgb_matrix_set_color(30, 255, 217, 0); // ORNG31, S
            rgb_matrix_set_color(43, 255, 230, 0); // ORNG36, X
            rgb_matrix_set_color(3, 255, 255, 0); // YLLW43 true yellow, 3
            rgb_matrix_set_color(17, 196, 255, 0); // YLLW53, E
            rgb_matrix_set_color(31, 154, 255, 0); // YLLW63, D
            rgb_matrix_set_color(44, 111, 255, 0); // YLLW73, C
            rgb_matrix_set_color(4, 0, 255, 0); // GRN85 true green, 4
            rgb_matrix_set_color(18, 0, 255, 50); // GRN95, R
            rgb_matrix_set_color(32, 0, 255, 75); // GRN105, F
            rgb_matrix_set_color(45, 0, 255, 120); // GRN115, V
            rgb_matrix_set_color(5, 0, 255, 255); // CYAN127 true cyan, 5
            rgb_matrix_set_color(19, 0, 213, 255); // CYAN132, T
            rgb_matrix_set_color(33, 0, 196, 255); // CYAN137, G
            rgb_matrix_set_color(46, 0, 154, 255); // CYAN142, B
            rgb_matrix_set_color(6, 0, 128, 255); // AZRE148 true azure, 6
            rgb_matrix_set_color(20, 0, 102, 255); // AZRE153, Y
            rgb_matrix_set_color(34, 0, 77, 255); // AZRE158, H
            rgb_matrix_set_color(47, 0, 60, 255); // AZRE163, N
            rgb_matrix_set_color(7, 0, 0, 255); // BLUE169 true blue, 7
            rgb_matrix_set_color(21, 43, 0, 255); // BLUE172, U
            rgb_matrix_set_color(35, 60, 0, 255); // BLUE175, J
            rgb_matrix_set_color(48, 77, 0, 255); // BLUE178, M
            rgb_matrix_set_color(8, 127, 0, 255); // VILT180 true violet, 8
            rgb_matrix_set_color(22, 171, 0, 255); // VILT185, I
            rgb_matrix_set_color(36, 200, 0, 255); // VILT190, K
            rgb_matrix_set_color(49, 215, 0, 255); // VILT195, <
            rgb_matrix_set_color(9, 255, 0, 255); // MGTA201 true magenta, 9
            rgb_matrix_set_color(23, 255, 0, 240); // MGTA206, O
            rgb_matrix_set_color(37, 255, 0, 220); // MGTA211, L
            rgb_matrix_set_color(50, 255, 0, 200); // MGTA217, >
            rgb_matrix_set_color(10, 255, 0, 127); // ROSE222 true rose, 0
            rgb_matrix_set_color(24, 255, 0, 111); // ROSE230, P
            rgb_matrix_set_color(38, 255, 0, 70); // ROSE238, :
            rgb_matrix_set_color(51, 255, 0, 26); // ROSE245, ?
            rgb_matrix_set_color(56, 255, 255, 255); // WHITE, Space

            rgb_matrix_set_color(13, 255, 255, 255); // WHITE, Backscape
            rgb_matrix_set_color(27, 255, 255, 255); // WHITE, Backslash
            rgb_matrix_set_color(40, 255, 255, 255); // WHITE, Enter
            break;
    }
    return true;
}