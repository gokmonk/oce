set(TOOLKIT TKXDEDRAW)

set(TOOLKIT_MODULES
	XDEDRAW
)
set(TOOLKIT_DEPENDS
	TKCDF
	TKBRep
	TKXCAF
	TKernel
	TKIGES
	TKV3d
	TKMath
	TKNIS
	TKService
	TKXSBase
	TKG2d
	TKCAF
	TKDraw
	TKTopAlgo
	TKLCAF
	TKG3d
	TKSTEPBase
	TKSTEP
	TKMesh
	TKXSDRAW
	TKXDEIGES
	TKXDESTEP
	TKDCAF
	TKViewerTest
)

set(TOOLKIT_IS_PRIVATE TRUE)

include(../BuildToolkit.cmake)

