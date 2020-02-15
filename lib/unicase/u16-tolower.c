/* Lowercase mapping for UTF-16 strings (locale dependent).
   Copyright (C) 2009-2018 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2009.

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
#include "unicase.h"

#include <stddef.h>

#include "unicasemap.h"
#include "unicase/special-casing.h"

uint16_t *
u16_tolower (const uint16_t *s, size_t n, const char *iso639_language,
             uninorm_t nf,
             uint16_t *resultbuf, size_t *lengthp)
{
  return u16_casemap (s, n,
                      unicase_empty_prefix_context, unicase_empty_suffix_context,
                      iso639_language,
                      uc_tolower, offsetof (struct special_casing_rule, lower[0]),
                      nf,
                      resultbuf, lengthp);
}
