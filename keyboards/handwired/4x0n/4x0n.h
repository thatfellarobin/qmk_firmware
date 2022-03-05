/*
Copyright 2021 Robin Liu

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"

/*
* Default layout
*/
#define LAYOUT_default( \
	K000, K001, K002, K003, \
	K100, K101, K102, K103, \
	K200, K201, K202,       \
	K300, K301, K302, K303, \
	K400,       K402        \
) { \
	{ K000,  K001,  K002,  K003,  }, \
	{ K100,  K101,  K102,  K103,  }, \
	{ K200,  K201,  K202,  KC_NO, }, \
	{ K300,  K301,  K302,  K303,  }, \
	{ K400,  KC_NO, K402,  KC_NO  }  \
}
