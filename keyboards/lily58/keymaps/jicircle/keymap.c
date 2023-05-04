#include QMK_KEYBOARD_H

#ifdef OLED_ENABLE
	#include "bongocat.c" //OLED code for Bongocat, original code by foureight84.
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {};