/*
 * Copyright (C) 2019-2020 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   1. Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in
 *      the documentation and/or other materials provided with the
 *      distribution.
 *   3. Neither the name of Intel Corporation nor the names of its
 *      contributors may be used to endorse or promote products derived
 *      from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/*
 * Copyright (c) 2010 SURFnet bv
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*****************************************************************************
 OSAttributes.h

 Specifies vendor defined attributes for use in internal object store files
 *****************************************************************************/

#ifndef _SOFTHSM_V2_OSATTRIBUTES_H
#define _SOFTHSM_V2_OSATTRIBUTES_H

#include "config.h"
#include "cryptoki.h"

// Define vendor tag; presumably the one below is reasonably unique
#define CKA_VENDOR_SOFTHSM	(CKA_VENDOR_DEFINED + 0x5348) // 'SH'

// Vendor defined attribute types for the token file
#define CKA_OS_TOKENLABEL	(CKA_VENDOR_SOFTHSM + 1)
#define CKA_OS_TOKENSERIAL	(CKA_VENDOR_SOFTHSM + 2)
#define CKA_OS_TOKENFLAGS	(CKA_VENDOR_SOFTHSM + 3)
#define CKA_OS_SOPIN		(CKA_VENDOR_SOFTHSM + 4)
#define CKA_OS_USERPIN		(CKA_VENDOR_SOFTHSM + 5)

#ifdef SGXHSM
// Crypto API Tollkit custome attribute for checking if this key used for wrapping
//TODO: Find an appropriate place
#define CKA_USED_FOR_WRAPPING       (CKA_VENDOR_SOFTHSM + 0x06)

// We need to identify the key pair to prevent decrypting a wrapped key for asymmetric key pair
#define CKA_ASYMMETRIC_PAIR_ID  (CKA_VENDOR_SOFTHSM + 0x07)
#endif

#ifdef DCAP_SUPPORT
// Internal SGXHSM's custom attribute for key handle used for quote generation
#define CKA_USED_FOR_QUOTE_GENERATION  (CKA_VENDOR_SOFTHSM + 0x08)
#endif

#endif // !_SOFTHSM_V2_OSATTRIBUTES_H

