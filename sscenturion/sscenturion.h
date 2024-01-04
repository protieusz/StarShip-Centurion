/* Copyright 2020 Alexander Tulloh
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
        uint8_t cpi_idx;
        uint8_t scrl_div;
        uint8_t rotation_angle;
        int8_t scrl_inv;
        bool scrl_mode;
        report_mouse_t last_mouse;
    };
} cocot_config_t;

extern cocot_config_t cocot_config;

enum cocot_keycodes {

    COCOT_SAFE_RANGE = SAFE_RANGE,
    CPI_SW,
    SCRL_SW,
    ROT_R15,
    ROT_L15,
    SCRL_MO,
    SCRL_TO,
    SCRL_IN,
};

#define CPI_SW QK_KB_0
#define SCRL_SW QK_KB_1
#define ROT_R15 QK_KB_2
#define ROT_L15 QK_KB_3
#define SCRL_MO QK_KB_4
#define SCRL_TO QK_KB_5
#define SCRL_IN QK_KB_6



bool encoder_update_user(uint8_t index, bool clockwise);
bool encoder_update_kb(uint8_t index, bool clockwise);

bool cocot_get_scroll_mode(void);
void cocot_set_scroll_mode(bool mode);


void enable_click_layer(void);
void disable_click_layer(void);
int16_t my_abs(int16_t num);
int16_t mmouse_move_y_sign(int16_t num);
bool is_clickable_mode(void);


void render_logo(void);
void oled_write_layer_state(void);
