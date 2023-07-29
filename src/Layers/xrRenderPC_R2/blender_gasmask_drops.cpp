#include "stdafx.h"

#include "blender_gasmask_drops.h"

CBlender_gasmask_drops::CBlender_gasmask_drops() { description.CLS = 0; }

CBlender_gasmask_drops::~CBlender_gasmask_drops()
{
}

void CBlender_gasmask_drops::Compile(CBlender_Compile& C)
{
	IBlender::Compile(C);

	C.r_Pass("null", "gasmask_drops", FALSE, FALSE, FALSE);
	C.r_Sampler_clf("s_image", r2_RT_generic0);
	C.r_End();
}
