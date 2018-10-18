/*
 * Copyright 2018 NXP
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *      * Redistributions of source code must retain the above copyright
 *        notice, this list of conditions and the following disclaimer.
 *      * Redistributions in binary form must reproduce the above copyright
 *        notice, this list of conditions and the following disclaimer in the
 *        documentation and/or other materials provided with the distribution.
 *      * Neither the name of NXP nor the
 *        names of its contributors may be used to endorse or promote products
 *        derived from this software without specific prior written permission.
 *
 *
 * ALTERNATIVELY, this software may be distributed under the terms of the
 * GNU General Public License ("GPL") as published by the Free Software
 * Foundation, either version 2 of that License or (at your option) any
 * later version.
 *
 * This software is provided by NXP "as is" and any
 * express or implied warranties, including, but not limited to, the implied
 * warranties of merchantability and fitness for a particular purpose are
 * disclaimed. In no event shall NXP be liable for any
 * direct, indirect, incidental, special, exemplary, or consequential damages
 * (including, but not limited to, procurement of substitute goods or services;
 * loss of use, data, or profits; or business interruption) however caused and
 * on any theory of liability, whether in contract, strict liability, or tort
 * (including negligence or otherwise) arising in any way out of the use of
 * this software, even if advised of the possibility of such damage.
 */

/**************************************************************************//**
 @File          types_ext.h

 @Description   General types Standard Definitions
*//***************************************************************************/

#ifndef __TYPES_EXT_H
#define __TYPES_EXT_H

#if defined(SPC_LINUX)
#include "types_linux.h"

#elif defined(SPC_LINUX_USD)
#include "types_linux_usd.h"

#elif defined(NCSW_VXWORKS)
#include "types_vxworks.h"

#elif defined(__GNUC__) && defined(__cplusplus)
#include "types_bb_gpp.h"

#elif defined(__GNUC__)
#include "types_bb_gcc.h"

#elif defined(__ghs__)
#include "types_ghs.h"

#else
#include "types_dflt.h"
#endif /* defined (__ROCOO__) */

#endif /* __TYPES_EXT_H */
