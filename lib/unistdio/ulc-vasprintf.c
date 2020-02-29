/* Formatted output to strings.
   Copyright (C) 1999, 2002, 2006-2007, 2009-2018 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or
   modify it under the terms of either:

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at your
       option) any later version.

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at your
       option) any later version.

   or both in parallel, as here.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include "unistdio.h"

#include <errno.h>
#include <limits.h>
#include <stdlib.h>

#define VASPRINTF ulc_vasprintf
#define VASNPRINTF ulc_vasnprintf
#define FCHAR_T char
#define DCHAR_T char
#include "u-vasprintf.h"
