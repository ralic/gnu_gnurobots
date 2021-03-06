/* Copyright (C) 2008 Bradley Smith <brad@brad-smith.co.uk>
 *
 * GNU Robots, ui-window-private.h.
 *
 * GNU Robots is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GNU Robots is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Robots.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __UI_WINDOW_PRIVATE_H__
#define __UI_WINDOW_PRIVATE_H__

G_BEGIN_DECLS

struct _UIWindowPrivate
{
	GtkWidget *cmdwin;
	GtkWidget *arena;
};

G_END_DECLS

#endif /* __UI_WINDOW_PRIVATE_H__ */
