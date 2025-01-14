#include QMK_KEYBOARD_H

// Macro
enum custom_keycodes {
    ENYE = SAFE_RANGE,
	QUICK_PARANTHESES,
	QUICK_BRACE,
	QUICK_BRACKET
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

    case ENYE:
        if (record->event.pressed) {
            // when keycode ENYE is pressed
            SEND_STRING(SS_LALT("n")"n");
        } else {
            // when keycode ENYE is released
        }
        break;

	case QUICK_PARANTHESES:
        if (record->event.pressed) {
            // when keycode QMKURL is pressed
            SEND_STRING("()"SS_TAP(X_LEFT));
        } else {
            // when keycode QMKURL is released
        }
        break;

	case QUICK_BRACE:
        if (record->event.pressed) {
            // when keycode QMKURL is pressed
            SEND_STRING("{}"SS_TAP(X_LEFT));
        } else {
            // when keycode QMKURL is released
        }
        break;

	case QUICK_BRACKET:
        if (record->event.pressed) {
            // when keycode QMKURL is pressed
            SEND_STRING("[]"SS_TAP(X_LEFT));
        } else {
            // when keycode QMKURL is released
        }
        break;
    }

    return true;
};

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
		case LT(1,KC_BSPC):
            // Immediately select the hold action when another key is pressed.
            return true;
		case LT(2,KC_TAB):
            // Immediately select the hold action when another key is pressed.
            return true;
		case LT(3,KC_ENT):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCTL_T(KC_Z):
            // Immediately select the hold action when another key is tapped.
            return true;
        case LCTL_T(KC_SLSH):
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		LCTL(KC_UP), RGB_TOG, KC_BRID, KC_BRIU, KC_MPLY, KC_MPRV,                                KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_LBRC, KC_RBRC,

		KC_NO,  KC_Q,    KC_W,   KC_F,    KC_P,    KC_B,                                        KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_QUOT,
   		KC_NO, KC_A, KC_R, LALT_T(KC_S), LGUI_T(KC_T), KC_G,                 KC_M, RGUI_T(KC_N), RALT_T(KC_E), KC_I, KC_O, LALT(KC_E),
		KC_NO,  LCTL_T(KC_Z),  KC_X,    KC_C,     KC_D,     KC_V, KC_CAPS,                  LT(3,KC_ENT), KC_K,    KC_H,  KC_COMM, KC_DOT, LCTL_T(KC_SLSH), KC_NO,
							        	KC_LSFT, LT(1,KC_BSPC), KC_SPC,           LT(3,KC_ENT), LT(2,KC_TAB), KC_RSFT
	),


	[1] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                                KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,

		KC_NO, KC_NO, KC_NO, LGUI(KC_C), LGUI(KC_V), KC_NO,                                              KC_NO, KC_NO, KC_NO, KC_COPY, KC_PSTE, KC_NO,
		KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, KC_NO,                                      KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
		KC_NO, KC_HYPR, KC_NO, KC_LPRN, KC_RPRN, KC_NO,  KC_NO,                        KC_ENT, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO,
		                            KC_NO, KC_NO, TG(4),                    KC_ENT, KC_TAB, KC_BSPC
	),


	[2] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT,

		KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,                                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL,                                               KC_NO, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_NO,
		KC_NO, KC_PLUS, KC_1, KC_2, KC_3, KC_BSLS, KC_NO,                                 KC_NO, KC_NO, KC_ESC, KC_COMM, KC_DOT, KC_HYPR, KC_NO,
		                          KC_MINS, KC_0,  KC_SPC,                                 KC_NO, KC_NO, KC_NO
	),


	[3] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		KC_NO, KC_LCBR, KC_LPRN, KC_ASTR, KC_RPRN, KC_RCBR,                                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, LSFT(KC_SCLN), KC_DLR, KC_PERC, KC_CIRC, KC_GRV,                                     KC_NO, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_NO,
		KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO,                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HYPR, KC_NO,
		                               KC_AMPR, QUICK_PARANTHESES, KC_UNDS,                       KC_NO, KC_NO, KC_NO
	),

	[4] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R,                                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_LSFT, KC_A, KC_S, KC_D, KC_F,                                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_NO,                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		                               TG(4), KC_NO, KC_SPC,                       KC_NO, KC_NO, KC_NO
	),
};
