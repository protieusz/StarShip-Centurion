/* Copyright 2023 Colin Lam (Ploopy Corporation)
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
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

#include "quantum.h"

#define LAYOUT( \
    K000, K001, K002, K003, K004,     K005,    K006, K007, K008, K009, K010,  \
    K100, K101, K102, K103, K104,     K105,    K106, K107, K108, K109, K110,  \
    K200, K201, K202, K203, K204,     K205,    K206, K207, K208, K209, K210,  \
                K302, K303, K304,              K306, K307, K308               \
) { \
    { K000,  K001,  K002,  K003,  K004,  K005,  K006, K007, K008,  K009,  K010, }, \
    { K100,  K101,  K102,  K103,  K104,  K105,  K106, K107, K108,  K109,  K110, }, \
    { K200,  K201,  K202,  K203,  K204,  K205,  K206, K207, K208,  K209,  K210, }, \
    { KC_NO, KC_NO, K302,  K303,  K304,  KC_NO, K306, K307, K308,  KC_NO, KC_NO }  \
}

typedef union {
    uint32_t raw;
    struct {
        uint8_t dpi_config;
    };
} keyboard_config_t;
_Static_assert(sizeof(keyboard_config_t) == sizeof(uint32_t), "keyboard_config_t size mismatch compared to EEPROM area");

extern keyboard_config_t keyboard_config;
extern uint16_t          dpi_array[];

enum ploopy_keycodes {
    DPI_CONFIG = QK_KB_0,
    DRAG_SCROLL,
};
