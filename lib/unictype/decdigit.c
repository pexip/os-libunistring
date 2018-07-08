/* Values of decimal digit Unicode characters.
   Copyright (C) 2002, 2006, 2009-2018 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2002.

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
#include "unictype.h"

/* Define u_decdigit table.  */
#include "decdigit.h"

int
uc_decimal_value (ucs4_t uc)
{
  unsigned int index1 = uc >> decdigit_header_0;
  if (index1 < decdigit_header_1)
    {
      int lookup1 = u_decdigit.level1[index1];
      if (lookup1 >= 0)
        {
          unsigned int index2 = (uc >> decdigit_header_2) & decdigit_header_3;
          int lookup2 = u_decdigit.level2[lookup1 + index2];
          if (lookup2 >= 0)
            {
              unsigned int index3 = (uc & decdigit_header_4) + lookup2;
              /* level3 contains 4-bit values.  */
              unsigned int lookup3 =
                (u_decdigit.level3[index3>>1] >> ((index3 % 2) * 4)) & 0x0f;

              return (int) lookup3 - 1;
            }
        }
    }
  return -1;
}
