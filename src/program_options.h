/*
   Copyright (C) 2015 MeiZhaorui(Mason) <listener_mei@163.com>
   
   The File is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
   
   The File is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
   
   You should have received a copy of the GNU Lesser General Public
   License along with the Library; if not, see
   <http://www.gnu.org/licenses/>.
*/

#ifndef PROGRAM_OPTIONS_H
#define PROGRAM_OPTIONS_H

const char *const VERSION = \
                            "\t******************************************\n"
                            "\t*      MadeBy : MeiZhaorui(Mason)        *\n"
                            "\t*      E-Mail : listener_mei@163.com     *\n"
                            "\t*       Phone : (+86)131-5898-7498       *\n"
                            "\t*  LastUpdate : 2014/10/29               *\n"
                            "\t*        host : Ubuntu x86_64 3.13.0     *\n"
                            "\t******************************************\n";

namespace opt
{

bool program_options(int argc, char *argv[], const char *version);

}

#endif // PROGRAM_OPTIONS_H
