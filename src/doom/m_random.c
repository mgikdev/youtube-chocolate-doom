//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2005-2014 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//	Random number LUT.
//

//
// M_Random
// Returns a 0-255 number
//

// doomcord: in order to make enemy behavior more consistent across saves,
// we replace the random lookup table with something that's actually stored
// in save files, i.e. leveltime.
#include "doomstat.h"

int	rndindex = 0;
int	prndindex = 0;

int P_Random (void)
{
    return 255 & leveltime;
}

int M_Random (void)
{
    return 255 & leveltime;
}

void M_ClearRandom (void)
{
    rndindex = prndindex = 0;
}

// inspired by the same routine in Eternity, thanks haleyjd
int P_SubRandom (void)
{
    int r = P_Random();
    return r - P_Random();
}
