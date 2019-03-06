#include QMK_KEYBOARD_H

#define _BASE 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //  1,          2,        3,        4,        5,        6,        7,        8,        9,          1,        2,        3,        4,        5,        6,        7,        8,        9,
    [_BASE] = LAYOUT( \
        MO(_FN),    MI_Cs_1,  MI_E_1,   MI_G_1,   MI_As_1,  MI_Cs_2,  MI_E_2,   MI_G_2,   MI_As_2,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   \
        MI_A,       MI_C_1,   MI_Ds_1,  MI_Fs_1,  MI_A_1,   MI_C_2,   MI_Ds_2,  MI_Fs_2,  MI_A_2,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  \
        MI_Gs,      MI_B,     MI_D_1,   MI_F_1,   MI_Gs_1,  MI_B_1,   MI_D_2,   MI_F_2,   MI_Gs_2,    KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  \
        MI_G,       MI_As,    MI_Cs_1,  MI_E_1,   MI_G_1,   MI_As_1,  MI_Cs_2,  MI_E_2,   MI_G_2,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,   KC_ENT,   \
        MI_Fs,      MI_A,     MI_C_1,   MI_Ds_1,  MI_Fs_1,  MI_A_1,   MI_C_2,   MI_Ds_2,  MI_SUS,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    XXXXXXX,  \
        MI_F,       MI_Gs,    MI_B,     MI_D_1,   MI_F_1,   MI_Gs_1,  MI_B_1,   MI_D_2,   MI_DEEP,    KC_BSPC,  KC_SPC,   KC_SPC,   KC_RGUI,  KC_RALT,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT   \
    ),
    [_FN] = LAYOUT( \
        _______,    MI_CH6,   _______,  _______,  _______,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  \
        MI_OCT_3,   MI_CH5,   _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  \
        MI_OCT_2,   MI_CH4,   _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  \
        MI_OCT_1,   MI_CH3,   _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  \
        MI_OCT_0,   MI_CH2,   _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  \
        MI_OCT_N1,  MI_CH1,   _______,  _______,  _______,  _______,  _______,  _______,  MI_ALLOFF,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______   \
    )
};

// default bfo-9000 keymap:
/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT( \
    KC_ESC,  KC_VOLU, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,         KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, \
    KC_HOME, KC_VOLD, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,          KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
    KC_END,  KC_TAB,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,          KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_PGUP, KC_CAPS, KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,          KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT, \
    KC_PGDN, KC_UP,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,          KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   XXXXXXX, \
    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC,  KC_ENT,        KC_BSPC, KC_SPC,  KC_SPC,  KC_RGUI, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT \
)
};
*/

