# psxdev-VRAMViewer
Playstation 1 Development - VRAM viewer for Orion_'s PsxLib : Navigate into Video RAM of the Playstation while running program.

![VRAMViewer](/doc/VRAMViewer.png)

## Dependencies
* Psy-Q official SDK (Sony) : http://www.psxdev.net/help/psyq_install.html
* PsxLib (Orion_) : http://onorisoft.free.fr/retro.htm?psx/tutorial/tuto.htm

## Installation
Copy VRAMViewer.c and VRAMViewer.h to Orion_'s PsxLib directory.  
Add `#include "VRAMViewer.h"` to System.h.  
Add `VRAMViewer(ot, *cpu, *gpu);` to System.c in System_DrawFrame() function.  
Insert `%lib%\VRAMViewer.c` to the ccpsx's arguments line located in the "comp.bat" file from PsxLib.

## Usage
Hold both L2 and R2 to pause the program and switch to VRAM view mode.  
While L2 and R2 pressed, use the arrow keys to move around VRAM.

## Features
* The moving speed can be increased by pressing circle button while moving.

## Changelog
**Version 1.0.0**
* Initial release.

Copyright (c) 2019 david4599