/****************************************************************************
*  Copyright 2021 Gorgon Meducer (Email:embedded_zhuoran@hotmail.com)       *
*                                                                           *
*  Licensed under the Apache License, Version 2.0 (the "License");          *
*  you may not use this file except in compliance with the License.         *
*  You may obtain a copy of the License at                                  *
*                                                                           *
*     http://www.apache.org/licenses/LICENSE-2.0                            *
*                                                                           *
*  Unless required by applicable law or agreed to in writing, software      *
*  distributed under the License is distributed on an "AS IS" BASIS,        *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
*  See the License for the specific language governing permissions and      *
*  limitations under the License.                                           *
*                                                                           *
****************************************************************************/

/*============================ INCLUDES ======================================*/
#include "app_cfg.h"
#include "platform.h"
#include "cmsis_compiler.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>

#if defined(__clang__)
#   pragma clang diagnostic ignored "-Wcompound-token-split-by-macro"
#endif

/*============================ MACROS ========================================*/
/*============================ MACROFIED FUNCTIONS ===========================*/
/*============================ TYPES =========================================*/
/*============================ GLOBAL VARIABLES ==============================*/
/*============================ LOCAL VARIABLES ===============================*/
/*============================ PROTOTYPES ====================================*/
/*============================ IMPLEMENTATION ================================*/
/*
-funroll-loops​ -finline-functions​ --param max-inline-insns-auto=200​ -falign-functions=4​ -falign-jumps=4​ -falign-loops=4​ -fomit-frame-pointer​ -funroll-all-loops​ -finline-limit=10000​ -ftree-dominator-opts​ -fno-if-conversion2​ -fselective-scheduling​ -fno-code-hoisting​ -freorder-blocks-and-partition
 */
int main(void)
{
    __cycleof__() {
        printf("Hello World! \r\n");
    }

#ifdef __PERF_COUNTER_COREMARK__
    coremark_main();
#endif

    while(1) {

    }
    
}
