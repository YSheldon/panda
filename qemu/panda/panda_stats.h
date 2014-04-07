/* PANDABEGINCOMMENT
 *
 * Authors:
 *  Tim Leek               tleek@ll.mit.edu
 *  Ryan Whelan            rwhelan@ll.mit.edu
 *  Joshua Hodosh          josh.hodosh@ll.mit.edu
 *  Michael Zhivich        mzhivich@ll.mit.edu
 *  Brendan Dolan-Gavitt   brendandg@gatech.edu
 *
 * This work is licensed under the terms of the GNU GPL, version 2.
 * See the COPYING file in the top-level directory.
 *
PANDAENDCOMMENT */

#ifndef __PANDA_STATS_H__
#define __PANDA_STATS_H__

#include "cpu.h"
#include "taint_processor.h"

void memplot(Shad *shad);
void bufplot(CPUState *env, Shad *shad, uint64_t addr, int length);
void dump_taint_stats(Shad *shad);
void cleanup_taint_stats(void);

#endif
