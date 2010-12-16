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

#ifndef TERMCOLOR_HPP
#define TERMCOLOR_HPP

#include <string>

// Containing all the variables
namespace tc
{
	const std::string restore = "\033[m";
	const std::string bold = "\033[01m";
	const std::string underline = "\033[04m";
	const std::string blink = "\033[05m";

	// Containing all the foreground colors
	namespace fg
	{
		const std::string black = "\033[30m";
		const std::string red = "\033[31m";
		const std::string green = "\033[32m";
		const std::string orange = "\033[33m";
		const std::string blue = "\033[34m";
		const std::string magenta = "\033[35m";
		const std::string cyan = "\033[36m";
		const std::string white = "\033[37m";
	}

	// Containing all the background colors
	namespace bkg
	{
		const std::string black = "\033[40m";
		const std::string red = "\033[41m";
		const std::string green = "\033[42m";
		const std::string orange = "\033[43m";
		const std::string blue = "\033[44m";
		const std::string magenta = "\033[45m";
		const std::string cyan = "\033[46m";
		const std::string white = "\033[47m";
	}
}

#endif
