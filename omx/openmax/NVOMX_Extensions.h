/* Copyright (c) 2009-2013 NVIDIA CORPORATION.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject
 * to the following conditions:
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/**
 * @file
 * <b>NVIDIA Tegra: OpenMAX Extension Interface</b>
 * These definitions are missing from android frameworks
 * openmax headers but part of Nvidia/Khronos headers
 *
 */

#ifndef NVOMX_Extensions_h_
#define NVOMX_Extensions_h_

#include <OMX_Types.h>

/** The OMX_CSTRING type is intended to be used to pass const "C" type strings
    between the application and the core and component. The OMX_STRING type
    is a 32 bit pointer to a zero terminated string. The pointer is word
    aligned and the string is byte aligned.
 */
typedef const char* OMX_CSTRING;

/** Define the OMX IL version that corresponds to this set of header files.
 *  We also define a combined version that can be used to write or compare
 *  values of the 32bit nVersion field, assuming a little endian architecture */

#define OMX_VERSION_MAJOR 1
#define OMX_VERSION_MINOR 1
#define OMX_VERSION_REVISION 2
#define OMX_VERSION_STEP 0

#define OMX_VERSION ((OMX_VERSION_STEP<<24) | (OMX_VERSION_REVISION<<16) | (OMX_VERSION_MINOR<<8) | OMX_VERSION_MAJOR)

typedef enum NVOMX_COLOR_FORMATTYPE {

    OMX_COLOR_Format10bitYUV420SemiPlanar = 0x7FF00100,
    OMX_COLOR_Format10bitYUV420Planar     = 0x7FF00101,
    OMX_COLOR_Format8bitYUV444SemiPlanar  = 0x7FF00102,
    OMX_COLOR_Format8bitYUV444Planar      = 0x7FF00103,
    OMX_COLOR_Format10bitYUV444SemiPlanar = 0x7FF00104,
    OMX_COLOR_Format10bitYUV444Planar     = 0x7FF00105,
    OMX_COLOR_Format12bitYUV420SemiPlanar = 0x7FF00106,
    OMX_COLOR_Format12bitYUV420Planar     = 0x7FF00107,
} NVOMX_COLOR_FORMATTYPE;

/* Alternate or Golden Frame Flag: This flag is set when the buffer contains a golden or
 * alternate frame in case of vp8 encoder
 * @ingroup buf
 */
#define OMX_BUFFERFLAG_GOLDENORALTERNATEFRAME 0x00000100

#endif
/* File EOF */
