
/*******************************************************************************/
/* Copyright (C) 2007-2008 Jonathan Moore Liles                                */
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

#pragma once

#include "common.h"
#include "midievent.H"

#include <stdio.h>

class event_list;

class event : public midievent
{

protected:

    /* these are only to be used by event_list class! */
    event *_next;
    event *_prev;

private:

    event *_link;                                               /* other event in pair */

    byte_t _selected;

    void _init ( void );

public:

    event();
    ~event();
    event ( const event &e );
    event ( const midievent &e );

    event * next ( void ) const;
    event * prev ( void ) const;

    void link ( event *event );
    event * link ( void ) const;
    bool linked ( void ) const;
    void select ( void );
    void deselect ( void );
    bool selected ( int n ) const;
    bool selected ( void ) const;
    void note ( char note );
    unsigned char note ( void ) const;
    tick_t note_duration ( void ) const;
    void note_duration ( tick_t l );


    friend class event_list;

};

inline event *
event::next ( void ) const
{
    return _next;
}

inline event *
event::prev ( void ) const
{
    return _prev;
}
