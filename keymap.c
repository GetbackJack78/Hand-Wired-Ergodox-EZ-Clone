/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#define _QWERTY 0

// Define a custom layout macro for 6x7 matrix
#define LAYOUT_( \
    k00, k01, k02, k03, k04, k05, k06, \
    k10, k11, k12, k13, k14, k15, k16, \
    k20, k21, k22, k23, k24, k25,      \
    k30, k31, k32, k33, k34, k35, k36, \
    k40, k41, k42, k43, k44,           \
    k50, k51, k52, k53, k54, k55       \
) { \
    { k00, k01, k02, k03, k04, k05, k06 }, \
    { k10, k11, k12, k13, k14, k15, k16 }, \
    { k20, k21, k22, k23, k24, k25, KC_NO }, \
    { k30, k31, k32, k33, k34, k35, k36 }, \
    { k40, k41, k42, k43, k44, KC_NO, KC_NO }, \
    { k50, k51, k52, k53, k54, k55, KC_NO }  \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_(
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, // Row 1 (7 keys)
        KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, // Row 2 (7 keys)
        KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N,      // Row 3 (7 keys)
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, // Row 4 (7 keys)
        KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL,      // Row 5 (7 keys)
        KC_BSLS, KC_SCLN, KC_QUOT, KC_GRV, KC_COMM, KC_DOT,  // Row 6 (7 keys)
    ),
};
