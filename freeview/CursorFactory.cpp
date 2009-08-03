/**
 * @file  CursorFactory.cpp
 * @brief Cursor creator/loader for 2D view.
 *
 */
/*
 * Original Author: Ruopeng Wang
 * CVS Revision Info:
 *    $Author: rpwang $
 *    $Date: 2009/08/03 20:29:27 $
 *    $Revision: 1.7 $
 *
 * Copyright (C) 2008-2009,
 * The General Hospital Corporation (Boston, MA).
 * All rights reserved.
 *
 * Distribution, usage and copying of this software is covered under the
 * terms found in the License Agreement file named 'COPYING' found in the
 * FreeSurfer source code root directory, and duplicated here:
 * https://surfer.nmr.mgh.harvard.edu/fswiki/FreeSurferOpenSourceLicense
 *
 * General inquiries: freesurfer@nmr.mgh.harvard.edu
 * Bug reports: analysis-bugs@nmr.mgh.harvard.edu
 *
 */

#include <wx/xrc/xmlres.h>
#include <wx/image.h>
#include <wx/mstream.h>
#include "CursorFactory.h"

#include "res/CursorFill_png.h"
#include "res/CursorPencil_png.h"
#include "res/CursorPolyline_png.h"
#include "res/CursorPan_png.h"
#include "res/CursorZoom_png.h"
#include "res/CursorColorPicker_png.h"
#include "res/CursorMeasure_png.h"
#include "res/CursorGrab_png.h"

wxCursor CursorFactory::CursorPencil  = wxCursor();
wxCursor CursorFactory::CursorFill   = wxCursor();
wxCursor CursorFactory::CursorPolyline = wxCursor();
wxCursor CursorFactory::CursorPan   = wxCursor();
wxCursor CursorFactory::CursorZoom  = wxCursor();
wxCursor CursorFactory::CursorColorPicker  = wxCursor();
wxCursor CursorFactory::CursorGrab  = wxCursor();
wxCursor CursorFactory::CursorMeasure  = wxCursor();

CursorFactory::CursorFactory()
{
  Initialize();
}

void CursorFactory::Initialize()
{
  wxMemoryInputStream s1( CursorPencil_png, CursorPencil_png_LEN );
  wxImage img( s1, wxBITMAP_TYPE_PNG );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_X, 0 );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_Y, 0 );
  CursorPencil = wxCursor( img );

  wxMemoryInputStream s2( CursorFill_png, CursorFill_png_LEN );
  img = wxImage( s2, wxBITMAP_TYPE_PNG );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_X, 2 );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_Y, 23 );
  CursorFill = wxCursor( img );

  wxMemoryInputStream s3( CursorPolyline_png, CursorPolyline_png_LEN );
  img = wxImage( s3, wxBITMAP_TYPE_PNG );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_X, 0 );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_Y, 0 );
  CursorPolyline = wxCursor( img );

  wxMemoryInputStream s4( CursorPan_png, CursorPan_png_LEN );
  img = wxImage( s4, wxBITMAP_TYPE_PNG );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_X, 11 );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_Y, 11 );
  CursorPan = wxCursor( img );

  wxMemoryInputStream s5( CursorZoom_png, CursorZoom_png_LEN );
  img = wxImage( s5, wxBITMAP_TYPE_PNG );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_X, 11 );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_Y, 11 );
  CursorZoom = wxCursor( img );
  
  wxMemoryInputStream s6( CursorColorPicker_png, CursorColorPicker_png_LEN );
  img = wxImage( s6, wxBITMAP_TYPE_PNG );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_X, 0 );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_Y, 23 );
  CursorColorPicker = wxCursor( img );
  
  wxMemoryInputStream s7( CursorMeasure_png, CursorMeasure_png_LEN );
  img = wxImage( s7, wxBITMAP_TYPE_PNG );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_X, 0 );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_Y, 0 );
  CursorMeasure = wxCursor( img );
  
  wxMemoryInputStream s8( CursorGrab_png, CursorGrab_png_LEN );
  img = wxImage( s8, wxBITMAP_TYPE_PNG );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_X, 11 );
  img.SetOption( wxIMAGE_OPTION_CUR_HOTSPOT_Y, 11 );
  CursorGrab = wxCursor( img );
}
