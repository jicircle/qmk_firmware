/* Copyright
 *   2021 solartempest
 *   2021 QMK
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
#include "config_common.h"

// USB Device descriptor parameters
#define VENDOR_ID       0xFC32
#define PRODUCT_ID      0x1287 //Original is 0x0287 but we do not want to load default VIA keymap as it has errors for the bottom row
#define DEVICE_VER      0x0002
#define MANUFACTURER    Keyhive
#define PRODUCT         Solarius_Sofle //New unique name
#define DESCRIPTION     Rose version of the Sofle

// Set which side is master
#define EE_HANDS //Use this if EEPROM setting is desired instead

// Key Matrix Settings
// Rows are doubled-up for split keyboards. Added extra column for rotary encoder VIA mapping.
#define MATRIX_ROWS 10
#define MATRIX_COLS 7
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6, NO_PIN } //NO_PIN is used for the encoder key matrix in via.
#define MATRIX_ROW_PINS_RIGHT { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS_RIGHT { F6, F7, B1, B3, B2, B6, NO_PIN } //NO_PIN is used for the encoder key matrix in via.
#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 6 //Default is 5

// NKRO Settings
#ifdef NKRO_ENABLE
	#define FORCE_NKRO //Force NKRO if enabled.
#endif

// Encoder support
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F5 }
#define ENCODER_RESOLUTIONS { 4, 2 } //Left encoder seems to have double-output issue but right does not. This resolves that issue.

// Communication between sides
#define SOFT_SERIAL_PIN D2

// OLED settings
#ifdef OLED_ENABLE
	#define OLED_BRIGHTNESS 90			//Default is 100.
	#define SPLIT_OLED_ENABLE			//Synx on/off OLED state between halves (+100).
	#ifdef WPM_ENABLE
		#define SPLIT_WPM_ENABLE			//Enable WPM across split keyboards (+106-268).
	#endif
	#define OLED_LOGO					//Enable to print snakey custom logo on slave side (+108).
	//#define SNEAK_DISABLE				//Disable snakey keyboard pet sneak animation to save space (-132).
	//#define OLED_NO_SLAVE				//Disable snakey minimal keyboard pet slave OLED rendering (-160).
	//#define OLED_NO_MASTER				//Disable snakey minimal keyboard pet master OLED rendering and render status on the slave (+96).
	#ifdef OLED_NO_MASTER
		#define SPLIT_LAYER_STATE_ENABLE	//Keep on master to save space (+142).
		#define SPLIT_LED_STATE_ENABLE		//Keep on master to save space (+112).
		#undef SPLIT_OLED_ENABLE			//Do not sync OLED state with one OLED only (+100).
	#endif
	//#define SPLIT_MODS_ENABLE			//Keep on master to save space (+138).
#endif
