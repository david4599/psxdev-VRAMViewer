/******************************
** Simple VRAM Viewer v1.0.0  **
**    by david4599 [2019]     **
 ******************************/

#ifndef _VRAMVIEWER_H_
#define _VRAMVIEWER_H_

#include "System.h"
#include <libspu.h>

#define VRAM_VIEWER_W 1024
#define VRAM_VIEWER_H 512

// VRAMViewer(Current OT Pointer, CPU Usage int Pointer (can be NULL), GPU Usage int Pointer (can be NULL));
void VRAMViewer(GsOT*ot, int cputime, int gputime);

#endif