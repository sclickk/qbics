/*
 * Copyright (C) 2018  E. S. Villarreal
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __SOLVE__CPP__
#define __SOLVE__CPP__
#include <iostream>
#include <string>
using namespace std;

namespace cube {
    /*
     * Red should always be considered the front and white should
     * always be considered the top.
     */
    struct edges {
        const char* topFrontEdge;
        const char* topRightEdge;
        const char* topLeftEdge;
        const char* topBackEdge;
        const char* rightFrontEdge;
        const char* rightBackEdge;
        const char* leftFrontEdge;
        const char* leftBackEdge;
        const char* bottomFrontEdge;
        const char* bottomRightEdge;
        const char* bottomLeftEdge;
        const char* bottomBackEdge;
        
    };

    struct corners {
        const char* topFrontRightCorner;
        const char* topFrontLeftCorner;
        const char* topBackRightCorner;
        const char* topBackLeftCorner;
        const char* bottomFrontRightCorner;
        const char* bottomFrontLeftCorner;
        const char* bottomBackRightCorner;
        const char* bottomBackLeftCorner;
    };

    /*
     * Cubefiles should be converted into Cubestrings.
     * A solved cube will have a cubestring like this:
     *   WWWWWWWWWGGGRRRBBBOOOGGGRRRBBBOOOGGGRRRBBBOOOYYYYYYYYY
     */
};

class Solve {};

#endif /* __SOLVE__CPP__ */