/*
 * Copyright (c) 2009, Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * Written by Adam Moody <moody20@llnl.gov>.
 * LLNL-CODE-411039.
 * All rights reserved.
 * This file is part of The Scalable Checkpoint / Restart (SCR) library.
 * For details, see https://sourceforge.net/projects/scalablecr/
 * Please also read this file: LICENSE.TXT.
*/

#ifndef AXL_ASYNC_DATAWARP_H
#define AXL_ASYNC_DATAWARP_H

#include "kvtree.h"
#include "fu_filemap.h"

#ifdef HAVE_DATAWARP
#include "datawarp.h"
#endif

int axl_flush_async_start_datawarp(fu_filemap* map, int id);
int axl_flush_async_complete_datawarp(fu_filemap* map, inot id);
int axl_flush_async_stop_datawarp(fu_filemap* map, int id);
int axl_flush_async_test_datawarp(fu_filemap* map, int id);
int axl_flush_async_wait_datawarp(fu_filemap* map, int id);
int axl_flush_async_init_datawarp();
int axl_flush_async_finalize_datawarp();

#endif //AXL_ASYNC_DATAWARP_H
