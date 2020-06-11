#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL

#define KC_NEXTTK KC_MEDIA_NEXT_TRACK
#define KC_PREVTK KC_MEDIA_PREV_TRACK
#define KC_PLAYPAU KC_MEDIA_PLAY_PAUSE
#define LSFT_W_BLOCK LM(2, MOD_LSFT)
#define RSFT_W_BLOCK LM(2, MOD_RSFT)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};

// This keymap implements http://www.keyboard-layout-editor.com/#/gists/f8c42ecb5e1d983b67171a362a0cc2d8

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_7,           KC_8,           KC_9,           KC_0,           KC_INSERT,      KC_PAUSE,       LCTL(LGUI(KC_Q)),
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_UNDS,                                        KC_PLUS,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_PSCREEN,
    KC_BSLASH,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_COLN,
    LSFT_T(KC_SLASH), KC_Z,         KC_X,           KC_C,           KC_V,           KC_B,           KC_MINUS,                                       KC_EQUAL,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_QUOTE,       KC_DQUO,
    KC_LALT,        KC_LCTRL,       LCTL(KC_LEFT),  LCTL(KC_RIGHT), KC_LGUI,                                                                                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_RCTRL,
                                                                                                    KC_SPACE,       KC_NO,          KC_NO,          RSFT_W_BLOCK,
                                                                                                                    KC_DELETE,      KC_DELETE,
                                                                                    LSFT_W_BLOCK,   MO(1),          KC_BSPACE,      KC_BSPACE,      LT(1,KC_ENTER), LT(3,KC_SPACE)
  ),
  // Fn Layer
  [1] = LAYOUT_ergodox_pretty(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,
    KC_NO,          KC_NO,          KC_LCBR,        KC_RCBR,        KC_AMPR,        KC_AT,          KC_NO,                                          KC_NO,          KC_GRAVE,       KC_TILD,        KC_LABK,        KC_RABK,        KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_LPRN,        KC_RPRN,        KC_HASH,        KC_DLR,                                                                         KC_ASTR,        KC_PERC,        KC_LBRC,        KC_RBRC,        KC_NO,          KC_NO,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_CIRC,        KC_PIPE,        KC_NO,                                          KC_NO,          KC_EXLM,        KC_QUES,        KC_NO,          KC_NO,          KC_NO,          KC_NO,         
    WEBUSB_PAIR,    KC_NO,          LCTL(KC_DOWN),  LCTL(KC_UP),    KC_NO,                                                                                                          KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_NO,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,         
                                                                                                                    KC_NO,          KC_NO,         
                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  // Shift Layer
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,         
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  // NumPad Layer
  [2] = LAYOUT_ergodox_pretty(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_1,           KC_2,           KC_3,           KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_0,           KC_NO,          KC_NO,          KC_NO,          KC_NO,         
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,         
                                                                                                                    KC_NO,          KC_NO,         
                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
};

//static bool seen_any_key = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // This is used to short-circuit enterState below. 
  //if (record->event.pressed && keycode != LT(1,KC_ENTER)) {
  //  seen_any_key = true;
  //}

  // Ref count KC_NO to allow n-key NOs.
  static uint8_t no_count = 0;
  switch (keycode) {
    case KC_NO:
      no_count += record->event.pressed ? 1 : -1;
      if (no_count == 1) {
        ergodox_right_led_1_on();
      } else if (no_count == 0) {
        ergodox_right_led_1_off();
      }
      break;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  ergodox_board_led_off();
  // led_1 is owned by KC_NO blinking.
  //ergodox_right_led_1_off();
  // No layer state lighting. It's distracting.
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  return state;
};

/*
typedef enum {
  RELEASED = 0,
  HELD = 1,
  HELD_BLINKING_OFF = 2,
  HELD_BLINKING_ON = 3,
  HELD_IDLE = 4,
} enterState_t;

#define ENTER_GIMMICK_BLINK_STEPS 50
#define ENTER_GIMMICK_BLINK_END ENTER_GIMMICK_BLINK_STEPS*6

void enter_gimmick_scan(bool enter_is_pressed) {
  static enterState_t state = RELEASED;
  static uint16_t blinking_loop = 0;
  
  if (!enter_is_pressed) {
    if (state != RELEASED) {
      ergodox_right_led_3_off();
      state = RELEASED;
    }
    return;
  }
  // From here, we walk a state machine given enter is pressed.
  switch (state) {
    case RELEASED:
      ergodox_right_led_3_on();
      state = HELD;
      seen_any_key = false;
      break;
    case HELD:
      if (seen_any_key) {
        state = HELD_IDLE;
      } else if (biton32(layer_state) == 1) {
        // TAPPING_TERM has now elapsed.
        ergodox_right_led_3_off();
        state = HELD_BLINKING_OFF;
        blinking_loop = 0;
      }
      break;
    case HELD_BLINKING_OFF:
      blinking_loop++;
      if (blinking_loop % ENTER_GIMMICK_BLINK_STEPS == 0) {
        ergodox_right_led_3_on();
        state = HELD_BLINKING_ON;
      } else if (blinking_loop > ENTER_GIMMICK_BLINK_END) {
        ergodox_right_led_3_on();
        state = HELD_IDLE;
      }
      break;
    case HELD_BLINKING_ON:
      blinking_loop++;
      if (blinking_loop % ENTER_GIMMICK_BLINK_STEPS == 0) {
        ergodox_right_led_3_off();
        state = HELD_BLINKING_OFF;
      } else if (blinking_loop > ENTER_GIMMICK_BLINK_END) {
        ergodox_right_led_3_on();
        state = HELD_IDLE;
      }
      break;
    case HELD_IDLE:
      break;
  }
}

void matrix_scan_user(void) {
  // Matrix position of R54 (i.e. KC_ENTER) is (11, 5).
  bool enter_is_pressed = matrix_is_on(11,5);
  enter_gimmick_scan(enter_is_pressed);
}
*/