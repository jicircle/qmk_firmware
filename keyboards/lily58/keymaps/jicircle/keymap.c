#include QMK_KEYBOARD_H

#ifdef OLED_ENABLE
	#include "bongocat.c" //OLED code for Bongocat, original code by foureight84.
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[0] = LAYOUT(
  KC_ESC,	KC_1,	KC_2,	KC_3,	KC_4,	KC_5,					KC_6,	KC_7,	KC_8,	KC_9,	KC_0,		KC_BSPC,
  KC_TAB,	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	                KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,		KC_DEL,
  KC_CAPS,	KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	                KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,	KC_QUOT,
  KC_LSFT,	KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_LALT,KC_ENT,	KC_N,	KC_M,	KC_COMM,KC_DOT,	KC_SLSH,	KC_RSFT,
			                KC_NO,	KC_LCTL,TO(1),	KC_LGUI,KC_SPC,	TO(2),	KC_BSPC,KC_NO
),
[1] = LAYOUT(
	KC_TILD,	KC_EXLM,	KC_AT,		KC_HASH,	KC_DLR,		KC_PERC,						KC_CIRC,	KC_AMPR,	KC_ASTR,	KC_MINS,	KC_EQL,		KC_BSPC,
	KC_GRV,		KC_NO,		LAG_SWP,	KC_LPRN,	KC_RPRN,	KC_NO,		                    KC_NO,		KC_NO,		KC_NO,		KC_UNDS,	KC_PLUS,	KC_BSLS,
	KC_NO,		KC_NO,		KC_NO,		KC_LCBR,	KC_RCBR,	KC_PGUP,	                    KC_LEFT,	KC_DOWN,	KC_UP,		KC_RGHT,	KC_COLN,	KC_DQT,
	KC_LSFT,	KC_NO,		KC_NO,		KC_LBRC,	KC_RBRC,	KC_PGDN,	KC_LALT,	KC_NO,	KC_NO,		LAG_NRM,	KC_LT,		KC_GT,		KC_QUES,	KC_RSFT,
					                    KC_NO,		KC_LCTL,	KC_NO,		KC_LGUI,	KC_NO,	TO(0),		KC_NO,		KC_NO
),
[2] = LAYOUT(
	KC_F12,		KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,							KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,
	KC_NO,		KC_NO,		KC_NO,		KC_MS_U,	KC_NO,		KC_NO,		                    KC_ACL0,	KC_P7,		KC_P8,		KC_P9,		KC_NO,		KC_NO,
	KC_NO,		KC_NO,		KC_MS_L,	KC_MS_D,	KC_MS_R,	KC_NO,		                    KC_ACL1,	KC_P4,		KC_P5,		KC_P6,		KC_NO,		KC_NO,
	KC_LSFT,	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_LALT,	KC_NO,	KC_ACL2,	KC_P1,		KC_P2,		KC_P3,		KC_PENT,	KC_NO,
					                    KC_NO,		KC_LCTL,	TO(3),		KC_BTN1,	KC_BTN2,KC_NO,	    KC_NO,		KC_P0
),
[3] = LAYOUT(
  KC_ESC,	KC_1,	KC_2,	KC_3,	KC_4,	KC_5,					KC_6,	KC_7,	KC_8,	KC_9,	KC_0,		KC_BSPC,
  KC_TAB,	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	                KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,		MO(4),
  KC_LSFT,	KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	                KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,	KC_QUOT,
  KC_LCTL,	KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_GRV, KC_ENT,	KC_N,	KC_M,	KC_COMM,KC_DOT,	KC_SLSH,	KC_RSFT,
			                MO(4),	KC_CAPS,KC_LGUI,KC_SPC, KC_SPC,	TO(0),	KC_BSPC,KC_NO
),
[4] = LAYOUT(
	KC_F12,		KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,							KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,
	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_UP,		KC_NO,		                    KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
	KC_LSFT,	KC_NO,		KC_NO,	    KC_LEFT,	KC_DOWN,	KC_RGHT,                        KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_UP,		KC_NO,
	KC_LCTL,	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,      KC_NO,      KC_NO,	KC_NO,		KC_NO,		KC_NO,		KC_LEFT,	KC_DOWN,    KC_RGHT,
					                    KC_NO,		KC_LALT,	KC_NO,		KC_LWIN,    KC_NO,	KC_NO,		KC_NO,		KC_HOME
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_LCTL:
        case KC_RCTL:
            if (record->event.pressed) {
                isSneaking = true;
            } else {
                isSneaking = false;
            }
            break;
        case KC_SPC:
            if (record->event.pressed) {
                isJumping  = true;
                showedJump = false;
            } else {
                isJumping = false;
            }
            break;
    }
    return true;
}