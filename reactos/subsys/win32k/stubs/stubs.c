/*
 * Stubs for unimplemented WIN32K.SYS exports
 */

#include <windows.h>
#include <ddk/ntddk.h>

#define STUB(x) void x(void) { DbgPrint("WIN32K: Stub for %s\n", #x); }

STUB(BRUSHOBJ_pvAllocRbrush)
STUB(BRUSHOBJ_pvGetRbrush)
STUB(BRUSHOBJ_ulGetBrushColor)
STUB(CLIPOBJ_bEnum)
STUB(CLIPOBJ_cEnumStart)
STUB(CLIPOBJ_ppoGetPath)
STUB(EngAcquireSemaphore)
STUB(EngAllocMem)
STUB(EngAllocUserMem)
STUB(EngAssociateSurface)
STUB(EngBitBlt)
STUB(EngCheckAbort)
STUB(EngComputeGlyphSet)
STUB(EngCopyBits)
STUB(EngCreateBitmap)
STUB(EngCreateClip)
STUB(EngCreateDeviceBitmap)
STUB(EngCreateDeviceSurface)
STUB(EngCreateDriverObj)
STUB(EngCreateEvent)
STUB(EngCreatePalette)
STUB(EngCreatePath)
STUB(EngCreateSemaphore)
STUB(EngCreateWnd)
STUB(EngDebugBreak)
STUB(EngDebugPrint)
STUB(EngDeleteClip)
STUB(EngDeleteDriverObj)
STUB(EngDeleteEvent)
STUB(EngDeletePalette)
STUB(EngDeletePath)
STUB(EngDeleteSemaphore)
STUB(EngDeleteSurface)
STUB(EngDeleteWnd)
STUB(EngDeviceIoControl)
STUB(EngEnumForms)
STUB(EngEraseSurface)
STUB(EngFillPath)
STUB(EngFindImageProcAddress)
STUB(EngFindResource)
STUB(EngFreeMem)
STUB(EngFreeModule)
STUB(EngFreeUserMem)
STUB(EngGetCurrentCodePage)
STUB(EngGetDriverName)
STUB(EngGetFileChangeTime)
STUB(EngGetFilePath)
STUB(EngGetForm)
STUB(EngGetLastError)
STUB(EngGetPrinter)
STUB(EngGetPrinterData)
STUB(EngGetPrinterDataFileName)
STUB(EngGetProcessHandle)
STUB(EngGetType1FontList)
STUB(EngLineTo)
STUB(EngLoadImage)
STUB(EngLoadModule)
STUB(EngLoadModuleForWrite)
STUB(EngLockDriverObj)
STUB(EngLockSurface)
STUB(EngMapEvent)
STUB(EngMapFontFile)
STUB(EngMapModule)
STUB(EngMarkBandingSurface)
STUB(EngMovePointer)
STUB(EngMulDiv)
STUB(EngMultiByteToUnicodeN)
STUB(EngMultiByteToWideChar)
STUB(EngPaint)
STUB(EngProbeForRead)
STUB(EngProbeForReadAndWrite)
STUB(EngQueryLocalTime)
STUB(EngQueryPalette)
STUB(EngQueryPerformanceCounter)
STUB(EngQueryPerformanceFrequency)
STUB(EngReleaseSemaphore)
STUB(EngRestoreFloatingPointState)
STUB(EngSaveFloatingPointState)
STUB(EngSecureMem)
STUB(EngSetEvent)
STUB(EngSetLastError)
STUB(EngSetPointerShape)
STUB(EngSetPointerTag)
STUB(EngSetPrinterData)
STUB(EngSort)
STUB(EngStretchBlt)
STUB(EngStrokeAndFillPath)
STUB(EngStrokePath)
STUB(EngTextOut)
STUB(EngUnicodeToMultiByteN)
STUB(EngUnloadImage)
STUB(EngUnlockDriverObj)
STUB(EngUnlockSurface)
STUB(EngUnmapEvent)
STUB(EngUnmapFontFile)
STUB(EngUnsecureMem)
STUB(EngWaitForSingleObject)
STUB(EngWideCharToMultiByte)
STUB(EngWritePrinter)
STUB(FLOATOBJ_Add)
STUB(FLOATOBJ_AddFloat)
STUB(FLOATOBJ_AddFloatObj)
STUB(FLOATOBJ_AddLong)
STUB(FLOATOBJ_Div)
STUB(FLOATOBJ_DivFloat)
STUB(FLOATOBJ_DivFloatObj)
STUB(FLOATOBJ_DivLong)
STUB(FLOATOBJ_Equal)
STUB(FLOATOBJ_EqualLong)
STUB(FLOATOBJ_GetFloat)
STUB(FLOATOBJ_GetLong)
STUB(FLOATOBJ_GreaterThan)
STUB(FLOATOBJ_GreaterThanLong)
STUB(FLOATOBJ_LessThan)
STUB(FLOATOBJ_LessThanLong)
STUB(FLOATOBJ_Mul)
STUB(FLOATOBJ_MulFloat)
STUB(FLOATOBJ_MulFloatObj)
STUB(FLOATOBJ_MulLong)
STUB(FLOATOBJ_Neg)
STUB(FLOATOBJ_SetFloat)
STUB(FLOATOBJ_SetLong)
STUB(FLOATOBJ_Sub)
STUB(FLOATOBJ_SubFloat)
STUB(FLOATOBJ_SubFloatObj)
STUB(FLOATOBJ_SubLong)
STUB(FONTOBJ_cGetAllGlyphHandles)
STUB(FONTOBJ_cGetGlyphs)
STUB(FONTOBJ_pifi)
STUB(FONTOBJ_pvTrueTypeFontFile)
STUB(FONTOBJ_pxoGetXform)
STUB(FONTOBJ_vGetInfo)
STUB(HT_ComputeRGBGammaTable)
STUB(HT_Get8BPPFormatPalette)
STUB(PALOBJ_cGetColors)
STUB(PATHOBJ_bCloseFigure)
STUB(PATHOBJ_bEnum)
STUB(PATHOBJ_bEnumClipLines)
STUB(PATHOBJ_bMoveTo)
STUB(PATHOBJ_bPolyBezierTo)
STUB(PATHOBJ_bPolyLineTo)
STUB(PATHOBJ_vEnumStart)
STUB(PATHOBJ_vEnumStartClipLines)
STUB(PATHOBJ_vGetBounds)
//STUB(RtlAnsiCharToUnicodeChar)
//STUB(RtlMultiByteToUnicodeN)
STUB(RtlRaiseException)
//STUB(RtlUnicodeToMultiByteN)
//STUB(RtlUnicodeToMultiByteSize)
STUB(RtlUnwind)
STUB(RtlUpcaseUnicodeChar)
STUB(RtlUpcaseUnicodeToMultiByteN)
STUB(STROBJ_bEnum)
STUB(STROBJ_dwGetCodePage)
STUB(STROBJ_vEnumStart)
STUB(WNDOBJ_bEnum)
STUB(WNDOBJ_cEnumStart)
STUB(WNDOBJ_vSetConsumer)
STUB(XFORMOBJ_bApplyXform)
STUB(XFORMOBJ_iGetFloatObjXform)
STUB(XFORMOBJ_iGetXform)
STUB(XLATEOBJ_cGetPalette)
STUB(XLATEOBJ_iXlate)
STUB(XLATEOBJ_piVector)
STUB(_abnormal_termination)
STUB(_except_handler2)
STUB(_global_unwind2)
STUB(_local_unwind2)

