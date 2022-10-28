/************************************************************************
 * NASA Docket No. GSC-18,719-1, and identified as “core Flight System: Bootes”
 *
 * Copyright (c) 2020 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * \file
 *
 * Purpose:
 *   Header file for internal data to the Generic RTEMS BSP
 */

#ifndef _GENERIC_RTEMS_BSP_INTERNAL_H_
#define _GENERIC_RTEMS_BSP_INTERNAL_H_

/*
** OSAL includes
*/
#include "osapi.h"
#include "bsp-impl.h"

#include <rtems.h>

/*
 * By default put the shell at the same priority
 * as the utility task which handles OS_printf()
 */
#define RTEMS_SHELL_PRIORITY     OS_UTILITYTASK_PRIORITY

/*
** BSP types
*/
typedef struct
{
    rtems_id AccessMutex;
} OS_BSP_GenericRtemsGlobalData_t;

/*
 * Global Data object
 */
extern OS_BSP_GenericRtemsGlobalData_t OS_BSP_GenericRtemsGlobal;

#endif /* _GENERIC_RTEMS_BSP_INTERNAL_H_ */
