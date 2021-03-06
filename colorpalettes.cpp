#ifndef __INC_COLORPALETTES_H
#define __INC_COLORPALETTES_H
#define FASTLED_INTERNAL
#include "FastLED.h"
#include "colorutils.h"
#include "colorpalettes.h"

FASTLED_USING_NAMESPACE


// Preset color schemes, such as they are.

// These schemes are all declared as "PROGMEM", meaning
// that they won't take up SRAM on AVR chips until used.
// Furthermore, the compiler won't even include these
// in your PROGMEM (flash) storage unless you specifically
// use each one, so you only 'pay for' those you actually use.


extern const TProgmemRGBPalette16 CloudColors_p FL_PROGMEM =
{
    CRGB::Blue,
    CRGB::DarkBlue,
    CRGB::DarkBlue,
    CRGB::DarkBlue,

    CRGB::DarkBlue,
    CRGB::DarkBlue,
    CRGB::DarkBlue,
    CRGB::DarkBlue,

    CRGB::Blue,
    CRGB::DarkBlue,
    CRGB::SkyBlue,
    CRGB::SkyBlue,

    CRGB::LightBlue,
    CRGB::White,
    CRGB::LightBlue,
    CRGB::SkyBlue
};

extern const TProgmemRGBPalette16 LavaColors_p FL_PROGMEM =
{
    CRGB::Black,
    CRGB::Maroon,
    CRGB::Black,
    CRGB::Maroon,

    CRGB::DarkRed,
    CRGB::Maroon,
    CRGB::DarkRed,

    CRGB::DarkRed,
    CRGB::DarkRed,
    CRGB::Red,
    CRGB::Orange,

    CRGB::White,
    CRGB::Orange,
    CRGB::Red,
    CRGB::DarkRed
};


extern const TProgmemRGBPalette16 OceanColors_p FL_PROGMEM =
{
    CRGB::MidnightBlue,
    CRGB::DarkBlue,
    CRGB::MidnightBlue,
    CRGB::Navy,

    CRGB::DarkBlue,
    CRGB::MediumBlue,
    CRGB::SeaGreen,
    CRGB::Teal,

    CRGB::CadetBlue,
    CRGB::Blue,
    CRGB::DarkCyan,
    CRGB::CornflowerBlue,

    CRGB::Aquamarine,
    CRGB::SeaGreen,
    CRGB::Aqua,
    CRGB::LightSkyBlue
};

extern const TProgmemRGBPalette16 ForestColors_p FL_PROGMEM =
{
    CRGB::DarkGreen,
    CRGB::DarkGreen,
    CRGB::DarkOliveGreen,
    CRGB::DarkGreen,

    CRGB::Green,
    CRGB::ForestGreen,
    CRGB::OliveDrab,
    CRGB::Green,

    CRGB::SeaGreen,
    CRGB::MediumAquamarine,
    CRGB::LimeGreen,
    CRGB::YellowGreen,

    CRGB::LightGreen,
    CRGB::LawnGreen,
    CRGB::MediumAquamarine,
    CRGB::ForestGreen
};

/// HSV Rainbow
extern const TProgmemRGBPalette16 RainbowColors_p FL_PROGMEM =
{
    0xFF0000, 0xD52A00, 0xAB5500, 0xAB7F00,
    0xABAB00, 0x56D500, 0x00FF00, 0x00D52A,
    0x00AB55, 0x0056AA, 0x0000FF, 0x2A00D5,
    0x5500AB, 0x7F0081, 0xAB0055, 0xD5002B
};

/// HSV Suski pendant
extern const TProgmemRGBPalette16 SuskiColors_p FL_PROGMEM = { 

    0x000033,//midnightblue2 
    0x000080,//navy 
    0x0147FA, // ty nant 
    0x00008B,//darkblue 
    0x081970,//midnightblue 
    0x000033,//midnightblue2 
    0x000033,//midnightblue2 
    0x000033,//midnightblue2 
    0x000033,//midnightblue2 
    0x00009C,// newmidnightblue 
    0x0000CD,//mediumblue 
    0x0000EE,//blue2 
    0x0000FF,// blue 
    0x000033,//midnightblue2 
    0x000033,//midnightblue2 
    0x000033,//midnightblue2 
};


/// HSV Fire bracelet
extern const TProgmemRGBPalette16 FireColors_p FL_PROGMEM = { 

    0xFF6100, //cadmiumorange
    0x8A3600, // burntsienna
    0xCD2600, //firebrick 3
    0x800000, // maroon
    0xA52200, // brown
    0xFF8500, // darkorange
    0xDA3500, // goldenrod
    0xFF4700, // gold 1
    0xFFFF00, // yellow 1
    0xFF5400, //  khaki 1
    0xFFC100, // goldenrod 1
    0xEE2300, // darkgoldenrod 2
    0xFF4400, //  cadmiumyellow
    0xFF7700, // chocolate 1
    0xFF4500, // orangered 1 
    0xF44400, // sandybrown
};

/// Hoodlet Day0 FireColours 
extern const TProgmemRGBPalette16 Day0_p FL_PROGMEM = { 

    0xFF6100, //cadmiumorange
    0x8A3600, // burntsienna
    0xCD2600, //firebrick 3
    0x800000, // maroon
    0xA52200, // brown
    0xFF8500, // darkorange
    0xDA3500, // goldenrod
    0xFFC100, // goldenrod 1
    0xFF4700, // gold 1
    0xFF5400, //  khaki 1
    0xFFC100, // goldenrod 1
    0xEE2300, // darkgoldenrod 2
    0xFF4400, //  cadmiumyellow
    0xFF7700, // chocolate 1
    0xFF4500, // orangered 1 
    0xF44400, // sandybrown
};

/// Hoodlet Day1 blue to pink 
extern const TProgmemRGBPalette16 Day1_p FL_PROGMEM = { 
	0xE5004B,
        0xD50C4E,
	0xC61952,
	0xB72655,
	0xA73259,
	0x983F5C,
	0x894C60,
	0x7A5963,
	0x6A6567,
	0x5B726A,
	0x4C7F6E,
	0x3D8C71,
	0x2D9875,
	0x1EA578,
	0x0FB27C,
	0x00BF80,


};

/// Hoodlet Day2 blue to black 
extern const TProgmemRGBPalette16 Day2_p FL_PROGMEM = { 

	0x27C4D7,
	0x27B5CF,
	0x28A7C7,
	0x2899BF,
	0x288AB7,
	0x287CAF,
	0x296DA8,
	0x295FA0,
	0x295198,
	0x294290,
	    0x00009C,// newmidnightblue 
	    0x0000CD,//mediumblue 
	    0x0000EE,//blue2 
	    0x0000FF,// blue 
	    0x000033,//midnightblue2 
	    0x000033,//midnightblue2 
};

/// Hoodlet Day2_2 green to yellow 
extern const TProgmemRGBPalette16 Day2_2_p FL_PROGMEM = { 

	0xE3E500,
	0xD3E202,
	0xC4DF05,
	0xB5DD08,
	0xA6DA0A,
	0x97D80D,
	0x88D510,
	0x79D313,
	0x69D015,
	0x5ACE18,
	0x4BCB1B,
	0x3CC91E,
	0x2DC620,
	0x1EC423,
	0x0FC126,
	0x00BF29,

};

/// Hoodlet Day2_3 green to blue 
extern const TProgmemRGBPalette16 Day2_3_p FL_PROGMEM = { 
	0x3ED214,
	0x37B526,
	0x319838,
	0x2A7B4B,
	0x245F5D,
	0x1D4270,
	0x172582,
	0x110995,
	0x110995,
	0x172582,
	0x1D4270,
	0x245F5D,
	0x2A7B4B,
	0x319838,
	0x37B526,
	0x3ED214,


};

/// HSV Rainbow colors with alternatating stripes of black
#define RainbowStripesColors_p RainbowStripeColors_p
extern const TProgmemRGBPalette16 RainbowStripeColors_p FL_PROGMEM =
{
    0xFF0000, 0x000000, 0xAB5500, 0x000000,
    0xABAB00, 0x000000, 0x00FF00, 0x000000,
    0x00AB55, 0x000000, 0x0000FF, 0x000000,
    0x5500AB, 0x000000, 0xAB0055, 0x000000
};

/// HSV color ramp: blue purple ping red orange yellow (and back)
/// Basically, everything but the greens, which tend to make
/// people's skin look unhealthy.  This palette is good for
/// lighting at a club or party, where it'll be shining on people.
extern const TProgmemRGBPalette16 PartyColors_p FL_PROGMEM =
{
    0x5500AB, 0x84007C, 0xB5004B, 0xE5001B,
    0xE81700, 0xB84700, 0xAB7700, 0xABAB00,
    0xAB5500, 0xDD2200, 0xF2000E, 0xC2003E,
    0x8F0071, 0x5F00A1, 0x2F00D0, 0x0007F9
};

/// Approximate "black body radiation" palette, akin to
/// the FastLED 'HeatColor' function.
/// Recommend that you use values 0-240 rather than
/// the usual 0-255, as the last 15 colors will be
/// 'wrapping around' from the hot end to the cold end,
/// which looks wrong.
extern const TProgmemRGBPalette16 HeatColors_p FL_PROGMEM =
{
    0x000000,
    0x330000, 0x660000, 0x990000, 0xCC0000, 0xFF0000,
    0xFF3300, 0xFF6600, 0xFF9900, 0xFFCC00, 0xFFFF00,
    0xFFFF33, 0xFFFF66, 0xFFFF99, 0xFFFFCC, 0xFFFFFF
};


// Gradient palette "Rainbow_gp",
// provided for situations where you're going
// to use a number of other gradient palettes, AND
// you want a 'standard' FastLED rainbow as well.

DEFINE_GRADIENT_PALETTE( Rainbow_gp ) {
      0,  255,  0,  0, // Red
     32,  171, 85,  0, // Orange
     64,  171,171,  0, // Yellow
     96,    0,255,  0, // Green
    128,    0,171, 85, // Aqua
    160,    0,  0,255, // Blue
    192,   85,  0,171, // Purple
    224,  171,  0, 85, // Pink
    255,  255,  0,  0};// and back to Red

#endif
