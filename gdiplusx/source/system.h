#DEFINE LF_FACESIZE 32
#DEFINE LANG_NEUTRAL 0x00

#DEFINE TRUE	1
#DEFINE FALSE	0

#DEFINE EMPTY_GUID 0h00000000+0h0000+0h0000+0h0000+0h000000000000
#DEFINE SIZEOF_GUID 16

#DEFINE ENUM_BASECLASS  "Empty"

#DEFINE EMPTY_VFPARRAY		.F.

#DEFINE USE_MEMBERDATA

#DEFINE GMEM_FIXED          0x0000
#DEFINE GMEM_MOVEABLE       0x0002
#DEFINE GMEM_ZEROINIT       0x0040
#DEFINE GHND                (GMEM_MOVEABLE + GMEM_ZEROINIT)
#DEFINE GPTR                (GMEM_FIXED + GMEM_ZEROINIT)
#DEFINE SRCCOPY				0x00CC0020
