#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define MDIA 2 // media keys

#define KC_O_ATMARK KC_LBRC
#define KC_O_LBRC   KC_RBRC
#define KC_O_RBRC   KC_NUHS
#define KC_O_CHILDA KC_EQUAL
#define KC_O_BSLS   KC_INT3

#define EMAIL M(0)
#define EPRM  M(1) // Macro 1: Reset EEPROM

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = KEYMAP(
        // left hand
        KC_ESC  ,      KC_1,     KC_2,     KC_3,     KC_4,   KC_5,   KC_LEFT,
        KC_TAB  ,      KC_Q,     KC_W,     KC_E,     KC_R,   KC_T,   LT(SYMB,KC_BSPC),
        KC_CAPS ,     KC_A,     KC_S,     KC_D,     KC_F,   KC_G,
        KC_LSFT ,     KC_Z,     KC_X,     KC_C,     KC_V,   KC_B,   ALL_T(KC_NO),
        KC_LCTRL, MO(SYMB),  KC_LGUI,  KC_LALT,  KC_MHEN,
                                             KC_LCTRL,  KC_LALT,
                                                              KC_HOME,
                              SFT_T(KC_BSPC), CTL_T(KC_DEL),  KC_END,
        // right hand
        KC_NO,           KC_6,   KC_7,      KC_8,    KC_9,              KC_0,           KC_MINS,
        LT(SYMB,KC_DEL), KC_Y,   KC_U,      KC_I,    KC_O,              KC_P,       KC_O_ATMARK,
                         KC_H,   KC_J,      KC_K,    KC_L, LT(SYMB, KC_SCLN),  LT(MDIA,KC_QUOT),
        MEH_T(KC_NO),    KC_N,   KC_M,   KC_COMM,  KC_DOT,    CTL_T(KC_SLSH),         KC_O_BSLS,
                                            KC_HENK,  KC_NO,KC_O_LBRC,  KC_O_RBRC,  KC_O_CHILDA,
        KC_LALT,  CTL_T(KC_ESC),
        KC_PGUP,
        KC_PGDN ,  KC_ENT  , KC_SPC
),

// SYMBOLS
[SYMB] = KEYMAP(
       // left hand
       EMAIL  ,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                       KC_TRNS,KC_TRNS,
                                               KC_TRNS,
                               KC_TRNS,KC_TRNS,KC_TRNS,
       // right hand
       KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F12,
                KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          EPRM, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(SYMB)                // FN1 - Momentary Layer 1 (Symbols)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING ("tomita.ryosuke@jp.fujitsu.com");
        }
        break;
        case 1:
        if (record->event.pressed) { // For resetting EEPROM
          eeconfig_init();
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

};
