
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQStyleOptionMenuItem.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionMenuItem>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionMenuItem

//  Constructor QStyleOptionMenuItem::QStyleOptionMenuItem()


static void _init_ctor_QStyleOptionMenuItem_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionMenuItem> ();
}

static void _call_ctor_QStyleOptionMenuItem_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionMenuItem *> (new QStyleOptionMenuItem ());
}


//  Constructor QStyleOptionMenuItem::QStyleOptionMenuItem(const QStyleOptionMenuItem &other)


static void _init_ctor_QStyleOptionMenuItem_3360 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionMenuItem & > (argspec_0);
  decl->set_return_new<QStyleOptionMenuItem> ();
}

static void _call_ctor_QStyleOptionMenuItem_3360 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionMenuItem &arg1 = gsi::arg_reader<const QStyleOptionMenuItem & >() (args, heap);
  ret.write<QStyleOptionMenuItem *> (new QStyleOptionMenuItem (arg1));
}


// QStyleOptionMenuItem &QStyleOptionMenuItem::operator=(const QStyleOptionMenuItem &)


static void _init_f_operator_eq__3360 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QStyleOptionMenuItem & > (argspec_0);
  decl->set_return<QStyleOptionMenuItem & > ();
}

static void _call_f_operator_eq__3360 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionMenuItem &arg1 = gsi::arg_reader<const QStyleOptionMenuItem & >() (args, heap);
  ret.write<QStyleOptionMenuItem & > ((QStyleOptionMenuItem &)((QStyleOptionMenuItem *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionMenuItem () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionMenuItem::QStyleOptionMenuItem()\nThis method creates an object of class QStyleOptionMenuItem.", &_init_ctor_QStyleOptionMenuItem_0, &_call_ctor_QStyleOptionMenuItem_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionMenuItem::QStyleOptionMenuItem(const QStyleOptionMenuItem &other)\nThis method creates an object of class QStyleOptionMenuItem.", &_init_ctor_QStyleOptionMenuItem_3360, &_call_ctor_QStyleOptionMenuItem_3360);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStyleOptionMenuItem &QStyleOptionMenuItem::operator=(const QStyleOptionMenuItem &)\n", false, &_init_f_operator_eq__3360, &_call_f_operator_eq__3360);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionMenuItem> decl_QStyleOptionMenuItem (qtdecl_QStyleOption (), "QtWidgets", "QStyleOptionMenuItem",
  methods_QStyleOptionMenuItem (),
  "@qt\n@brief Binding of QStyleOptionMenuItem");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionMenuItem> &qtdecl_QStyleOptionMenuItem () { return decl_QStyleOptionMenuItem; }

}
