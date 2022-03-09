/*
Copyright 2021 Robin Liu

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE_WIN,
    _CHAR_WIN,
	_FN_WIN,
	_BASE_MACOS,
    _CHAR_MACOS,
	_FN_MACOS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE_WIN] = LAYOUT_default(//Layer 0 - Default Windows Layout
		KC_ESC,  KC_Q,    KC_W,    KC_E, KC_R,     KC_T, KC_Y,          KC_U, KC_I,     KC_O,           KC_P,   KC_BSPC,
		KC_TAB,  KC_A,    KC_S,    KC_D, KC_F,     KC_G, KC_H,          KC_J, KC_K,     KC_L,           KC_ENT,
		KC_LSFT, KC_Z,    KC_X,    KC_C, KC_V,     KC_B, KC_N,          KC_M, KC_COMMA, KC_DOT,         MO(_FN_WIN),
		         KC_LALT, KC_LCTL,       KC_SPACE,       MO(_CHAR_WIN),       KC_RGUI,  TO(_BASE_MACOS)
	),

	[_CHAR_WIN] = LAYOUT_default(//Layer 1
		KC_GRV,  KC_1,    KC_2,    KC_3,     KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,           KC_0,     KC_DEL,
		KC_TAB,  KC_CAPS, KC_UP,   KC_NO,    KC_PGUP,  KC_HOME, KC_MINS, KC_EQL,  KC_SCLN, KC_QUOT,        KC_ENTER,
		KC_LSFT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN,  KC_END,  KC_LBRC, KC_RBRC, KC_SLSH, KC_BSLS,        KC_TRNS,
		         KC_LALT, KC_LCTL,           KC_SPACE,          KC_TRNS,          KC_RGUI, TO(_BASE_MACOS)
	),

	[_FN_WIN] = LAYOUT_default(//Layer 2
		KC_NO,   KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_NO,  KC_NO, KC_NO,   KC_UP,   KC_NO,    KC_NO,   KC_NO,
		KC_NO,   KC_F5,   KC_F6,   KC_F7,  KC_F8,  KC_NO,  KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,
		KC_LSFT, KC_F9,   KC_F10,  KC_F11, KC_F12, KC_NO,  KC_NO, KC_NO,   KC_NO,   KC_VOLU,  KC_TRNS,
		         KC_LALT, KC_LCTL,         KC_NO,          KC_NO,          KC_RGUI, KC_VOLD
	),

	[_BASE_MACOS] = LAYOUT_default(//Layer 3 - Default MacOS Layout
		KC_ESC,  KC_Q,    KC_W,     KC_E,  KC_R,     KC_T,   KC_Y,            KC_U, KC_I,     KC_O,         KC_P,   KC_BSPC,
		KC_TAB,  KC_A,    KC_S,     KC_D,  KC_F,     KC_G,   KC_H,            KC_J, KC_K,     KC_L,         KC_ENT,
		KC_LSFT, KC_Z,    KC_X,     KC_C,  KC_V,     KC_B,   KC_N,            KC_M, KC_COMMA, KC_DOT,       MO(_FN_MACOS),
		         KC_LALT, KC_LGUI,         KC_SPACE,         MO(_CHAR_MACOS),       KC_RCTL,  TO(_BASE_WIN)
	),

	[_CHAR_MACOS] = LAYOUT_default(//Layer 4
		KC_GRV,  KC_1,    KC_2,    KC_3,     KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,         KC_0,     KC_DEL,
		KC_TAB,  KC_CAPS, KC_UP,   KC_NO,    KC_PGUP,  KC_HOME, KC_MINS, KC_EQL,  KC_SCLN, KC_QUOT,      KC_ENTER,
		KC_LSFT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN,  KC_END,  KC_LBRC, KC_RBRC, KC_SLSH, KC_BSLS,      KC_TRNS,
		         KC_LALT, KC_LGUI,           KC_SPACE,          KC_TRNS,          KC_RCTL, TO(_BASE_WIN)
	),

	[_FN_MACOS] = LAYOUT_default(//Layer 5
		KC_NO,   KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_NO, KC_NO, KC_NO,   KC_UP,   KC_NO,    KC_NO,   KC_NO,
		KC_NO,   KC_F5,   KC_F6,   KC_F7,  KC_F8,  KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,
		KC_LSFT, KC_F9,   KC_F10,  KC_F11, KC_F12, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_VOLU,  KC_TRNS,
		         KC_LALT, KC_LGUI,         KC_NO,         KC_NO,          KC_RCTL, KC_VOLD
	)
};
