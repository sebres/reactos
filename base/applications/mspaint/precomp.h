#ifndef _MSPAINT_H
#define _MSPAINT_H

#ifdef NDEBUG
    #undef DBG
    #undef _DEBUG
#endif

#include <stdarg.h>

#include <windef.h>
#include <winbase.h>
#include <winuser.h>
#include <wingdi.h>
#include <tchar.h>
#include <atlbase.h>
#include <atlcom.h>
#include <atlimage.h>
#include <atlpath.h>
#include <atlstr.h>
#include <atlwin.h>
#include <atltypes.h>
#include <windowsx.h>
#include <commdlg.h>
#include <commctrl.h>
#include <stdlib.h>
#include <shellapi.h>
#include <htmlhelp.h>
#ifdef _DEBUG
    #define _CRTDBG_MAP_ALLOC
    #include <crtdbg.h>
#endif

#define NDEBUG
#include <debug.h>

#define WM_TOOLSMODELTOOLCHANGED         (WM_APP + 0)
#define WM_TOOLSMODELSETTINGSCHANGED     (WM_APP + 1)
#define WM_TOOLSMODELZOOMCHANGED         (WM_APP + 2)
#define WM_PALETTEMODELCOLORCHANGED      (WM_APP + 3)
#define WM_PALETTEMODELPALETTECHANGED    (WM_APP + 4)
#define WM_IMAGEMODELDIMENSIONSCHANGED   (WM_APP + 5)
#define WM_IMAGEMODELIMAGECHANGED        (WM_APP + 6)
#define WM_SELECTIONMODELREFRESHNEEDED   (WM_APP + 7)

enum CANVAS_HITTEST // hit
{
    HIT_NONE = 0, // Nothing hit or outside
    HIT_UPPER_LEFT,
    HIT_UPPER_CENTER,
    HIT_UPPER_RIGHT,
    HIT_MIDDLE_LEFT,
    HIT_MIDDLE_RIGHT,
    HIT_LOWER_LEFT,
    HIT_LOWER_CENTER,
    HIT_LOWER_RIGHT,
    HIT_BORDER,
    HIT_INNER,
};

#include "resource.h"
#include "drawing.h"
#include "dib.h"
#include "fullscreen.h"
#include "globalvar.h"
#include "history.h"
#include "imgarea.h"
#include "miniature.h"
#include "palette.h"
#include "palettemodel.h"
#include "registry.h"
#include "selection.h"
#include "selectionmodel.h"
#include "sizebox.h"
#include "canvas.h"
#include "textedit.h"
#include "toolbox.h"
#include "toolsettings.h"
#include "toolsmodel.h"
#include "winproc.h"
#include "dialogs.h"
#include "common.h"

#endif /* _MSPAINT_H */
