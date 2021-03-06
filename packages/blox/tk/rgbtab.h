/***********************************************************************
 *
 *  X color names
 *
 *
 ***********************************************************************/

/***********************************************************************
 *
 * Copyright 1988-92, 1994-95, 1999, 2000, 2006 Free Software Foundation, Inc.
 * Written by Paolo Bonzini.
 *
 * This file is part of GNU Smalltalk.
 *
 * GNU Smalltalk is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2, or (at your option) any later 
 * version.
 * 
 * Linking GNU Smalltalk statically or dynamically with other modules is
 * making a combined work based on GNU Smalltalk.  Thus, the terms and
 * conditions of the GNU General Public License cover the whole
 * combination.
 *
 * In addition, as a special exception, the Free Software Foundation
 * give you permission to combine GNU Smalltalk with free software
 * programs or libraries that are released under the GNU LGPL and with
 * independent programs running under the GNU Smalltalk virtual machine.
 *
 * You may copy and distribute such a system following the terms of the
 * GNU GPL for GNU Smalltalk and the licenses of the other code
 * concerned, provided that you include the source code of that other
 * code when and as the GNU GPL requires distribution of source code.
 *
 * Note that people who make modified versions of GNU Smalltalk are not
 * obligated to grant this special exception for their modified
 * versions; it is their choice whether to do so.  The GNU General
 * Public License gives permission to release a modified version without
 * this exception; this exception also makes it possible to release a
 * modified version which carries forward this exception.
 *
 * GNU Smalltalk is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * GNU Smalltalk; see the file COPYING.  If not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.  
 *
 ***********************************************************************/

typedef struct {
    int rgb;
    const char *color;
} xpmColorEntry;

/* This is a kind of rgb.txt file */
static xpmColorEntry xColors[] = { 
  { (240 << 16) | (248 << 8) | 255, "alice blue" },
  { (240 << 16) | (248 << 8) | 255, "AliceBlue" },
  { (250 << 16) | (235 << 8) | 215, "antique white" },
  { (255 << 16) | (239 << 8) | 219, "AntiqueWhite1" },
  { (238 << 16) | (223 << 8) | 204, "AntiqueWhite2" },
  { (205 << 16) | (192 << 8) | 176, "AntiqueWhite3" },
  { (139 << 16) | (131 << 8) | 120, "AntiqueWhite4" },
  { (250 << 16) | (235 << 8) | 215, "AntiqueWhite" },
  { (127 << 16) | (255 << 8) | 212, "aquamarine1" },
  { (118 << 16) | (238 << 8) | 198, "aquamarine2" },
  { (102 << 16) | (205 << 8) | 170, "aquamarine3" },
  { ( 69 << 16) | (139 << 8) | 116, "aquamarine4" },
  { (127 << 16) | (255 << 8) | 212, "aquamarine" },
  { (240 << 16) | (255 << 8) | 255, "azure1" },
  { (224 << 16) | (238 << 8) | 238, "azure2" },
  { (193 << 16) | (205 << 8) | 205, "azure3" },
  { (131 << 16) | (139 << 8) | 139, "azure4" },
  { (240 << 16) | (255 << 8) | 255, "azure" },
  { (245 << 16) | (245 << 8) | 220, "beige" },
  { (255 << 16) | (228 << 8) | 196, "bisque1" },
  { (238 << 16) | (213 << 8) | 183, "bisque2" },
  { (205 << 16) | (183 << 8) | 158, "bisque3" },
  { (139 << 16) | (125 << 8) | 107, "bisque4" },
  { (255 << 16) | (228 << 8) | 196, "bisque" },
  { (  0 << 16) | (  0 << 8) |   0, "black" },
  { (255 << 16) | (235 << 8) | 205, "blanched almond" },
  { (255 << 16) | (235 << 8) | 205, "BlanchedAlmond" },
  { (138 << 16) | ( 43 << 8) | 226, "blue violet" },
  { (  0 << 16) | (  0 << 8) | 255, "blue1" },
  { (  0 << 16) | (  0 << 8) | 238, "blue2" },
  { (  0 << 16) | (  0 << 8) | 205, "blue3" },
  { (  0 << 16) | (  0 << 8) | 139, "blue4" },
  { (138 << 16) | ( 43 << 8) | 226, "BlueViolet" },
  { (  0 << 16) | (  0 << 8) | 255, "blue" },
  { (255 << 16) | ( 64 << 8) |  64, "brown1" },
  { (238 << 16) | ( 59 << 8) |  59, "brown2" },
  { (205 << 16) | ( 51 << 8) |  51, "brown3" },
  { (139 << 16) | ( 35 << 8) |  35, "brown4" },
  { (165 << 16) | ( 42 << 8) |  42, "brown" },
  { (255 << 16) | (211 << 8) | 155, "burlywood1" },
  { (238 << 16) | (197 << 8) | 145, "burlywood2" },
  { (205 << 16) | (170 << 8) | 125, "burlywood3" },
  { (139 << 16) | (115 << 8) |  85, "burlywood4" },
  { (222 << 16) | (184 << 8) | 135, "burlywood" },
  { ( 95 << 16) | (158 << 8) | 160, "cadet blue" },
  { (152 << 16) | (245 << 8) | 255, "CadetBlue1" },
  { (142 << 16) | (229 << 8) | 238, "CadetBlue2" },
  { (122 << 16) | (197 << 8) | 205, "CadetBlue3" },
  { ( 83 << 16) | (134 << 8) | 139, "CadetBlue4" },
  { ( 95 << 16) | (158 << 8) | 160, "CadetBlue" },
  { (127 << 16) | (255 << 8) |   0, "chartreuse1" },
  { (118 << 16) | (238 << 8) |   0, "chartreuse2" },
  { (102 << 16) | (205 << 8) |   0, "chartreuse3" },
  { ( 69 << 16) | (139 << 8) |   0, "chartreuse4" },
  { (127 << 16) | (255 << 8) |   0, "chartreuse" },
  { (255 << 16) | (127 << 8) |  36, "chocolate1" },
  { (238 << 16) | (118 << 8) |  33, "chocolate2" },
  { (205 << 16) | (102 << 8) |  29, "chocolate3" },
  { (139 << 16) | ( 69 << 8) |  19, "chocolate4" },
  { (210 << 16) | (105 << 8) |  30, "chocolate" },
  { (255 << 16) | (114 << 8) |  86, "coral1" },
  { (238 << 16) | (106 << 8) |  80, "coral2" },
  { (205 << 16) | ( 91 << 8) |  69, "coral3" },
  { (139 << 16) | ( 62 << 8) |  47, "coral4" },
  { (255 << 16) | (127 << 8) |  80, "coral" },
  { (100 << 16) | (149 << 8) | 237, "cornflower blue" },
  { (100 << 16) | (149 << 8) | 237, "CornflowerBlue" },
  { (255 << 16) | (248 << 8) | 220, "cornsilk1" },
  { (238 << 16) | (232 << 8) | 205, "cornsilk2" },
  { (205 << 16) | (200 << 8) | 177, "cornsilk3" },
  { (139 << 16) | (136 << 8) | 120, "cornsilk4" },
  { (255 << 16) | (248 << 8) | 220, "cornsilk" },
  { (  0 << 16) | (255 << 8) | 255, "cyan1" },
  { (  0 << 16) | (238 << 8) | 238, "cyan2" },
  { (  0 << 16) | (205 << 8) | 205, "cyan3" },
  { (  0 << 16) | (139 << 8) | 139, "cyan4" },
  { (  0 << 16) | (255 << 8) | 255, "cyan" },
  { (0   << 16) | (  0 << 8) | 139, "dark blue" },
  { (0   << 16) | (139 << 8) | 139, "dark cyan" },
  { (184 << 16) | (134 << 8) |  11, "dark goldenrod" },
  { (169 << 16) | (169 << 8) | 169, "dark gray" },
  { (  0 << 16) | (100 << 8) |   0, "dark green" },
  { (169 << 16) | (169 << 8) | 169, "dark grey" },
  { (189 << 16) | (183 << 8) | 107, "dark khaki" },
  { (139 << 16) | (  0 << 8) | 139, "dark magenta" },
  { ( 85 << 16) | (107 << 8) |  47, "dark olive green" },
  { (255 << 16) | (140 << 8) |   0, "dark orange" },
  { (153 << 16) | ( 50 << 8) | 204, "dark orchid" },
  { (139 << 16) | (  0 << 8) |   0, "dark red" },
  { (233 << 16) | (150 << 8) | 122, "dark salmon" },
  { (143 << 16) | (188 << 8) | 143, "dark sea green" },
  { ( 72 << 16) | ( 61 << 8) | 139, "dark slate blue" },
  { ( 47 << 16) | ( 79 << 8) |  79, "dark slate gray" },
  { ( 47 << 16) | ( 79 << 8) |  79, "dark slate grey" },
  { (  0 << 16) | (206 << 8) | 209, "dark turquoise" },
  { (148 << 16) | (  0 << 8) | 211, "dark violet" },
  { (0   << 16) | (  0 << 8) | 139, "DarkBlue" },
  { (0   << 16) | (139 << 8) | 139, "DarkCyan" },
  { (255 << 16) | (185 << 8) |  15, "DarkGoldenrod1" },
  { (238 << 16) | (173 << 8) |  14, "DarkGoldenrod2" },
  { (205 << 16) | (149 << 8) |  12, "DarkGoldenrod3" },
  { (139 << 16) | (101 << 8) |   8, "DarkGoldenrod4" },
  { (184 << 16) | (134 << 8) |  11, "DarkGoldenrod" },
  { (169 << 16) | (169 << 8) | 169, "DarkGray" },
  { (  0 << 16) | (100 << 8) |   0, "DarkGreen" },
  { (169 << 16) | (169 << 8) | 169, "DarkGrey" },
  { (189 << 16) | (183 << 8) | 107, "DarkKhaki" },
  { (139 << 16) | (  0 << 8) | 139, "DarkMagenta" },
  { (202 << 16) | (255 << 8) | 112, "DarkOliveGreen1" },
  { (188 << 16) | (238 << 8) | 104, "DarkOliveGreen2" },
  { (162 << 16) | (205 << 8) |  90, "DarkOliveGreen3" },
  { (110 << 16) | (139 << 8) |  61, "DarkOliveGreen4" },
  { ( 85 << 16) | (107 << 8) |  47, "DarkOliveGreen" },
  { (255 << 16) | (127 << 8) |   0, "DarkOrange1" },
  { (238 << 16) | (118 << 8) |   0, "DarkOrange2" },
  { (205 << 16) | (102 << 8) |   0, "DarkOrange3" },
  { (139 << 16) | ( 69 << 8) |   0, "DarkOrange4" },
  { (255 << 16) | (140 << 8) |   0, "DarkOrange" },
  { (191 << 16) | ( 62 << 8) | 255, "DarkOrchid1" },
  { (178 << 16) | ( 58 << 8) | 238, "DarkOrchid2" },
  { (154 << 16) | ( 50 << 8) | 205, "DarkOrchid3" },
  { (104 << 16) | ( 34 << 8) | 139, "DarkOrchid4" },
  { (153 << 16) | ( 50 << 8) | 204, "DarkOrchid" },
  { (139 << 16) | (  0 << 8) |   0, "DarkRed" },
  { (233 << 16) | (150 << 8) | 122, "DarkSalmon" },
  { (193 << 16) | (255 << 8) | 193, "DarkSeaGreen1" },
  { (180 << 16) | (238 << 8) | 180, "DarkSeaGreen2" },
  { (155 << 16) | (205 << 8) | 155, "DarkSeaGreen3" },
  { (105 << 16) | (139 << 8) | 105, "DarkSeaGreen4" },
  { (143 << 16) | (188 << 8) | 143, "DarkSeaGreen" },
  { ( 72 << 16) | ( 61 << 8) | 139, "DarkSlateBlue" },
  { (151 << 16) | (255 << 8) | 255, "DarkSlateGray1" },
  { (141 << 16) | (238 << 8) | 238, "DarkSlateGray2" },
  { (121 << 16) | (205 << 8) | 205, "DarkSlateGray3" },
  { ( 82 << 16) | (139 << 8) | 139, "DarkSlateGray4" },
  { ( 47 << 16) | ( 79 << 8) |  79, "DarkSlateGray" },
  { ( 47 << 16) | ( 79 << 8) |  79, "DarkSlateGrey" },
  { (  0 << 16) | (206 << 8) | 209, "DarkTurquoise" },
  { (148 << 16) | (  0 << 8) | 211, "DarkViolet" },
  { (255 << 16) | ( 20 << 8) | 147, "deep pink" },
  { (  0 << 16) | (191 << 8) | 255, "deep sky blue" },
  { (255 << 16) | ( 20 << 8) | 147, "DeepPink1" },
  { (238 << 16) | ( 18 << 8) | 137, "DeepPink2" },
  { (205 << 16) | ( 16 << 8) | 118, "DeepPink3" },
  { (139 << 16) | ( 10 << 8) |  80, "DeepPink4" },
  { (255 << 16) | ( 20 << 8) | 147, "DeepPink" },
  { (  0 << 16) | (191 << 8) | 255, "DeepSkyBlue1" },
  { (  0 << 16) | (178 << 8) | 238, "DeepSkyBlue2" },
  { (  0 << 16) | (154 << 8) | 205, "DeepSkyBlue3" },
  { (  0 << 16) | (104 << 8) | 139, "DeepSkyBlue4" },
  { (  0 << 16) | (191 << 8) | 255, "DeepSkyBlue" },
  { (105 << 16) | (105 << 8) | 105, "dim gray" },
  { (105 << 16) | (105 << 8) | 105, "dim grey" },
  { (105 << 16) | (105 << 8) | 105, "DimGray" },
  { (105 << 16) | (105 << 8) | 105, "DimGrey" },
  { ( 30 << 16) | (144 << 8) | 255, "dodger blue" },
  { ( 30 << 16) | (144 << 8) | 255, "DodgerBlue1" },
  { ( 28 << 16) | (134 << 8) | 238, "DodgerBlue2" },
  { ( 24 << 16) | (116 << 8) | 205, "DodgerBlue3" },
  { ( 16 << 16) | ( 78 << 8) | 139, "DodgerBlue4" },
  { ( 30 << 16) | (144 << 8) | 255, "DodgerBlue" },
  { (255 << 16) | ( 48 << 8) |  48, "firebrick1" },
  { (238 << 16) | ( 44 << 8) |  44, "firebrick2" },
  { (205 << 16) | ( 38 << 8) |  38, "firebrick3" },
  { (139 << 16) | ( 26 << 8) |  26, "firebrick4" },
  { (178 << 16) | ( 34 << 8) |  34, "firebrick" },
  { (255 << 16) | (250 << 8) | 240, "floral white" },
  { (255 << 16) | (250 << 8) | 240, "FloralWhite" },
  { ( 34 << 16) | (139 << 8) |  34, "forest green" },
  { ( 34 << 16) | (139 << 8) |  34, "ForestGreen" },
  { (220 << 16) | (220 << 8) | 220, "gainsboro" },
  { (248 << 16) | (248 << 8) | 255, "ghost white" },
  { (248 << 16) | (248 << 8) | 255, "GhostWhite" },
  { (255 << 16) | (215 << 8) |   0, "gold" },
  { (255 << 16) | (215 << 8) |   0, "gold1" },
  { (238 << 16) | (201 << 8) |   0, "gold2" },
  { (205 << 16) | (173 << 8) |   0, "gold3" },
  { (139 << 16) | (117 << 8) |   0, "gold4" },
  { (255 << 16) | (193 << 8) |  37, "goldenrod1" },
  { (238 << 16) | (180 << 8) |  34, "goldenrod2" },
  { (205 << 16) | (155 << 8) |  29, "goldenrod3" },
  { (139 << 16) | (105 << 8) |  20, "goldenrod4" },
  { (218 << 16) | (165 << 8) |  32, "goldenrod" },
  { (  0 << 16) | (  0 << 8) |   0, "gray0" },
  { (  3 << 16) | (  3 << 8) |   3, "gray1" },
  { (  5 << 16) | (  5 << 8) |   5, "gray2" },
  { (  8 << 16) | (  8 << 8) |   8, "gray3" },
  { ( 10 << 16) | ( 10 << 8) |  10, "gray4" },
  { ( 13 << 16) | ( 13 << 8) |  13, "gray5" },
  { ( 15 << 16) | ( 15 << 8) |  15, "gray6" },
  { ( 18 << 16) | ( 18 << 8) |  18, "gray7" },
  { ( 20 << 16) | ( 20 << 8) |  20, "gray8" },
  { ( 23 << 16) | ( 23 << 8) |  23, "gray9" },
  { ( 26 << 16) | ( 26 << 8) |  26, "gray10" },
  { ( 28 << 16) | ( 28 << 8) |  28, "gray11" },
  { ( 31 << 16) | ( 31 << 8) |  31, "gray12" },
  { ( 33 << 16) | ( 33 << 8) |  33, "gray13" },
  { ( 36 << 16) | ( 36 << 8) |  36, "gray14" },
  { ( 38 << 16) | ( 38 << 8) |  38, "gray15" },
  { ( 41 << 16) | ( 41 << 8) |  41, "gray16" },
  { ( 43 << 16) | ( 43 << 8) |  43, "gray17" },
  { ( 46 << 16) | ( 46 << 8) |  46, "gray18" },
  { ( 48 << 16) | ( 48 << 8) |  48, "gray19" },
  { ( 51 << 16) | ( 51 << 8) |  51, "gray20" },
  { ( 54 << 16) | ( 54 << 8) |  54, "gray21" },
  { ( 56 << 16) | ( 56 << 8) |  56, "gray22" },
  { ( 59 << 16) | ( 59 << 8) |  59, "gray23" },
  { ( 61 << 16) | ( 61 << 8) |  61, "gray24" },
  { ( 64 << 16) | ( 64 << 8) |  64, "gray25" },
  { ( 66 << 16) | ( 66 << 8) |  66, "gray26" },
  { ( 69 << 16) | ( 69 << 8) |  69, "gray27" },
  { ( 71 << 16) | ( 71 << 8) |  71, "gray28" },
  { ( 74 << 16) | ( 74 << 8) |  74, "gray29" },
  { ( 77 << 16) | ( 77 << 8) |  77, "gray30" },
  { ( 79 << 16) | ( 79 << 8) |  79, "gray31" },
  { ( 82 << 16) | ( 82 << 8) |  82, "gray32" },
  { ( 84 << 16) | ( 84 << 8) |  84, "gray33" },
  { ( 87 << 16) | ( 87 << 8) |  87, "gray34" },
  { ( 89 << 16) | ( 89 << 8) |  89, "gray35" },
  { ( 92 << 16) | ( 92 << 8) |  92, "gray36" },
  { ( 94 << 16) | ( 94 << 8) |  94, "gray37" },
  { ( 97 << 16) | ( 97 << 8) |  97, "gray38" },
  { ( 99 << 16) | ( 99 << 8) |  99, "gray39" },
  { (102 << 16) | (102 << 8) | 102, "gray40" },
  { (105 << 16) | (105 << 8) | 105, "gray41" },
  { (107 << 16) | (107 << 8) | 107, "gray42" },
  { (110 << 16) | (110 << 8) | 110, "gray43" },
  { (112 << 16) | (112 << 8) | 112, "gray44" },
  { (115 << 16) | (115 << 8) | 115, "gray45" },
  { (117 << 16) | (117 << 8) | 117, "gray46" },
  { (120 << 16) | (120 << 8) | 120, "gray47" },
  { (122 << 16) | (122 << 8) | 122, "gray48" },
  { (125 << 16) | (125 << 8) | 125, "gray49" },
  { (127 << 16) | (127 << 8) | 127, "gray50" },
  { (130 << 16) | (130 << 8) | 130, "gray51" },
  { (133 << 16) | (133 << 8) | 133, "gray52" },
  { (135 << 16) | (135 << 8) | 135, "gray53" },
  { (138 << 16) | (138 << 8) | 138, "gray54" },
  { (140 << 16) | (140 << 8) | 140, "gray55" },
  { (143 << 16) | (143 << 8) | 143, "gray56" },
  { (145 << 16) | (145 << 8) | 145, "gray57" },
  { (148 << 16) | (148 << 8) | 148, "gray58" },
  { (150 << 16) | (150 << 8) | 150, "gray59" },
  { (153 << 16) | (153 << 8) | 153, "gray60" },
  { (156 << 16) | (156 << 8) | 156, "gray61" },
  { (158 << 16) | (158 << 8) | 158, "gray62" },
  { (161 << 16) | (161 << 8) | 161, "gray63" },
  { (163 << 16) | (163 << 8) | 163, "gray64" },
  { (166 << 16) | (166 << 8) | 166, "gray65" },
  { (168 << 16) | (168 << 8) | 168, "gray66" },
  { (171 << 16) | (171 << 8) | 171, "gray67" },
  { (173 << 16) | (173 << 8) | 173, "gray68" },
  { (176 << 16) | (176 << 8) | 176, "gray69" },
  { (179 << 16) | (179 << 8) | 179, "gray70" },
  { (181 << 16) | (181 << 8) | 181, "gray71" },
  { (184 << 16) | (184 << 8) | 184, "gray72" },
  { (186 << 16) | (186 << 8) | 186, "gray73" },
  { (189 << 16) | (189 << 8) | 189, "gray74" },
  { (191 << 16) | (191 << 8) | 191, "gray75" },
  { (194 << 16) | (194 << 8) | 194, "gray76" },
  { (196 << 16) | (196 << 8) | 196, "gray77" },
  { (199 << 16) | (199 << 8) | 199, "gray78" },
  { (201 << 16) | (201 << 8) | 201, "gray79" },
  { (204 << 16) | (204 << 8) | 204, "gray80" },
  { (207 << 16) | (207 << 8) | 207, "gray81" },
  { (209 << 16) | (209 << 8) | 209, "gray82" },
  { (212 << 16) | (212 << 8) | 212, "gray83" },
  { (214 << 16) | (214 << 8) | 214, "gray84" },
  { (217 << 16) | (217 << 8) | 217, "gray85" },
  { (219 << 16) | (219 << 8) | 219, "gray86" },
  { (222 << 16) | (222 << 8) | 222, "gray87" },
  { (224 << 16) | (224 << 8) | 224, "gray88" },
  { (227 << 16) | (227 << 8) | 227, "gray89" },
  { (229 << 16) | (229 << 8) | 229, "gray90" },
  { (232 << 16) | (232 << 8) | 232, "gray91" },
  { (235 << 16) | (235 << 8) | 235, "gray92" },
  { (237 << 16) | (237 << 8) | 237, "gray93" },
  { (240 << 16) | (240 << 8) | 240, "gray94" },
  { (242 << 16) | (242 << 8) | 242, "gray95" },
  { (245 << 16) | (245 << 8) | 245, "gray96" },
  { (247 << 16) | (247 << 8) | 247, "gray97" },
  { (250 << 16) | (250 << 8) | 250, "gray98" },
  { (252 << 16) | (252 << 8) | 252, "gray99" },
  { (255 << 16) | (255 << 8) | 255, "gray100" },
  { (190 << 16) | (190 << 8) | 190, "gray" },
  { (173 << 16) | (255 << 8) |  47, "green yellow" },
  { (  0 << 16) | (255 << 8) |   0, "green1" },
  { (  0 << 16) | (238 << 8) |   0, "green2" },
  { (  0 << 16) | (205 << 8) |   0, "green3" },
  { (  0 << 16) | (139 << 8) |   0, "green4" },
  { (173 << 16) | (255 << 8) |  47, "GreenYellow" },
  { (  0 << 16) | (255 << 8) |   0, "green" },
  { (240 << 16) | (255 << 8) | 240, "honeydew1" },
  { (224 << 16) | (238 << 8) | 224, "honeydew2" },
  { (193 << 16) | (205 << 8) | 193, "honeydew3" },
  { (131 << 16) | (139 << 8) | 131, "honeydew4" },
  { (240 << 16) | (255 << 8) | 240, "honeydew" },
  { (255 << 16) | (105 << 8) | 180, "hot pink" },
  { (255 << 16) | (110 << 8) | 180, "HotPink1" },
  { (238 << 16) | (106 << 8) | 167, "HotPink2" },
  { (205 << 16) | ( 96 << 8) | 144, "HotPink3" },
  { (139 << 16) | ( 58 << 8) |  98, "HotPink4" },
  { (255 << 16) | (105 << 8) | 180, "HotPink" },
  { (205 << 16) | ( 92 << 8) |  92, "indian red" },
  { (255 << 16) | (106 << 8) | 106, "IndianRed1" },
  { (238 << 16) | ( 99 << 8) |  99, "IndianRed2" },
  { (205 << 16) | ( 85 << 8) |  85, "IndianRed3" },
  { (139 << 16) | ( 58 << 8) |  58, "IndianRed4" },
  { (205 << 16) | ( 92 << 8) |  92, "IndianRed" },
  { (255 << 16) | (255 << 8) | 240, "ivory1" },
  { (238 << 16) | (238 << 8) | 224, "ivory2" },
  { (205 << 16) | (205 << 8) | 193, "ivory3" },
  { (139 << 16) | (139 << 8) | 131, "ivory4" },
  { (255 << 16) | (255 << 8) | 240, "ivory" },
  { (255 << 16) | (246 << 8) | 143, "khaki1" },
  { (238 << 16) | (230 << 8) | 133, "khaki2" },
  { (205 << 16) | (198 << 8) | 115, "khaki3" },
  { (139 << 16) | (134 << 8) |  78, "khaki4" },
  { (240 << 16) | (230 << 8) | 140, "khaki" },
  { (255 << 16) | (240 << 8) | 245, "lavender blush" },
  { (255 << 16) | (240 << 8) | 245, "LavenderBlush1" },
  { (238 << 16) | (224 << 8) | 229, "LavenderBlush2" },
  { (205 << 16) | (193 << 8) | 197, "LavenderBlush3" },
  { (139 << 16) | (131 << 8) | 134, "LavenderBlush4" },
  { (255 << 16) | (240 << 8) | 245, "LavenderBlush" },
  { (230 << 16) | (230 << 8) | 250, "lavender" },
  { (124 << 16) | (252 << 8) |   0, "lawn green" },
  { (124 << 16) | (252 << 8) |   0, "LawnGreen" },
  { (255 << 16) | (250 << 8) | 205, "lemon chiffon" },
  { (255 << 16) | (250 << 8) | 205, "LemonChiffon1" },
  { (238 << 16) | (233 << 8) | 191, "LemonChiffon2" },
  { (205 << 16) | (201 << 8) | 165, "LemonChiffon3" },
  { (139 << 16) | (137 << 8) | 112, "LemonChiffon4" },
  { (255 << 16) | (250 << 8) | 205, "LemonChiffon" },
  { (173 << 16) | (216 << 8) | 230, "light blue" },
  { (240 << 16) | (128 << 8) | 128, "light coral" },
  { (224 << 16) | (255 << 8) | 255, "light cyan" },
  { (250 << 16) | (250 << 8) | 210, "light goldenrod yellow" },
  { (238 << 16) | (221 << 8) | 130, "light goldenrod" },
  { (211 << 16) | (211 << 8) | 211, "light gray" },
  { (144 << 16) | (238 << 8) | 144, "light green" },
  { (211 << 16) | (211 << 8) | 211, "light grey" },
  { (255 << 16) | (182 << 8) | 193, "light pink" },
  { (255 << 16) | (160 << 8) | 122, "light salmon" },
  { ( 32 << 16) | (178 << 8) | 170, "light sea green" },
  { (135 << 16) | (206 << 8) | 250, "light sky blue" },
  { (132 << 16) | (112 << 8) | 255, "light slate blue" },
  { (119 << 16) | (136 << 8) | 153, "light slate gray" },
  { (119 << 16) | (136 << 8) | 153, "light slate grey" },
  { (176 << 16) | (196 << 8) | 222, "light steel blue" },
  { (255 << 16) | (255 << 8) | 224, "light yellow" },
  { (191 << 16) | (239 << 8) | 255, "LightBlue1" },
  { (178 << 16) | (223 << 8) | 238, "LightBlue2" },
  { (154 << 16) | (192 << 8) | 205, "LightBlue3" },
  { (104 << 16) | (131 << 8) | 139, "LightBlue4" },
  { (173 << 16) | (216 << 8) | 230, "LightBlue" },
  { (240 << 16) | (128 << 8) | 128, "LightCoral" },
  { (224 << 16) | (255 << 8) | 255, "LightCyan1" },
  { (209 << 16) | (238 << 8) | 238, "LightCyan2" },
  { (180 << 16) | (205 << 8) | 205, "LightCyan3" },
  { (122 << 16) | (139 << 8) | 139, "LightCyan4" },
  { (224 << 16) | (255 << 8) | 255, "LightCyan" },
  { (255 << 16) | (236 << 8) | 139, "LightGoldenrod1" },
  { (238 << 16) | (220 << 8) | 130, "LightGoldenrod2" },
  { (205 << 16) | (190 << 8) | 112, "LightGoldenrod3" },
  { (139 << 16) | (129 << 8) |  76, "LightGoldenrod4" },
  { (250 << 16) | (250 << 8) | 210, "LightGoldenrodYellow" },
  { (238 << 16) | (221 << 8) | 130, "LightGoldenrod" },
  { (211 << 16) | (211 << 8) | 211, "LightGray" },
  { (144 << 16) | (238 << 8) | 144, "LightGreen" },
  { (211 << 16) | (211 << 8) | 211, "LightGrey" },
  { (255 << 16) | (174 << 8) | 185, "LightPink1" },
  { (238 << 16) | (162 << 8) | 173, "LightPink2" },
  { (205 << 16) | (140 << 8) | 149, "LightPink3" },
  { (139 << 16) | ( 95 << 8) | 101, "LightPink4" },
  { (255 << 16) | (182 << 8) | 193, "LightPink" },
  { (255 << 16) | (160 << 8) | 122, "LightSalmon1" },
  { (238 << 16) | (149 << 8) | 114, "LightSalmon2" },
  { (205 << 16) | (129 << 8) |  98, "LightSalmon3" },
  { (139 << 16) | ( 87 << 8) |  66, "LightSalmon4" },
  { (255 << 16) | (160 << 8) | 122, "LightSalmon" },
  { ( 32 << 16) | (178 << 8) | 170, "LightSeaGreen" },
  { (176 << 16) | (226 << 8) | 255, "LightSkyBlue1" },
  { (164 << 16) | (211 << 8) | 238, "LightSkyBlue2" },
  { (141 << 16) | (182 << 8) | 205, "LightSkyBlue3" },
  { ( 96 << 16) | (123 << 8) | 139, "LightSkyBlue4" },
  { (135 << 16) | (206 << 8) | 250, "LightSkyBlue" },
  { (132 << 16) | (112 << 8) | 255, "LightSlateBlue" },
  { (119 << 16) | (136 << 8) | 153, "LightSlateGray" },
  { (119 << 16) | (136 << 8) | 153, "LightSlateGrey" },
  { (202 << 16) | (225 << 8) | 255, "LightSteelBlue1" },
  { (188 << 16) | (210 << 8) | 238, "LightSteelBlue2" },
  { (162 << 16) | (181 << 8) | 205, "LightSteelBlue3" },
  { (110 << 16) | (123 << 8) | 139, "LightSteelBlue4" },
  { (176 << 16) | (196 << 8) | 222, "LightSteelBlue" },
  { (255 << 16) | (255 << 8) | 224, "LightYellow1" },
  { (238 << 16) | (238 << 8) | 209, "LightYellow2" },
  { (205 << 16) | (205 << 8) | 180, "LightYellow3" },
  { (139 << 16) | (139 << 8) | 122, "LightYellow4" },
  { (255 << 16) | (255 << 8) | 224, "LightYellow" },
  { ( 50 << 16) | (205 << 8) |  50, "lime green" },
  { ( 50 << 16) | (205 << 8) |  50, "LimeGreen" },
  { (250 << 16) | (240 << 8) | 230, "linen" },
  { (255 << 16) | (  0 << 8) | 255, "magenta1" },
  { (238 << 16) | (  0 << 8) | 238, "magenta2" },
  { (205 << 16) | (  0 << 8) | 205, "magenta3" },
  { (139 << 16) | (  0 << 8) | 139, "magenta4" },
  { (255 << 16) | (  0 << 8) | 255, "magenta" },
  { (255 << 16) | ( 52 << 8) | 179, "maroon1" },
  { (238 << 16) | ( 48 << 8) | 167, "maroon2" },
  { (205 << 16) | ( 41 << 8) | 144, "maroon3" },
  { (139 << 16) | ( 28 << 8) |  98, "maroon4" },
  { (176 << 16) | ( 48 << 8) |  96, "maroon" },
  { (102 << 16) | (205 << 8) | 170, "medium aquamarine" },
  { (  0 << 16) | (  0 << 8) | 205, "medium blue" },
  { (186 << 16) | ( 85 << 8) | 211, "medium orchid" },
  { (147 << 16) | (112 << 8) | 219, "medium purple" },
  { ( 60 << 16) | (179 << 8) | 113, "medium sea green" },
  { (123 << 16) | (104 << 8) | 238, "medium slate blue" },
  { (  0 << 16) | (250 << 8) | 154, "medium spring green" },
  { ( 72 << 16) | (209 << 8) | 204, "medium turquoise" },
  { (199 << 16) | ( 21 << 8) | 133, "medium violet red" },
  { (102 << 16) | (205 << 8) | 170, "MediumAquamarine" },
  { (  0 << 16) | (  0 << 8) | 205, "MediumBlue" },
  { (224 << 16) | (102 << 8) | 255, "MediumOrchid1" },
  { (209 << 16) | ( 95 << 8) | 238, "MediumOrchid2" },
  { (180 << 16) | ( 82 << 8) | 205, "MediumOrchid3" },
  { (122 << 16) | ( 55 << 8) | 139, "MediumOrchid4" },
  { (186 << 16) | ( 85 << 8) | 211, "MediumOrchid" },
  { (171 << 16) | (130 << 8) | 255, "MediumPurple1" },
  { (159 << 16) | (121 << 8) | 238, "MediumPurple2" },
  { (137 << 16) | (104 << 8) | 205, "MediumPurple3" },
  { ( 93 << 16) | ( 71 << 8) | 139, "MediumPurple4" },
  { (147 << 16) | (112 << 8) | 219, "MediumPurple" },
  { ( 60 << 16) | (179 << 8) | 113, "MediumSeaGreen" },
  { (123 << 16) | (104 << 8) | 238, "MediumSlateBlue" },
  { (  0 << 16) | (250 << 8) | 154, "MediumSpringGreen" },
  { ( 72 << 16) | (209 << 8) | 204, "MediumTurquoise" },
  { (199 << 16) | ( 21 << 8) | 133, "MediumVioletRed" },
  { ( 25 << 16) | ( 25 << 8) | 112, "midnight blue" },
  { ( 25 << 16) | ( 25 << 8) | 112, "MidnightBlue" },
  { (245 << 16) | (255 << 8) | 250, "mint cream" },
  { (245 << 16) | (255 << 8) | 250, "MintCream" },
  { (255 << 16) | (228 << 8) | 225, "misty rose" },
  { (255 << 16) | (228 << 8) | 225, "MistyRose1" },
  { (238 << 16) | (213 << 8) | 210, "MistyRose2" },
  { (205 << 16) | (183 << 8) | 181, "MistyRose3" },
  { (139 << 16) | (125 << 8) | 123, "MistyRose4" },
  { (255 << 16) | (228 << 8) | 225, "MistyRose" },
  { (255 << 16) | (228 << 8) | 181, "moccasin" },
  { (255 << 16) | (222 << 8) | 173, "navajo white" },
  { (255 << 16) | (222 << 8) | 173, "NavajoWhite1" },
  { (238 << 16) | (207 << 8) | 161, "NavajoWhite2" },
  { (205 << 16) | (179 << 8) | 139, "NavajoWhite3" },
  { (139 << 16) | (121 << 8) |  94, "NavajoWhite4" },
  { (255 << 16) | (222 << 8) | 173, "NavajoWhite" },
  { (  0 << 16) | (  0 << 8) | 128, "navy blue" },
  { (  0 << 16) | (  0 << 8) | 128, "NavyBlue" },
  { (  0 << 16) | (  0 << 8) | 128, "navy" },
  { (253 << 16) | (245 << 8) | 230, "old lace" },
  { (253 << 16) | (245 << 8) | 230, "OldLace" },
  { (107 << 16) | (142 << 8) |  35, "olive drab" },
  { (192 << 16) | (255 << 8) |  62, "OliveDrab1" },
  { (179 << 16) | (238 << 8) |  58, "OliveDrab2" },
  { (154 << 16) | (205 << 8) |  50, "OliveDrab3" },
  { (105 << 16) | (139 << 8) |  34, "OliveDrab4" },
  { (107 << 16) | (142 << 8) |  35, "OliveDrab" },
  { (255 << 16) | ( 69 << 8) |   0, "orange red" },
  { (255 << 16) | (165 << 8) |   0, "orange1" },
  { (238 << 16) | (154 << 8) |   0, "orange2" },
  { (205 << 16) | (133 << 8) |   0, "orange3" },
  { (139 << 16) | ( 90 << 8) |   0, "orange4" },
  { (255 << 16) | ( 69 << 8) |   0, "OrangeRed1" },
  { (238 << 16) | ( 64 << 8) |   0, "OrangeRed2" },
  { (205 << 16) | ( 55 << 8) |   0, "OrangeRed3" },
  { (139 << 16) | ( 37 << 8) |   0, "OrangeRed4" },
  { (255 << 16) | ( 69 << 8) |   0, "OrangeRed" },
  { (255 << 16) | (165 << 8) |   0, "orange" },
  { (255 << 16) | (131 << 8) | 250, "orchid1" },
  { (238 << 16) | (122 << 8) | 233, "orchid2" },
  { (205 << 16) | (105 << 8) | 201, "orchid3" },
  { (139 << 16) | ( 71 << 8) | 137, "orchid4" },
  { (218 << 16) | (112 << 8) | 214, "orchid" },
  { (238 << 16) | (232 << 8) | 170, "pale goldenrod" },
  { (152 << 16) | (251 << 8) | 152, "pale green" },
  { (175 << 16) | (238 << 8) | 238, "pale turquoise" },
  { (219 << 16) | (112 << 8) | 147, "pale violet red" },
  { (238 << 16) | (232 << 8) | 170, "PaleGoldenrod" },
  { (154 << 16) | (255 << 8) | 154, "PaleGreen1" },
  { (144 << 16) | (238 << 8) | 144, "PaleGreen2" },
  { (124 << 16) | (205 << 8) | 124, "PaleGreen3" },
  { ( 84 << 16) | (139 << 8) |  84, "PaleGreen4" },
  { (152 << 16) | (251 << 8) | 152, "PaleGreen" },
  { (187 << 16) | (255 << 8) | 255, "PaleTurquoise1" },
  { (174 << 16) | (238 << 8) | 238, "PaleTurquoise2" },
  { (150 << 16) | (205 << 8) | 205, "PaleTurquoise3" },
  { (102 << 16) | (139 << 8) | 139, "PaleTurquoise4" },
  { (175 << 16) | (238 << 8) | 238, "PaleTurquoise" },
  { (255 << 16) | (130 << 8) | 171, "PaleVioletRed1" },
  { (238 << 16) | (121 << 8) | 159, "PaleVioletRed2" },
  { (205 << 16) | (104 << 8) | 137, "PaleVioletRed3" },
  { (139 << 16) | ( 71 << 8) |  93, "PaleVioletRed4" },
  { (219 << 16) | (112 << 8) | 147, "PaleVioletRed" },
  { (255 << 16) | (239 << 8) | 213, "papaya whip" },
  { (255 << 16) | (239 << 8) | 213, "PapayaWhip" },
  { (255 << 16) | (218 << 8) | 185, "peach puff" },
  { (255 << 16) | (218 << 8) | 185, "PeachPuff1" },
  { (238 << 16) | (203 << 8) | 173, "PeachPuff2" },
  { (205 << 16) | (175 << 8) | 149, "PeachPuff3" },
  { (139 << 16) | (119 << 8) | 101, "PeachPuff4" },
  { (255 << 16) | (218 << 8) | 185, "PeachPuff" },
  { (205 << 16) | (133 << 8) |  63, "peru" },
  { (255 << 16) | (181 << 8) | 197, "pink1" },
  { (238 << 16) | (169 << 8) | 184, "pink2" },
  { (205 << 16) | (145 << 8) | 158, "pink3" },
  { (139 << 16) | ( 99 << 8) | 108, "pink4" },
  { (255 << 16) | (192 << 8) | 203, "pink" },
  { (255 << 16) | (187 << 8) | 255, "plum1" },
  { (238 << 16) | (174 << 8) | 238, "plum2" },
  { (205 << 16) | (150 << 8) | 205, "plum3" },
  { (139 << 16) | (102 << 8) | 139, "plum4" },
  { (221 << 16) | (160 << 8) | 221, "plum" },
  { (176 << 16) | (224 << 8) | 230, "powder blue" },
  { (176 << 16) | (224 << 8) | 230, "PowderBlue" },
  { (128 << 16) | (128 << 8) |   0, "PureDarkBrown" },
  { (  0 << 16) | (128 << 8) | 128, "PureDarkCyan" },
  { (  0 << 16) | (128 << 8) |   0, "PureDarkGreen" },
  { (128 << 16) | (128 << 8) | 128, "PureDarkGrey" },
  { (128 << 16) | (  0 << 8) | 128, "PureDarkMagenta" },
  { (128 << 16) | (  0 << 8) |   0, "PureDarkRed" },
  { (155 << 16) | ( 48 << 8) | 255, "purple1" },
  { (145 << 16) | ( 44 << 8) | 238, "purple2" },
  { (125 << 16) | ( 38 << 8) | 205, "purple3" },
  { ( 85 << 16) | ( 26 << 8) | 139, "purple4" },
  { (160 << 16) | ( 32 << 8) | 240, "purple" },
  { (255 << 16) | (  0 << 8) |   0, "red1" },
  { (238 << 16) | (  0 << 8) |   0, "red2" },
  { (205 << 16) | (  0 << 8) |   0, "red3" },
  { (139 << 16) | (  0 << 8) |   0, "red4" },
  { (255 << 16) | (  0 << 8) |   0, "red" },
  { (188 << 16) | (143 << 8) | 143, "rosy brown" },
  { (255 << 16) | (193 << 8) | 193, "RosyBrown1" },
  { (238 << 16) | (180 << 8) | 180, "RosyBrown2" },
  { (205 << 16) | (155 << 8) | 155, "RosyBrown3" },
  { (139 << 16) | (105 << 8) | 105, "RosyBrown4" },
  { (188 << 16) | (143 << 8) | 143, "RosyBrown" },
  { ( 65 << 16) | (105 << 8) | 225, "royal blue" },
  { ( 72 << 16) | (118 << 8) | 255, "RoyalBlue1" },
  { ( 67 << 16) | (110 << 8) | 238, "RoyalBlue2" },
  { ( 58 << 16) | ( 95 << 8) | 205, "RoyalBlue3" },
  { ( 39 << 16) | ( 64 << 8) | 139, "RoyalBlue4" },
  { ( 65 << 16) | (105 << 8) | 225, "RoyalBlue" },
  { (139 << 16) | ( 69 << 8) |  19, "saddle brown" },
  { (139 << 16) | ( 69 << 8) |  19, "SaddleBrown" },
  { (255 << 16) | (140 << 8) | 105, "salmon1" },
  { (238 << 16) | (130 << 8) |  98, "salmon2" },
  { (205 << 16) | (112 << 8) |  84, "salmon3" },
  { (139 << 16) | ( 76 << 8) |  57, "salmon4" },
  { (250 << 16) | (128 << 8) | 114, "salmon" },
  { (244 << 16) | (164 << 8) |  96, "sandy brown" },
  { (244 << 16) | (164 << 8) |  96, "SandyBrown" },
  { ( 46 << 16) | (139 << 8) |  87, "sea green" },
  { ( 84 << 16) | (255 << 8) | 159, "SeaGreen1" },
  { ( 78 << 16) | (238 << 8) | 148, "SeaGreen2" },
  { ( 67 << 16) | (205 << 8) | 128, "SeaGreen3" },
  { ( 46 << 16) | (139 << 8) |  87, "SeaGreen4" },
  { ( 46 << 16) | (139 << 8) |  87, "SeaGreen" },
  { (255 << 16) | (245 << 8) | 238, "seashell1" },
  { (238 << 16) | (229 << 8) | 222, "seashell2" },
  { (205 << 16) | (197 << 8) | 191, "seashell3" },
  { (139 << 16) | (134 << 8) | 130, "seashell4" },
  { (255 << 16) | (245 << 8) | 238, "seashell" },
  { (255 << 16) | (130 << 8) |  71, "sienna1" },
  { (238 << 16) | (121 << 8) |  66, "sienna2" },
  { (205 << 16) | (104 << 8) |  57, "sienna3" },
  { (139 << 16) | ( 71 << 8) |  38, "sienna4" },
  { (160 << 16) | ( 82 << 8) |  45, "sienna" },
  { (135 << 16) | (206 << 8) | 235, "sky blue" },
  { (135 << 16) | (206 << 8) | 255, "SkyBlue1" },
  { (126 << 16) | (192 << 8) | 238, "SkyBlue2" },
  { (108 << 16) | (166 << 8) | 205, "SkyBlue3" },
  { ( 74 << 16) | (112 << 8) | 139, "SkyBlue4" },
  { (135 << 16) | (206 << 8) | 235, "SkyBlue" },
  { (106 << 16) | ( 90 << 8) | 205, "slate blue" },
  { (112 << 16) | (128 << 8) | 144, "slate gray" },
  { (112 << 16) | (128 << 8) | 144, "slate grey" },
  { (131 << 16) | (111 << 8) | 255, "SlateBlue1" },
  { (122 << 16) | (103 << 8) | 238, "SlateBlue2" },
  { (105 << 16) | ( 89 << 8) | 205, "SlateBlue3" },
  { ( 71 << 16) | ( 60 << 8) | 139, "SlateBlue4" },
  { (106 << 16) | ( 90 << 8) | 205, "SlateBlue" },
  { (198 << 16) | (226 << 8) | 255, "SlateGray1" },
  { (185 << 16) | (211 << 8) | 238, "SlateGray2" },
  { (159 << 16) | (182 << 8) | 205, "SlateGray3" },
  { (108 << 16) | (123 << 8) | 139, "SlateGray4" },
  { (112 << 16) | (128 << 8) | 144, "SlateGray" },
  { (112 << 16) | (128 << 8) | 144, "SlateGrey" },
  { (255 << 16) | (250 << 8) | 250, "snow1" },
  { (238 << 16) | (233 << 8) | 233, "snow2" },
  { (205 << 16) | (201 << 8) | 201, "snow3" },
  { (139 << 16) | (137 << 8) | 137, "snow4" },
  { (255 << 16) | (250 << 8) | 250, "snow" },
  { (  0 << 16) | (255 << 8) | 127, "spring green" },
  { (  0 << 16) | (255 << 8) | 127, "SpringGreen1" },
  { (  0 << 16) | (238 << 8) | 118, "SpringGreen2" },
  { (  0 << 16) | (205 << 8) | 102, "SpringGreen3" },
  { (  0 << 16) | (139 << 8) |  69, "SpringGreen4" },
  { (  0 << 16) | (255 << 8) | 127, "SpringGreen" },
  { ( 70 << 16) | (130 << 8) | 180, "steel blue" },
  { ( 99 << 16) | (184 << 8) | 255, "SteelBlue1" },
  { ( 92 << 16) | (172 << 8) | 238, "SteelBlue2" },
  { ( 79 << 16) | (148 << 8) | 205, "SteelBlue3" },
  { ( 54 << 16) | (100 << 8) | 139, "SteelBlue4" },
  { ( 70 << 16) | (130 << 8) | 180, "SteelBlue" },
  { (255 << 16) | (165 << 8) |  79, "tan1" },
  { (238 << 16) | (154 << 8) |  73, "tan2" },
  { (205 << 16) | (133 << 8) |  63, "tan3" },
  { (139 << 16) | ( 90 << 8) |  43, "tan4" },
  { (210 << 16) | (180 << 8) | 140, "tan" },
  { (255 << 16) | (225 << 8) | 255, "thistle1" },
  { (238 << 16) | (210 << 8) | 238, "thistle2" },
  { (205 << 16) | (181 << 8) | 205, "thistle3" },
  { (139 << 16) | (123 << 8) | 139, "thistle4" },
  { (216 << 16) | (191 << 8) | 216, "thistle" },
  { (255 << 16) | ( 99 << 8) |  71, "tomato1" },
  { (238 << 16) | ( 92 << 8) |  66, "tomato2" },
  { (205 << 16) | ( 79 << 8) |  57, "tomato3" },
  { (139 << 16) | ( 54 << 8) |  38, "tomato4" },
  { (255 << 16) | ( 99 << 8) |  71, "tomato" },
  { (  0 << 16) | (245 << 8) | 255, "turquoise1" },
  { (  0 << 16) | (229 << 8) | 238, "turquoise2" },
  { (  0 << 16) | (197 << 8) | 205, "turquoise3" },
  { (  0 << 16) | (134 << 8) | 139, "turquoise4" },
  { ( 64 << 16) | (224 << 8) | 208, "turquoise" },
  { (208 << 16) | ( 32 << 8) | 144, "violet red" },
  { (255 << 16) | ( 62 << 8) | 150, "VioletRed1" },
  { (238 << 16) | ( 58 << 8) | 140, "VioletRed2" },
  { (205 << 16) | ( 50 << 8) | 120, "VioletRed3" },
  { (139 << 16) | ( 34 << 8) |  82, "VioletRed4" },
  { (208 << 16) | ( 32 << 8) | 144, "VioletRed" },
  { (238 << 16) | (130 << 8) | 238, "violet" },
  { (255 << 16) | (231 << 8) | 186, "wheat1" },
  { (238 << 16) | (216 << 8) | 174, "wheat2" },
  { (205 << 16) | (186 << 8) | 150, "wheat3" },
  { (139 << 16) | (126 << 8) | 102, "wheat4" },
  { (245 << 16) | (222 << 8) | 179, "wheat" },
  { (245 << 16) | (245 << 8) | 245, "white smoke" },
  { (245 << 16) | (245 << 8) | 245, "WhiteSmoke" },
  { (255 << 16) | (255 << 8) | 255, "white" },
  { (154 << 16) | (205 << 8) |  50, "yellow green" },
  { (255 << 16) | (255 << 8) |   0, "yellow1" },
  { (238 << 16) | (238 << 8) |   0, "yellow2" },
  { (205 << 16) | (205 << 8) |   0, "yellow3" },
  { (139 << 16) | (139 << 8) |   0, "yellow4" },
  { (154 << 16) | (205 << 8) |  50, "YellowGreen" },
  { (255 << 16) | (255 << 8) |   0, "yellow" },
  { 0, NULL }
};
