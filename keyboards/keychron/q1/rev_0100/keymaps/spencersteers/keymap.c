/* Copyright 2021 @ Grayson Carr
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
#include "keymap_user.h"
#ifdef RGB_MATRIX_ENABLE
#    include "rgb_matrix_user.h"
#endif

// clang-format off

enum custom_keycodes {
    KC_MISSION_CONTROL = SAFE_RANGE,
    KC_LAUNCHPAD
};

enum {
    TD_MEDIA_CONTROL = 0
};

#define _______ KC_TRNS
#define KC_MCTL KC_MISSION_CONTROL
#define KC_LPAD KC_LAUNCHPAD
#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[MAC_BASE] = LAYOUT_ansi_82(
     KC_ESC,            KC_F1,    KC_F2,    KC_F3,     KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,    KC_DEL,  TD(TD_MEDIA_CONTROL),
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_MEH,
     KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             MO(MAC_FN2),
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,    KC_UP,
     KC_HYPR,  KC_LALT,  KC_LGUI,                                KC_SPC,                                 KC_RGUI,  MO(MAC_FN), KC_HYPR,  KC_LEFT,  KC_DOWN,  KC_RGHT
),

[MAC_FN] = LAYOUT_ansi_82(
     KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTL,   KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,    KC_VOLD,  KC_VOLU,   KC_DEL,  _______,
     RGB_TOG,  RGB_M_P,  RGB_M_B,  RGB_M_R,  RGB_M_SW,  RGB_M_SN, RGB_M_K,  RGB_M_X,  RGB_M_G,  RGB_M_T,  _______,  _______,    _______,  KC_DEL,             KC_PGUP,
     RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,   RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            KC_PGDN,
     _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
     _______,            _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,
     _______,  _______,  _______,                                 _______,                                _______,  _______,    _______,  _______,  _______,  _______
),

[MAC_FN2] = LAYOUT_ansi_82(
     _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            KC_PGUP,
     _______,  _______,  KC_MS_U,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            KC_PGDN,
     _______,  KC_MS_L,  KC_MS_D,  KC_MS_R,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              KC_BTN1,            _______,
     _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              KC_BTN1,  KC_WH_U,
     _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  KC_WH_L,  KC_WH_D,  KC_WH_R
),

[WIN_BASE] = LAYOUT_ansi_82(
     KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,   KC_DEL,   TD(TD_MEDIA_CONTROL),
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_PGDN,
     KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_HOME,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  _______,    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
)

};

// clang-format on

void matrix_init_user(void) {   
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_init_user();
#endif
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_MISSION_CONTROL:
            if (record->event.pressed) {
                host_consumer_send(0x29F);
            } else {
                host_consumer_send(0);
            }
            return false;  // Skip all further processing of this key
        case KC_LAUNCHPAD:
            if (record->event.pressed) {
                host_consumer_send(0x2A0);
            } else {
                host_consumer_send(0);
            }
            return false;  // Skip all further processing of this key
        default:
            return true;  // Process all other keycodes normally
    }
}

// https://github.com/timmcca-be/qmk_firmware/commit/96e121fdc3f00381e254c3792902d6a517f76388
bool encoder_update_user(uint8_t index, bool clockwise) {
    // fn + encoder:   adjust connected display brightness
    // fn2 + encoder:  adjust laptop display brightness
    // encoder:        adjust volume 
    if (IS_LAYER_ON(MAC_FN)) {
        if (clockwise) {
            tap_code16(LCTL(KC_BRIU));
        } else {
            tap_code16(LCTL(KC_BRID));
        }
    } else if (IS_LAYER_ON(MAC_FN2)) {
        if (clockwise) {
            tap_code(KC_BRIU);
        } else {
            tap_code(KC_BRID);
        }
    } else {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return false;
}

void dance_media_control (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        tap_code(KC_MEDIA_PLAY_PAUSE);
    } else if (state->count == 2) {
        tap_code (KC_MEDIA_NEXT_TRACK);
    } else if (state->count == 3) {
        tap_code(KC_MEDIA_PREV_TRACK);
    } else {
        reset_tap_dance(state);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
 [TD_MEDIA_CONTROL] = ACTION_TAP_DANCE_FN(dance_media_control),
};
