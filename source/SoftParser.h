/* =====================================================================
 *
 * The MIT License (MIT)
 * Copyright 2018-2019 NXP
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * File Name : SoftParser.h
 *
 * ===================================================================*/

#ifndef SP_H
#define SP_H

#include "TaskDef.h"
#include "SPIR.h"
#include "SPCreateCode.h"
extern "C" {
#include "spa/sp.h"
}


void softparser (CTaskDef *task, std::string currentPath, bool genIntermCode);
unsigned int assemble   (char* asmResult, unsigned char* binary, sp_label_list_t **labels, bool debug, int spBase);
void createExtensions (CCodeSection *codeSect, std::vector<CExtension> &extns, CCode code, sp_label_list_t *labels);

#endif // SP_H
