// -*- C++ -*-
//
// generated by wxGlade 01d8bb798de7+ on Tue May 21 08:45:13 2013
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef WABOUT_WXG_H
#define WABOUT_WXG_H

#include <wx/wx.h>
#include <wx/image.h>
#include "wx/intl.h"

#ifndef APP_CATALOG
#define APP_CATALOG "app"  // replace with the appropriate catalog name
#endif


// begin wxGlade: ::dependencies
#include <wx/hyperlink.h>
// end wxGlade

// begin wxGlade: ::extracode
// end wxGlade


class WAbout_wxg: public wxDialog {
public:
    // begin wxGlade: WAbout_wxg::ids
    // end wxGlade

    WAbout_wxg(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: WAbout_wxg::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: WAbout_wxg::attributes
    wxStaticText* labelTitle;
    wxButton* okButton;
    // end wxGlade
}; // wxGlade: end class


#endif // WABOUT_WXG_H
