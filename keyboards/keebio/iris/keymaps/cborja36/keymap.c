#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_ESC, RGB_TOG, RGB_VAD, RGB_VAI, KC_BRID, KC_BRIU,                                     KC_MPLY, KC_MPRV, KC_MNXT,         KC_MUTE,        KC_VOLD, KC_VOLU,

		KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                       KC_J,    KC_L,    KC_U,            KC_Y,           KC_QUOT, KC_BSPC, 
		KC_LCTL, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                                       KC_M,    KC_N,    KC_E,            KC_I,           KC_O,    LALT(KC_E), 
		KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_D,  KC_V, KC_NO,                  LT(3,KC_ENT), KC_K,    KC_H,    LGUI_T(KC_COMM), LALT_T(KC_DOT), KC_SLSH, LALT(LSFT(KC_SLSH)), 
								MEH_T(KC_DEL), TG(1), OSM(MOD_LSFT),                 LT(3,KC_ENT), LT(2,KC_SPC), KC_BSPC
	),


	[1] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                                KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, 

		KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO,                                              KC_AGIN, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_NO, 
		KC_LCTL, KC_MEH, KC_LALT, KC_LGUI, KC_LSFT, KC_NO,                                      KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_CAPS, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          KC_NO,                        KC_ENT, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, 
		                            MEH_T(KC_DEL), KC_TRNS, OSM(MOD_LSFT),                    KC_ENT, KC_SPC, KC_BSPC
	),


	[2] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 

		KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,                                              KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_NO, 
		KC_NO, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL,                                               KC_NO, KC_LSFT, KC_LGUI, KC_LALT, KC_MEH, KC_LCTL, 
		KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, KC_NO,                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		                          KC_DOT, KC_0, KC_MINS,                                 KC_NO, KC_NO, KC_NO
	),


	[3] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		
		KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                                    KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_NO, 
		KC_NO, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                                     KC_NO, KC_LSFT, KC_LGUI, KC_LALT, KC_MEH, KC_LCTL, 
		KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO,                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		                               KC_LPRN, KC_RPRN, KC_UNDS,                       KC_NO, KC_NO, KC_NO
	),
};
