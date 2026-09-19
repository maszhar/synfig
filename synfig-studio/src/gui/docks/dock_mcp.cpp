/* === S Y N F I G ========================================================= */
/*!	\file docks/dock_mcp.cpp
**	\brief MCP Dock File
**
**	\legal
**	Copyright (c) 2026 Fikri Mustofa
**
**	This file is part of Synfig.
**
**	Synfig is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 2 of the License, or
**	(at your option) any later version.
**
**	Synfig is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with Synfig.  If not, see <https://www.gnu.org/licenses/>.
**	\endlegal
*/
/* ========================================================================= */

/* === H E A D E R S ======================================================= */

#include "docks/dock_mcp.h"

#include <gui/localization.h>
#include <gtkmm/label.h>

/* === U S I N G =========================================================== */

using namespace synfig;

/* === M A C R O S ========================================================= */

/* === G L O B A L S ======================================================= */

/* === P R O C E D U R E S ================================================= */

/* === M E T H O D S ======================================================= */

/* === E N T R Y P O I N T ================================================= */

studio::Dock_MCP::Dock_MCP()
    : Dock_CanvasSpecific("mcp", _("MCP Server"), "mcp_icon")
{
  set_use_scrolled(false);

  Gtk::Label *test_label = manage(new Gtk::Label);
  test_label->set_markup(synfig::strprintf("<i>%s</i>", _("MCP Server\nPlaceholder")));

  add(*test_label);
}

studio::Dock_MCP::~Dock_MCP()
{
}