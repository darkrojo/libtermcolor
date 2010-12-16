/*
	Copyright (C) 2010 Romain Porte (rojo@gmx.fr)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License along
	with this program; if not, write to the Free Software Foundation, Inc.,
	51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef TERMCOLOR_H
#define TERMCOLOR_H

// Configuration
#define TC_BEGIN_SYMBOL "\033["
#define TC_END_SYMBOL "m"

// Colors
#define TC_Black TC_BEGIN_SYMBOL "30" TC_END_SYMBOL
#define TC_Red TC_BEGIN_SYMBOL "31" TC_END_SYMBOL
#define TC_Green TC_BEGIN_SYMBOL "32" TC_END_SYMBOL
#define TC_Orange TC_BEGIN_SYMBOL "33" TC_END_SYMBOL
#define TC_Blue TC_BEGIN_SYMBOL "34" TC_END_SYMBOL
#define TC_Magenta TC_BEGIN_SYMBOL "35" TC_END_SYMBOL
#define TC_Cyan TC_BEGIN_SYMBOL "36" TC_END_SYMBOL
#define TC_White TC_BEGIN_SYMBOL "37" TC_END_SYMBOL

// Background colors
#define TC_BlackBkg TC_BEGIN_SYMBOL "40" TC_END_SYMBOL
#define TC_RedBkg TC_BEGIN_SYMBOL "41" TC_END_SYMBOL
#define TC_GreenBkg TC_BEGIN_SYMBOL "42" TC_END_SYMBOL
#define TC_OrangeBkg TC_BEGIN_SYMBOL "43" TC_END_SYMBOL
#define TC_BlueBkg TC_BEGIN_SYMBOL "44" TC_END_SYMBOL
#define TC_MagentaBkg TC_BEGIN_SYMBOL "45" TC_END_SYMBOL
#define TC_CyanBkg TC_BEGIN_SYMBOL "46" TC_END_SYMBOL
#define TC_WhiteBkg TC_BEGIN_SYMBOL "47" TC_END_SYMBOL

// Extras
#define TC_Default TC_BEGIN_SYMBOL TC_END_SYMBOL
#define TC_Bold TC_BEGIN_SYMBOL "01" TC_END_SYMBOL
#define TC_Underline TC_BEGIN_SYMBOL "04" TC_END_SYMBOL
#define TC_Blink TC_BEGIN_SYMBOL "05" TC_END_SYMBOL

#endif
