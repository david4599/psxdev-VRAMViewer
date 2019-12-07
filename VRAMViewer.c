/******************************
** Simple VRAM Viewer v1.0.0  **
**    by david4599 [2019]     **
 ******************************/

#include "VRAMViewer.h"

DISPENV *env;
int vram_viewer_x, vram_viewer_y, vram_viewer_speed, vram_viewer_spu_on;

// VRAMViewer(Current OT Pointer, CPU Usage int Pointer (can be NULL), GPU Usage int Pointer (can be NULL));
void VRAMViewer(GsOT*ot, int cputime, int gputime) {
	if (IsPadPress(Pad1L2) && IsPadPress(Pad1R2)){
		vram_viewer_x = 0;
		vram_viewer_y = 0;
		vram_viewer_speed = 2;
		
		SpuSetMute(SPU_ON);
		vram_viewer_spu_on = 0;
	}
	
	while (IsPadPress(Pad1L2) && IsPadPress(Pad1R2)){
		ot = System_InitFrame();
		SetDefDispEnv(env, vram_viewer_x, vram_viewer_y, VRAM_VIEWER_W, VRAM_VIEWER_H);
		PutDispEnv(env);
		
		
		if (IsPadPress(Pad1Circle)){
			vram_viewer_speed = 8;
		}
		else {
			vram_viewer_speed = 4;
		}
		
		
		if (IsPadPress(Pad1Left)){
			vram_viewer_x-=vram_viewer_speed;
			SetDefDispEnv(env, vram_viewer_x, vram_viewer_y, VRAM_VIEWER_W, VRAM_VIEWER_H);
			PutDispEnv(env);
		}
		if (IsPadPress(Pad1Right)){
			vram_viewer_x+=vram_viewer_speed;
			SetDefDispEnv(env, vram_viewer_x, vram_viewer_y, VRAM_VIEWER_W, VRAM_VIEWER_H);
			PutDispEnv(env);
		}
		if (IsPadPress(Pad1Up)){
			vram_viewer_y-=vram_viewer_speed;
			SetDefDispEnv(env, vram_viewer_x, vram_viewer_y, VRAM_VIEWER_W, VRAM_VIEWER_H);
			PutDispEnv(env);
		}
		if (IsPadPress(Pad1Down)){
			vram_viewer_y+=vram_viewer_speed;
			SetDefDispEnv(env, vram_viewer_x, vram_viewer_y, VRAM_VIEWER_W, VRAM_VIEWER_H);
			PutDispEnv(env);
		}
		
		DrawSync(0);
		VSync(0);
		GsDrawOt(ot);
	}
	
	if (!vram_viewer_spu_on){
		SpuSetMute(SPU_OFF);
		vram_viewer_spu_on = 1;
	}
}