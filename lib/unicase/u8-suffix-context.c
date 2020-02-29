/* Case-mapping context of suffix UTF-8 string.
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

#include "unictype.h"
#include "unistr.h"
#include "caseprop.h"
#include "context.h"

#define FUNC1 u8_casing_suffix_context
#define FUNC2 u8_casing_suffixes_context
#define UNIT uint8_t
#define U_MBTOUC_UNSAFE u8_mbtouc_unsafe
#include "u-suffix-context.h"
