/*
  Keyboard_ja_JP.h

  Copyright (c) 2024, Kiyohiro Kano

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef KEYBOARD_JA_JP_h
#define KEYBOARD_JA_JP_h

#include "HID.h"

#if !defined(_USING_HID)

#warning "Using legacy HID core (non pluggable)"

#else

//================================================================================
//================================================================================
//  Keyboard


#define KEY_JP_COLON        0x64
#define KEY_JP_AT           0x64
#define KEY_JP_CARET        0x64

#define KEY_JP_HANZEN       53
#define KEY_JP_KANJI        53 // Alias

#endif
#endif
