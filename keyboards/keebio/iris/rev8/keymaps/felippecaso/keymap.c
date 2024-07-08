#include QMK_KEYBOARD_H

enum custom_keycodes {
   CCED = SAFE_RANGE,
   EACU,
   AACU,
   IACU,
   OACU,
   UACU,
};

enum combos {
  NA_ATIL,
  NO_OTIL,
  IO_OCAR,
  IE_ECAR,
  AE_ACAR,
  FJ_CAPS,
};

// KEYS

enum layers {
  _BASE,
  _FIRST,
  _SECOND,
  _THIRD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQUAL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINUS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  LCTL_T(KC_A),    LALT_T(KC_S),    LGUI_T(KC_D),    LSFT_T(KC_F),    KC_G,                               KC_H,    RSFT_T(KC_J),    RGUI_T(KC_K),    RALT_T(KC_L),    RCTL_T(KC_SCLN), KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     G(KC_C), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,          _______,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENTER,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    G(KC_V), MO(_FIRST),   KC_BACKSPACE,                    HYPR_T(KC_SPC),  MO(_SECOND),   _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FIRST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______,   _______, _______,  _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______,    _______,    EACU,    _______,    _______,                               _______,    UACU,    IACU,    OACU,    _______,    KC_BACKSLASH,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  AACU, _______, _______, _______,   _______,                            KC_LEFT, KC_DOWN,   KC_UP,   KC_RIGHT,   KC_LBRC, KC_RBRC,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, CCED, _______, _______, _______,          _______, _______, _______,   _______,   _______,   _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                    _______,  MO(_THIRD), _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SECOND] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDERSCORE,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_UNDS,                            KC_EQL,  KC_HOME, RGB_HUI, RGB_SAI, RGB_VAI, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_MINS, _______,          _______, KC_PLUS, KC_END,  RGB_HUD, RGB_SAD, RGB_VAD, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, MO(_THIRD), KC_DEL,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_THIRD] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

// COMBOS

const uint16_t PROGMEM na_atil_combo[] = {LCTL_T(KC_A), KC_N, COMBO_END};
const uint16_t PROGMEM no_otil_combo[] = {KC_O, KC_N, COMBO_END};
const uint16_t PROGMEM io_ocar_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM ie_ecar_combo[] = {KC_I, KC_E, COMBO_END};
const uint16_t PROGMEM ae_acar_combo[] = {LCTL_T(KC_A), KC_E, COMBO_END};
const uint16_t PROGMEM fj_caps_combo[] = {LSFT_T(KC_F), RSFT_T(KC_J), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
   [NA_ATIL] = COMBO_ACTION(na_atil_combo),
   [NO_OTIL] = COMBO_ACTION(no_otil_combo),
   [IO_OCAR] = COMBO_ACTION(io_ocar_combo),
   [IE_ECAR] = COMBO_ACTION(ie_ecar_combo),
   [AE_ACAR] = COMBO_ACTION(ae_acar_combo),
   [FJ_CAPS] = COMBO_ACTION(fj_caps_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
   switch(combo_index) {
      case NA_ATIL:
         if (pressed) {
            SEND_STRING(SS_LALT("n") SS_TAP(X_A));
         }
         break;
      case NO_OTIL:
         if (pressed) {
            SEND_STRING(SS_LALT("n") SS_TAP(X_O));
         }
         break;
      case IO_OCAR:
         if (pressed) {
            SEND_STRING(SS_LALT("i") SS_TAP(X_O));
         }
         break;
      case IE_ECAR:
         if (pressed) {
            SEND_STRING(SS_LALT("i") SS_TAP(X_E));
         }
         break;
      case AE_ACAR:
         if (pressed) {
            SEND_STRING(SS_LALT("i") SS_TAP(X_A));
         }
         break;
      case FJ_CAPS:
         if (pressed) {
            caps_word_on();
         }
         break;
   }
};

// CUSTOM KEYCODES

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
   case CCED:
      if (record->event.pressed) {
         SEND_STRING(SS_LALT("c"));
      }
      return false;
   case EACU:
      if (record->event.pressed) {
         SEND_STRING(SS_LALT("e") SS_TAP(X_E));
      }
      return false;
   case AACU:
      if (record->event.pressed) {
         SEND_STRING(SS_LALT("e") SS_TAP(X_A));
      }
      return false;
   case IACU:
      if (record->event.pressed) {
         SEND_STRING(SS_LALT("e") SS_TAP(X_I));
      }
      return false;
   case OACU:
      if (record->event.pressed) {
         SEND_STRING(SS_LALT("e") SS_TAP(X_O));
      }
      return false;
   case UACU:
      if (record->event.pressed) {
         SEND_STRING(SS_LALT("e") SS_TAP(X_U));
      }
      return false;
  }
  return true;
};
