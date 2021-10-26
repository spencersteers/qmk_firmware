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

#pragma once

/* RGB Matrix Configuration */
#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define CAPS_LOCK_INDICATOR_COLOR RGB_RED
#    define CAPS_LOCK_INDICATOR_LIGHT_ALPHAS
#    define FN_LAYER_TRANSPARENT_KEYS_OFF
#endif

/* Encoder Configuration: https://github.com/timmcca-be/qmk_firmware/commit/96e121fdc3f00381e254c3792902d6a517f76388 */
#define ENCODERS_PAD_A { B7 }
#define ENCODERS_PAD_B { E6 }
// #define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4

/* Tap Dance: https://beta.docs.qmk.fm/using-qmk/software-features/feature_tap_dance */
#define TAPPING_TERM 350

/* Mouse Move: https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_mouse_keys */
#define MOUSEKEY_DELAY 30
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_TIME_TO_MAX 40
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_WHEEL_DELAY 30

/* Command: https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_command */
#define IS_COMMAND() ( \
    get_mods() == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) \
)
