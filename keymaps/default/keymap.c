/* Copyright 2018 MechMerlin
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

#define DEFAULT_KEY_LAYER 0
#define LEFT_FUNC_KEY_LAYER 1
#define RIGHT_FUNC_KEY_LAYER 2

#define RIGHR_AND_LEFT_FUNC_KEY_LAYER 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEFAULT_KEY_LAYER] = LAYOUT(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(RIGHT_FUNC_KEY_LAYER),
      _______, KC_LALT, MO(LEFT_FUNC_KEY_LAYER),                     KC_SPACE,                 KC_RGUI, KC_RALT, _______
      ),

  [RIGHT_FUNC_KEY_LAYER] = LAYOUT(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_DEL,
      _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   _______, _______,
      _______, KC_VOLU, KC_VOLD, KC_MUTE, KC_MSTP, _______, KC_ASTR, KC_SLSH, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, _______,
      _______, _______, _______, _______, _______, _______, KC_PLUS, KC_UNDS, KC_END,  KC_PGDN, KC_DOWN, _______, _______,
      _______, _______, MO(RIGHR_AND_LEFT_FUNC_KEY_LAYER),                     _______,                   _______, _______, _______
      ),

  [LEFT_FUNC_KEY_LAYER] = LAYOUT(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_DEL,
      _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, _______, _______, _______, _______,
      _______, KC_VOLU, KC_VOLD, KC_MUTE, KC_MSTP, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, KC_PGDN, _______, _______, _______, _______, _______, MO(RIGHR_AND_LEFT_FUNC_KEY_LAYER),
      _______, _______, _______,                   _______,                   _______, _______, _______
      ),

  [RIGHR_AND_LEFT_FUNC_KEY_LAYER] = LAYOUT(
      RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______
      ),
};



void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

