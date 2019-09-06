/*
 *
 * ElektronMart6x8
 *
 *
 * File Name           : ElektronMart6x8.h
 * Date Created        : 3 Sept 2019
 * Date Updated        : 6 Sept 2019
 * Font width          : 6
 * Font height         : 8
 * Font first char     : 32
 * Font last char      : 127
 * Font used chars     : 94
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#ifdef __AVR__
#include <avr/pgmspace.h>
#elif defined (ESP8266)
#include <pgmspace.h>
#else
#define PROGMEM
#endif

#ifndef ELEKTRONMART6x8_H
#define ELEKTRONMART6x8_H

#define ELEKTRONMART6x8_WIDTH 6
#define ELEKTRONMART6x8_HEIGHT 8

/*
 * added to allow fontname to match header file name. 
 * as well as keep the old name for backward compability
 */

#define SystemFont6x8 System6x8

const static uint8_t ElektronMart6x8[] PROGMEM = {
    0x05, 0x07, // size // size of zero indicates fixed width font, actual length is width * height
    0x06, // width
    0x08, // height
    0x20, // first char
    0x60, // char count
    
0x02,0x06,0x06,0x06,0x08,0x06,0x06,0x06,0x06,0x06, //	!	"	#	$	%	&	'	(	)
0x06,0x06,0x04,0x06,0x04,0x06,0x06,0x06,0x06,0x06, //*	+   	,	-	.	/	0	1	2	3
0x06,0x06,0x06,0x06,0x06,0x06,0x04,0x06,0x06,0x06, //4	5	6	7	8	9	:	;	<	=
0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, //>	?	@	A	B	C	D	E	F	G
0x06,0x04,0x06,0x06,0x06,0x07,0x06,0x06,0x06,0x06, //H	I	J	K	L	M	N	O	P	Q
0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, //R	S	T	U	V	W	X	Y	Z	[
0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, //\	]	^	_	`	a	b	c	d	e
0x06,0x06,0x06,0x02,0x03,0x06,0x03,0x06,0x06,0x06, //f	g	h	i	j	k	l	m	n	o
0x06,0x06,0x06,0x06,0x05,0x06,0x06,0x07,0x06,0x06, //p	q	r	s	t	u	v	w	x	y
0x06,0x06,0x06,0x06,0x06,0x06,
    
	// font data
	0x00, 0x00,// (space)
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// !
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// "
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// #
	0x3c, 0x76, 0xdb, 0xb7, 0xbf, 0xb7, 0x5a, 0x34,// $
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// %
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// &
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// '
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// (
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// )
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// *
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// +
	0x00, 0x60, 0xe0, 0x00,// ,
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// -
	0x00, 0x60, 0x60, 0x00, // .
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// /
	0x3f, 0x7f, 0x63, 0x63, 0x7f, 0x7e,// 0
	0x00, 0x00, 0x3f, 0x7e, 0x00, 0x00,// 1
	0x3b, 0x7b, 0x6b, 0x6b, 0x6f, 0x6e,// 2
	0x23, 0x63, 0x6b, 0x6b, 0x7f, 0x7e,// 3
	0x0f, 0x1f, 0x18, 0x18, 0x7f, 0x7e,// 4
	0x2f, 0x6f, 0x6b, 0x6b, 0x7b, 0x7a,// 5
	0x3f, 0x7f, 0x6b, 0x6b, 0x7b, 0x7a,// 6
	0x03, 0x03, 0x03, 0x03, 0x7f, 0x7e,// 7
	0x3f, 0x7f, 0x6b, 0x6b, 0x7f, 0x7e,// 8
	0x2f, 0x6f, 0x6b, 0x6b, 0x7f, 0x7e,// 9
	0x00, 0x16, 0x34, 0x00,// :
	0x00, 0x36, 0x36, 0x76, 0x74, 0x00,// ;
	0x1c, 0x3e, 0x36, 0x36, 0x36, 0x34,// <
	0x16, 0x36, 0x36, 0x36, 0x36, 0x34,// =
	0x16, 0x36, 0x36, 0x36, 0x3e, 0x1c,// >
	0x03, 0x07, 0x03, 0x5b, 0x5f, 0x0e,// ?
	0x7f, 0x41, 0x5d, 0x55, 0x5d, 0x7d,// @
	0x7e, 0x7f, 0x13, 0x13, 0x7f, 0x7e,// A
	0x3f, 0x7f, 0x6b, 0x6b, 0x7f, 0x76,// B
	0x3f, 0x7f, 0x63, 0x63, 0x63, 0x62,// C
	0x3f, 0x7f, 0x63, 0x73, 0x3f, 0x1e,// D
	0x3f, 0x7f, 0x6b, 0x6b, 0x63, 0x62,// E
	0x3f, 0x7f, 0x0b, 0x0b, 0x03, 0x02,// F
	0x3f, 0x7f, 0x63, 0x6b, 0x7b, 0x7a,// G
	0x3f, 0x7f, 0x08, 0x08, 0x7f, 0x7e,// H
	0x23, 0x7f, 0x7f, 0x62, // I
	0x40, 0x63, 0x63, 0x63, 0x7f, 0x7e,// J
	0x3f, 0x7f, 0x08, 0x1c, 0x77, 0x62,// K
	0x3f, 0x7f, 0x60, 0x60, 0x60, 0x60,// L
	0x3f, 0x7f, 0x06, 0x0c, 0x06, 0x7f, 0x7e,// M
	0x3f, 0x7f, 0x02, 0x04, 0x7f, 0x7e,// N
	0x3f, 0x7f, 0x63, 0x63, 0x7f, 0x7e,// O
	0x3f, 0x7f, 0x13, 0x13, 0x1f, 0x1e,// P
	0x1f, 0x3f, 0x33, 0x3b, 0x7f, 0x7e,// Q
	0x7f, 0x7f, 0x13, 0x13, 0x6f, 0x6e,// R
	0x2f, 0x6f, 0x6b, 0x6b, 0x7b, 0x7a,// S
	0x03, 0x03, 0x7f, 0x7f, 0x03, 0x02,// T
	0x3f, 0x7f, 0x60, 0x60, 0x7f, 0x7e,// U
	0x1f, 0x3f, 0x70, 0x60, 0x3f, 0x1e,// V
	0x3f, 0x7f, 0x60, 0x30, 0x60, 0x7f, 0x7e,// W
	0x37, 0x77, 0x08, 0x08, 0x77, 0x76,// X
	0x1f, 0x1f, 0x78, 0x78, 0x1f, 0x1e,// Y
	0x33, 0x73, 0x6b, 0x6b, 0x67, 0x66,// Z
	0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x38,// [
	0x3e, 0x3e, 0x26, 0x26, 0x7e, 0x7e,// "\"
	0x3e, 0x3e, 0x26, 0x26, 0x7e, 0x7e,// ]
	0x3e, 0x3e, 0x26, 0x26, 0x7e, 0x7e,// ^
	0x3e, 0x3e, 0x26, 0x26, 0x7e, 0x7e,// _
	0x3e, 0x3e, 0x26, 0x26, 0x7e, 0x7e,// `
	0x1e, 0x3e, 0x26, 0x26, 0x7e, 0x7c,// a
	0x3f, 0x7f, 0x66, 0x66, 0x7e, 0x7c,// b
	0x3e, 0x7e, 0x66, 0x66, 0x66, 0x64,// c
	0x3e, 0x7e, 0x66, 0x66, 0x7f, 0x7f,// d
	0x3e, 0x7e, 0x56, 0x56, 0x5e, 0x5c,// e
	0x3e, 0x7f, 0x0b, 0x0b, 0x03, 0x02,// f
	0x9e, 0xbe, 0xa6, 0xa6, 0xfe, 0xfc,// g
	0x3f, 0x7f, 0x06, 0x06, 0x7e, 0x7c,// h
	0x3d, 0x7c, // i
	0x80, 0xfb, 0x7a, // j
	0x3f, 0x7f, 0x10, 0x10, 0x6e, 0x6c,// k
	0x3f, 0x7e, 0x60, // l
	0x3e, 0x7e, 0x06, 0x0e, 0x06, 0x7c,// m
	0x3e, 0x7e, 0x06, 0x06, 0x7e, 0x7c,// n
	0x3e, 0x7e, 0x66, 0x66, 0x7e, 0x7c,// o
	0xfe, 0xfe, 0x66, 0x66, 0x7e, 0x7c,// p
	0x3e, 0x7e, 0x66, 0x66, 0xfe, 0xfc,// q
	0x3e, 0x7e, 0x06, 0x06, 0x06, 0x04,// r
	0x5e, 0x5e, 0x56, 0x56, 0x76, 0x74,// s
	0x3f, 0x7f, 0x66, 0x64, 0x60,// t
	0x3e, 0x7e, 0x60, 0x60, 0x7e, 0x7c,// u
	0x1e, 0x3e, 0x60, 0x40, 0x3e, 0x1c,// v
	0x3e, 0x7e, 0x40, 0x30, 0x40, 0x7e,// w
	0x2e, 0x6e, 0x10, 0x10, 0x6e, 0x6c,// x
	0x3e, 0xbe, 0xa0, 0xa0, 0xfe, 0xfc,// y
	0x46, 0x66, 0x76, 0x56, 0x4e, 0x44,// z
	0x3e, 0x3e, 0x26, 0x26, 0x7e, 0x7e,// {
	0x3e, 0x3e, 0x26, 0x26, 0x7e, 0x7e,// |
	0x3e, 0x3e, 0x26, 0x26, 0x7e, 0x7e,// }
	0x3e, 0x3e, 0x26, 0x26, 0x7e, 0x7e,// ->
	0x3e, 0x3e, 0x26, 0x26, 0x7e, 0x7e // <-
    
};

#endif
