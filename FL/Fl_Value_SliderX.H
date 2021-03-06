
/*******************************************************************************/
/* Copyright (C) 2009 Jonathan Moore Liles                                     */
/*                                                                             */
/* This program is free software; you can redistribute it and/or modify it     */
/* under the terms of the GNU General Public License as published by the       */
/* Free Software Foundation; either version 2 of the License, or (at your      */
/* option) any later version.                                                  */
/*                                                                             */
/* This program is distributed in the hope that it will be useful, but WITHOUT */
/* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       */
/* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for   */
/* more details.                                                               */
/*                                                                             */
/* You should have received a copy of the GNU General Public License along     */
/* with This program; see the file COPYING.  If not,write to the Free Software */
/* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */
/*******************************************************************************/

#ifndef Fl_Value_SliderX_H
#define Fl_Value_SliderX_H

#include "Fl_SliderX.H"

/**
  The Fl_Value_SliderX widget is a Fl_SliderX widget
  with a box displaying the current value.
  <P ALIGN=CENTER>\image html value_slider.png 
  \image latex  value_slider.png "Fl_Value_SliderX" width=4cm
*/
class FL_EXPORT Fl_Value_SliderX : public Fl_SliderX {
    Fl_Font textfont_;
    Fl_Fontsize textsize_;
    Fl_Color textcolor_;
protected:
    void draw();
public:
    int handle(int);
    Fl_Value_SliderX(int x,int y,int w,int h, const char *l = 0);
    /**    Gets the typeface of the text in the value box.  */
    Fl_Font textfont() const {return textfont_;}
    /**    Sets the typeface of the text in the value box.  */
    void textfont(Fl_Font s) {textfont_ = s;}
    /**    Gets the size of the text in the value box.  */
    Fl_Fontsize textsize() const {return textsize_;}
    /**    Sets the size of the text in the value box.  */
    void textsize(Fl_Fontsize s) {textsize_ = s;}
    /**    Gets the color of the text in the value box.  */
    Fl_Color textcolor() const {return textcolor_;}
    /**    Sets the color of the text in the value box.  */
    void textcolor(Fl_Color s) {textcolor_ = s;}
};

#endif

