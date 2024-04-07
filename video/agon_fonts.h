//
// Title:			Agon Video BIOS - font management
// Author:			Damien Guard
//					Lennart Benschop
// 					Steve Sims
// Created:			06/08/2022
// Last Updated:	20/02/2023
//
// Modinfo:
// 17/08/2022:		Implemented Acorn font
// 05/09/2022:		Renamed file
// 20/02/2023:		Marked out non-standard CP-1252 characters in comments, fixed £ and `
// 14/10/2023:		LB: Added CP1252 characters from BBC Basic for SDL2, kept all Agon ASCII characters as is, including £
//
// BBC Basic for SDL2 is
// Copyright (c) 2021, Richard T. Russell, http://www.rtrussell.co.uk/
// 
// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.

// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:

// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software.  If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.

// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.

// 3. This notice may not be removed or altered from any source distribution.

#pragma once

#include <memory>
#include <unordered_map>

#include <fabgl.h>

#include "agon.h"
#include "buffers.h"
#include "types.h"

std::unordered_map<uint16_t, std::shared_ptr<fabgl::FontInfo>> fonts;	// Storage for our fonts

uint8_t FONT_AGON_DATA[256*8]; 

static const uint8_t FONT_AGON_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x00, // !
	0x6c, 0x6c, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, // "
	0x36, 0x36, 0x7f, 0x36, 0x7f, 0x36, 0x36, 0x00, // #
	0x0c, 0x3f, 0x68, 0x3e, 0x0b, 0x7e, 0x18, 0x00, // $
	0x60, 0x66, 0x0c, 0x18, 0x30, 0x66, 0x06, 0x00, // %
	0x38, 0x6c, 0x6c, 0x38, 0x6d, 0x66, 0x3b, 0x00, // &
	0x0c, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x0c, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0c, 0x00, // (
	0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0x30, 0x00, // )
	0x00, 0x18, 0x7e, 0x3c, 0x7e, 0x18, 0x00, 0x00, // *
	0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, // .
	0x00, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x00, 0x00, // /

	0x3c, 0x66, 0x6e, 0x7e, 0x76, 0x66, 0x3c, 0x00, // 0
	0x18, 0x38, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x00, // 1
	0x3c, 0x66, 0x06, 0x0c, 0x18, 0x30, 0x7e, 0x00, // 2
	0x3c, 0x66, 0x06, 0x1c, 0x06, 0x66, 0x3c, 0x00, // 3
	0x0c, 0x1c, 0x3c, 0x6c, 0x7e, 0x0c, 0x0c, 0x00, // 4
	0x7e, 0x60, 0x7c, 0x06, 0x06, 0x66, 0x3c, 0x00, // 5
	0x1c, 0x30, 0x60, 0x7c, 0x66, 0x66, 0x3c, 0x00, // 6
	0x7e, 0x06, 0x0c, 0x18, 0x30, 0x30, 0x30, 0x00, // 7
	0x3c, 0x66, 0x66, 0x3c, 0x66, 0x66, 0x3c, 0x00, // 8
	0x3c, 0x66, 0x66, 0x3e, 0x06, 0x0c, 0x38, 0x00, // 9
	0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, // :
	0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x30, // ;
	0x0c, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0c, 0x00, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x30, 0x18, 0x0c, 0x06, 0x0c, 0x18, 0x30, 0x00, // >
	0x3c, 0x66, 0x0c, 0x18, 0x18, 0x00, 0x18, 0x00, // ?

	0x3c, 0x66, 0x6e, 0x6a, 0x6e, 0x60, 0x3c, 0x00, // @
	0x3c, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00, // A
	0x7c, 0x66, 0x66, 0x7c, 0x66, 0x66, 0x7c, 0x00, // B
	0x3c, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3c, 0x00, // C
	0x78, 0x6c, 0x66, 0x66, 0x66, 0x6c, 0x78, 0x00, // D
	0x7e, 0x60, 0x60, 0x7c, 0x60, 0x60, 0x7e, 0x00, // E
	0x7e, 0x60, 0x60, 0x7c, 0x60, 0x60, 0x60, 0x00, // F
	0x3c, 0x66, 0x60, 0x6e, 0x66, 0x66, 0x3c, 0x00, // G
	0x66, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00, // H
	0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7e, 0x00, // I
	0x3e, 0x0c, 0x0c, 0x0c, 0x0c, 0x6c, 0x38, 0x00, // J
	0x66, 0x6c, 0x78, 0x70, 0x78, 0x6c, 0x66, 0x00, // K
	0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7e, 0x00, // L
	0x63, 0x77, 0x6b, 0x6b, 0x63, 0x63, 0x63, 0x00, // M
	0x66, 0x66, 0x76, 0x7e, 0x6e, 0x66, 0x66, 0x00, // N
	0x3c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, // O

	0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, 0x60, 0x00, // P
	0x3c, 0x66, 0x66, 0x66, 0x6a, 0x6c, 0x36, 0x00, // Q
	0x7c, 0x66, 0x66, 0x7c, 0x6c, 0x66, 0x66, 0x00, // R
	0x3c, 0x66, 0x60, 0x3c, 0x06, 0x66, 0x3c, 0x00, // S
	0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // T
	0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, // U
	0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00, // V
	0x63, 0x63, 0x6b, 0x6b, 0x7f, 0x77, 0x63, 0x00, // W
	0x66, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x66, 0x00, // X
	0x66, 0x66, 0x66, 0x3c, 0x18, 0x18, 0x18, 0x00, // Y
	0x7e, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x7e, 0x00, // Z
	0x7c, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7c, 0x00, // [
	0x00, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x00, 0x00, // 
	0x3e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x3e, 0x00, // ]
	0x18, 0x3c, 0x66, 0x42, 0x00, 0x00, 0x00, 0x00, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _

	0x30, 0x18, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, // `
	0x00, 0x00, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, // a
	0x60, 0x60, 0x7c, 0x66, 0x66, 0x66, 0x7c, 0x00, // b
	0x00, 0x00, 0x3c, 0x66, 0x60, 0x66, 0x3c, 0x00, // c
	0x06, 0x06, 0x3e, 0x66, 0x66, 0x66, 0x3e, 0x00, // d
	0x00, 0x00, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, // e
	0x1c, 0x30, 0x30, 0x7c, 0x30, 0x30, 0x30, 0x00, // f
	0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x3c, // g
	0x60, 0x60, 0x7c, 0x66, 0x66, 0x66, 0x66, 0x00, // h
	0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x3c, 0x00, // i
	0x0c, 0x00, 0x1c, 0x0c, 0x0c, 0x0c, 0x0c, 0x78, // j
	0x60, 0x60, 0x66, 0x6c, 0x78, 0x6c, 0x66, 0x00, // k
	0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, // l
	0x00, 0x00, 0x36, 0x7f, 0x6b, 0x6b, 0x63, 0x00, // m
	0x00, 0x00, 0x7c, 0x66, 0x66, 0x66, 0x66, 0x00, // n
	0x00, 0x00, 0x3c, 0x66, 0x66, 0x66, 0x3c, 0x00, // o

	0x00, 0x00, 0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, // p
	0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x07, // q
	0x00, 0x00, 0x6c, 0x76, 0x60, 0x60, 0x60, 0x00, // r
	0x00, 0x00, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x00, // s
	0x30, 0x30, 0x78, 0x30, 0x30, 0x30, 0x1e, 0x00, // t
	0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3e, 0x00, // u
	0x00, 0x00, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00, // v
	0x00, 0x00, 0x63, 0x6b, 0x6b, 0x7f, 0x36, 0x00, // w
	0x00, 0x00, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x00, // x
	0x00, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x06, 0x3c, // y
	0x00, 0x00, 0x7e, 0x0c, 0x18, 0x30, 0x7e, 0x00, // z
	0x0c, 0x18, 0x18, 0x70, 0x18, 0x18, 0x0c, 0x00, // {
	0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00, // |
	0x30, 0x18, 0x18, 0x0e, 0x18, 0x18, 0x30, 0x00, // }
	0x66, 0xd6, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x3c, 0x42, 0x9d, 0xb1, 0xb1, 0x9d, 0x42, 0x3c, // © (should be delete)
	0x3C, 0x62, 0xF8, 0x60, 0xF8, 0x62, 0x3C, 0x00, // &80 euro symbol
	0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00, // &81 block (teletext)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, // &82 single low quotation mark
	0x00, 0x0C, 0x18, 0x18, 0x3C, 0x18, 0x18, 0x70, // &83 small letter f with hook
	0x00, 0x00, 0x00, 0x00, 0x00, 0x6C, 0x6C, 0xD8, // &84 double low quotation mark
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x00, // &85 horizontal ellipsis
	0x18, 0x18, 0x7E, 0x18, 0x18, 0x18, 0x18, 0x00, // &86 dagger
	0x18, 0x18, 0x7E, 0x18, 0x18, 0x7E, 0x18, 0x18, // &87 double dagger
	0x10, 0x38, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, // &88 circumflex accent
	0xC6, 0xCC, 0x18, 0x30, 0x60, 0xDB, 0x1B, 0x00, // &89 per mille
	0x38, 0x7C, 0xC6, 0x70, 0x1C, 0xC6, 0x7C, 0x00, // &8A capital S caron
	0x00, 0x18, 0x30, 0x60, 0x30, 0x18, 0x00, 0x00, // &8B left angle quotation mark
	0x7E, 0xD8, 0xD8, 0xDE, 0xD8, 0xD8, 0x7E, 0x00, // &8C capital OE ligature
	0x30, 0x78, 0xFC, 0x30, 0x30, 0x30, 0x30, 0x00, // &8D up arrow (teletext)
	0x38, 0xFE, 0x0C, 0x18, 0x30, 0x60, 0xFE, 0x00, // &8E capital Z caron
	0x00, 0x20, 0x60, 0xFE, 0x60, 0x20, 0x00, 0x00, // &8F left arrow (teletext)
	0x00, 0x08, 0x0C, 0xFE, 0x0C, 0x08, 0x00, 0x00, // &90 right arrow (teletext)
	0x30, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // &91 left single quotation mark
	0x18, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // &92 right single quotation mark
	0x6C, 0x6C, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, // &93 left double quotation mark
	0x36, 0x36, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, // &94 right double quotation mark
	0x00, 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x00, 0x00, // &95 bullet
	0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, // &96 en dash
	0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, // &97 em dash
	0x36, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // &98 small tilde
	0xEA, 0x4E, 0x4A, 0x4A, 0x00, 0x00, 0x00, 0x00, // &99 trade mark sign
	0x6C, 0x38, 0x7C, 0xC0, 0x78, 0x0C, 0xF8, 0x00, // &9A small S caron
	0x00, 0x30, 0x18, 0x0C, 0x18, 0x30, 0x00, 0x00, // &9B right angle quotation mark
	0x00, 0x00, 0x7E, 0xDB, 0xDF, 0xD8, 0x7F, 0x00, // &9C small OE ligature
	0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, // &9D double line (teletext)
	0x6C, 0x38, 0x7C, 0x18, 0x30, 0x60, 0x7C, 0x00, // &9E small Z caron
	0xCC, 0x00, 0xCC, 0xCC, 0x78, 0x30, 0x30, 0x00, // &9F capital Y diaeresis
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // &A0 non-breaking space
	0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, // ¡ 
	0x00, 0x18, 0x7E, 0xD8, 0xD8, 0x7E, 0x18, 0x00, // ¢ 
	0x1c, 0x36, 0x30, 0x7c, 0x30, 0x30, 0x7e, 0x00, // £
	0x66, 0x3C, 0x66, 0x3C, 0x66, 0x00, 0x00, 0x00, // ¤ 
	0xC3, 0x66, 0x3C, 0x18, 0x3C, 0x18, 0x18, 0x00, // ¥ 
	0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00, // ¦ 
	0x3C, 0x60, 0x3C, 0x66, 0x66, 0x3C, 0x06, 0x3C, // § 
	0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ¨ 
	0x7E, 0x81, 0x9D, 0xB1, 0xB1, 0x9D, 0x81, 0x7E, // © 
	0x3C, 0x6C, 0x6C, 0x3E, 0x00, 0x7E, 0x00, 0x00, // ª 
	0x00, 0x33, 0x66, 0xCC, 0x66, 0x33, 0x00, 0x00, // « 
	0x00, 0x7E, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, // ¬ 
	0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, // soft hyphen
	0x7E, 0x81, 0xB9, 0xA5, 0xB9, 0xA5, 0x81, 0x7E, // ® 
	0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ¯
	0x3C, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, // ° 
	0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x7E, 0x00, // ± 
	0x70, 0x18, 0x30, 0x60, 0x78, 0x00, 0x00, 0x00, // ² 
	0x78, 0x0C, 0x18, 0x0C, 0x78, 0x00, 0x00, 0x00, // ³ 
	0x0C, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // ´ 
	0x00, 0x00, 0x66, 0x66, 0x66, 0x7C, 0x60, 0xC0, // µ 
	0x3E, 0x7A, 0x7A, 0x3A, 0x1A, 0x1A, 0x1A, 0x00, // ¶ 
	0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, // · 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00, // ¸ 
	0x30, 0x70, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, // ¹ 
	0x38, 0x6C, 0x6C, 0x38, 0x00, 0x7C, 0x00, 0x00, // º 
	0x00, 0xCC, 0x66, 0x33, 0x66, 0xCC, 0x00, 0x00, // » 
	0x43, 0xC6, 0x4C, 0x5A, 0x36, 0x6A, 0xCF, 0x02, // ¼ 
	0x40, 0xC6, 0x4C, 0x5E, 0x33, 0x66, 0xCC, 0x0F, // ½ 
	0xC0, 0x23, 0x66, 0x2D, 0xDB, 0x35, 0x67, 0x01, // ¾ 
	0x18, 0x00, 0x18, 0x30, 0x60, 0x66, 0x3C, 0x00, // ¿ 
	0x70, 0x00, 0x3C, 0x66, 0x7E, 0x66, 0x66, 0x00, // À 
	0x0E, 0x00, 0x3C, 0x66, 0x7E, 0x66, 0x66, 0x00, // Á 
	0x18, 0x66, 0x00, 0x3C, 0x66, 0x7E, 0x66, 0x00, // Â 
	0x76, 0xDC, 0x00, 0x3C, 0x66, 0x7E, 0x66, 0x00, // Ã 
	0x66, 0x00, 0x3C, 0x66, 0x7E, 0x66, 0x66, 0x00, // Ä 
	0x18, 0x18, 0x00, 0x3C, 0x66, 0x7E, 0x66, 0x00, // Å 
	0x3F, 0x6C, 0xCC, 0xFE, 0xCC, 0xCC, 0xCF, 0x00, // Æ 
	0x3C, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3C, 0x18, // Ç 
	0x70, 0x00, 0xFE, 0xC0, 0xF0, 0xC0, 0xFE, 0x00, // È 
	0x0E, 0x00, 0xFE, 0xC0, 0xF0, 0xC0, 0xFE, 0x00, // É 
	0x18, 0x66, 0x00, 0xFE, 0xF0, 0xC0, 0xFE, 0x00, // Ê 
	0x66, 0x00, 0xFE, 0xC0, 0xF0, 0xC0, 0xFE, 0x00, // Ë 
	0x70, 0x00, 0x7E, 0x18, 0x18, 0x18, 0x7E, 0x00, // Ì 
	0x0E, 0x00, 0x7E, 0x18, 0x18, 0x18, 0x7E, 0x00, // Í 
	0x18, 0x66, 0x00, 0x7E, 0x18, 0x18, 0x7E, 0x00, // Î 
	0x66, 0x00, 0x7E, 0x18, 0x18, 0x18, 0x7E, 0x00, // Ï 
	0x78, 0x6C, 0x66, 0xF6, 0x66, 0x6C, 0x78, 0x00, // Ð 
	0x76, 0xDC, 0x00, 0xC6, 0xF6, 0xDE, 0xC6, 0x00, // Ñ 
	0x70, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, // Ò 
	0x0E, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, // Ó 
	0x18, 0x66, 0x00, 0x7C, 0xC6, 0xC6, 0x7C, 0x00, // Ô 
	0x76, 0xDC, 0x00, 0x7C, 0xC6, 0xC6, 0x7C, 0x00, // Õ 
	0x66, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, // Ö 
	0x00, 0xC6, 0x6C, 0x38, 0x6C, 0xC6, 0x00, 0x00, // × 
	0x3E, 0x66, 0x6E, 0x7E, 0x76, 0x66, 0x7C, 0x00, // Ø 
	0x70, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, // Ù 
	0x0E, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, // Ú 
	0x18, 0x66, 0x00, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, // Û 
	0x66, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, // Ü 
	0x0E, 0x00, 0x66, 0x66, 0x3C, 0x18, 0x18, 0x00, // Ý 
	0xC0, 0xC0, 0xFC, 0xC6, 0xFC, 0xC0, 0xC0, 0x00, // Þ 
	0x3C, 0x66, 0x66, 0x6C, 0x66, 0x66, 0x6C, 0x00, // ß 
	0x70, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x3E, 0x00, // à 
	0x0E, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x3E, 0x00, // á 
	0x18, 0x66, 0x00, 0x3E, 0x66, 0xC6, 0x7E, 0x00, // â 
	0x76, 0xDC, 0x00, 0x3E, 0x66, 0xC6, 0x7E, 0x00, // ã 
	0x66, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x3E, 0x00, // ä 
	0x18, 0x18, 0x00, 0x3E, 0x66, 0xC6, 0x7E, 0x00, // å 
	0x00, 0x00, 0x7E, 0x1B, 0x7F, 0xD8, 0x77, 0x00, // æ 
	0x00, 0x00, 0x3C, 0x60, 0x60, 0x60, 0x3C, 0x18, // ç 
	0x70, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00, // è 
	0x0E, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00, // é 
	0x18, 0x66, 0x00, 0x3C, 0x7E, 0x60, 0x3C, 0x00, // ê 
	0x66, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00, // ë 
	0x70, 0x00, 0x38, 0x18, 0x18, 0x18, 0x3C, 0x00, // ì 
	0x0E, 0x00, 0x38, 0x18, 0x18, 0x18, 0x3C, 0x00, // í 
	0x18, 0x66, 0x00, 0x38, 0x18, 0x18, 0x3C, 0x00, // î 
	0x66, 0x00, 0x38, 0x18, 0x18, 0x18, 0x3C, 0x00, // ï 
	0x0C, 0x3E, 0x0C, 0x7C, 0xCC, 0xCC, 0x78, 0x00, // ð 
	0x76, 0xDC, 0x00, 0x7C, 0x66, 0x66, 0x66, 0x00, // ñ 
	0x70, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00, // ò 
	0x0E, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00, // ó 
	0x18, 0x66, 0x00, 0x3C, 0x66, 0x66, 0x3C, 0x00, // ô 
	0x76, 0xDC, 0x00, 0x3C, 0x66, 0x66, 0x3C, 0x00, // õ 
	0x66, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00, // ö 
	0x18, 0x18, 0x00, 0x7E, 0x00, 0x18, 0x18, 0x00, // ÷ 
	0x00, 0x02, 0x7C, 0xCE, 0xD6, 0xE6, 0x7C, 0x80, // ø 
	0x70, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x00, // ù 
	0x0E, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x00, // ú 
	0x18, 0x66, 0x00, 0x66, 0x66, 0x66, 0x3E, 0x00, // û 
	0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x00, // ü 
	0x0E, 0x00, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x3C, // ý 
	0x60, 0x60, 0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60, // þ 
	0x66, 0x00, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x3C  // ÿ 
};

const fabgl::FontInfo FONT_AGON = {
	.pointSize = 6,
	.width     = 8,
	.height    = 8,
	.ascent    = 7,
	.inleading = 0,
	.exleading = 0,
	.flags     = 0,
	.weight    = 400,
	.charset   = 255,
	.data      = FONT_AGON_DATA,
	.chptr     = nullptr,
	.codepage  = 1252,
};

// Copy the AGON font data (system font) from Flash to RAM
//
void copy_font() {
	memcpy(FONT_AGON_DATA, FONT_AGON_BITMAP, sizeof(FONT_AGON_BITMAP));
}

// Redefine a character in the system font
// Applies only when the system font is selected
//
void redefineCharacter(uint8_t c, uint8_t * data) {
	memcpy(&FONT_AGON_DATA[c * 8], data, 8);
}

std::shared_ptr<fabgl::FontInfo> createFontFromBuffer(uint16_t bufferId, uint8_t width, uint8_t height, uint8_t ascent, uint8_t flags) {
	if (bufferId == 65535 || (buffers.find(bufferId) == buffers.end())) {
		debug_log("createFontFromBuffer: buffer %d not found\n\r", bufferId);
		return nullptr;
	}
	if (buffers[bufferId].size() != 1) {
		debug_log("createFontFromBuffer: buffer %d is not a singular buffer and cannot be used for a font source\n\r", bufferId);
		return nullptr;
	}

	if (~flags & FONTINFOFLAGS_VARWIDTH) {
		// Font is fixed width, so we can calculate the size that our font data should be
		auto size = ((width + 7) >> 3) * height * 256;
		if (buffers[bufferId][0]->size() != size) {
			debug_log("createFontFromBuffer: buffer %d is not the correct size for a fixed width font\n\r", bufferId);
			return nullptr;
		}
	} else {
		// Variable width fonts not yet supported - will be in the future
		debug_log("createFontFromBuffer: variable width fonts not yet supported\n\r");
		return nullptr;
	}

	auto data = buffers[bufferId][0]->getBuffer();

	auto font = make_shared_psram<fabgl::FontInfo>();
	font->width = width;
	font->height = height;
	font->ascent = ascent;
	font->flags = flags;
	font->data = data;

	// Fill in default/empty values for the rest of the fields
	font->chptr = nullptr;
	font->pointSize = 0;
	font->inleading = 0;
	font->exleading = 0;
	font->weight = 400;
	font->charset = 255;
	font->codepage = 1252;

	fonts[bufferId] = font;

	return font;
}

void setFontInfo(uint16_t bufferId, uint8_t field, uint16_t value) {
	if (fonts.find(bufferId) == fonts.end()) {
		debug_log("setFontInfo: font %d not found\n\r", bufferId);
		return;
	}

	auto font = fonts[bufferId];
	switch (field) {
		case FONT_INFO_WIDTH: {
			font->width = (uint8_t) value;
		} break;
		case FONT_INFO_HEIGHT: {
			font->height = (uint8_t) value;
		} break;
		case FONT_INFO_ASCENT: {
			font->ascent = (uint8_t) value;
		} break;
		case FONT_INFO_FLAGS: {
			font->flags = (uint8_t) value;
		} break;
		case FONT_INFO_CHARPTRS_BUFFER: {
			if (buffers.find(value) == buffers.end()) {
				debug_log("setFontInfo: buffer %d for character pointers not found\n\r", value);
				return;
			}
			if (buffers[value].size() != 1) {
				debug_log("setFontInfo: buffer %d is not a singular buffer and cannot be used for a font character pointer source\n\r", value);
				return;
			}
			font->chptr = (const uint32_t*) (buffers[value][0]->getBuffer());
		} break;
		case FONT_INFO_POINTSIZE: {
			font->pointSize = (uint8_t) value;
		} break;
		case FONT_INFO_INLEADING: {
			font->inleading = (uint8_t) value;
		} break;
		case FONT_INFO_EXLEADING: {
			font->exleading = (uint8_t) value;
		} break;
		case FONT_INFO_WEIGHT: {
			font->weight = value;
		} break;
		case FONT_INFO_CHARSET: {
			font->charset = value;
		} break;
		case FONT_INFO_CODEPAGE: {
			font->codepage = value;
		} break;
	}
}

void clearFont(uint16_t bufferId) {
	if (fonts.find(bufferId) == fonts.end()) {
		return;
	}

	fonts.erase(bufferId);
}

void resetFonts() {
	fonts.clear();
}

uint8_t * getCharPtr(std::shared_ptr<fabgl::FontInfo> font, uint8_t c) {
	if (!font) {
		// system font
		return FONT_AGON_DATA + (c * 8);
	}

	if (font->chptr == nullptr) {
		return (uint8_t *) (font->data + (c * font->height * ((font->width + 7) >> 3)));
	} else {
		return (uint8_t *) (font->data + font->chptr[c]);
	}
}
