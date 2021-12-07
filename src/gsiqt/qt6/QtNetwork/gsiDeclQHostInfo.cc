
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
*  @file gsiDeclQHostInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHostInfo>
#include <QHostAddress>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHostInfo

//  Constructor QHostInfo::QHostInfo(int lookupId)


static void _init_ctor_QHostInfo_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("lookupId", true, "-1");
  decl->add_arg<int > (argspec_0);
  decl->set_return_new<QHostInfo> ();
}

static void _call_ctor_QHostInfo_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QHostInfo *> (new QHostInfo (arg1));
}


//  Constructor QHostInfo::QHostInfo(const QHostInfo &d)


static void _init_ctor_QHostInfo_2204 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("d");
  decl->add_arg<const QHostInfo & > (argspec_0);
  decl->set_return_new<QHostInfo> ();
}

static void _call_ctor_QHostInfo_2204 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostInfo &arg1 = gsi::arg_reader<const QHostInfo & >() (args, heap);
  ret.write<QHostInfo *> (new QHostInfo (arg1));
}


// QList<QHostAddress> QHostInfo::addresses()


static void _init_f_addresses_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QHostAddress> > ();
}

static void _call_f_addresses_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QHostAddress> > ((QList<QHostAddress>)((QHostInfo *)cls)->addresses ());
}


// QHostInfo::HostInfoError QHostInfo::error()


static void _init_f_error_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QHostInfo::HostInfoError>::target_type > ();
}

static void _call_f_error_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QHostInfo::HostInfoError>::target_type > ((qt_gsi::Converter<QHostInfo::HostInfoError>::target_type)qt_gsi::CppToQtAdaptor<QHostInfo::HostInfoError>(((QHostInfo *)cls)->error ()));
}


// QString QHostInfo::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QHostInfo *)cls)->errorString ());
}


// QString QHostInfo::hostName()


static void _init_f_hostName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_hostName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QHostInfo *)cls)->hostName ());
}


// int QHostInfo::lookupId()


static void _init_f_lookupId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lookupId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QHostInfo *)cls)->lookupId ());
}


// QHostInfo &QHostInfo::operator=(const QHostInfo &d)


static void _init_f_operator_eq__2204 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("d");
  decl->add_arg<const QHostInfo & > (argspec_0);
  decl->set_return<QHostInfo & > ();
}

static void _call_f_operator_eq__2204 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostInfo &arg1 = gsi::arg_reader<const QHostInfo & >() (args, heap);
  ret.write<QHostInfo & > ((QHostInfo &)((QHostInfo *)cls)->operator= (arg1));
}


// void QHostInfo::setAddresses(const QList<QHostAddress> &addresses)


static void _init_f_setAddresses_3133 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("addresses");
  decl->add_arg<const QList<QHostAddress> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAddresses_3133 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QHostAddress> &arg1 = gsi::arg_reader<const QList<QHostAddress> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostInfo *)cls)->setAddresses (arg1);
}


// void QHostInfo::setError(QHostInfo::HostInfoError error)


static void _init_f_setError_2775 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("error");
  decl->add_arg<const qt_gsi::Converter<QHostInfo::HostInfoError>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setError_2775 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHostInfo::HostInfoError>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QHostInfo::HostInfoError>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostInfo *)cls)->setError (qt_gsi::QtToCppAdaptor<QHostInfo::HostInfoError>(arg1).cref());
}


// void QHostInfo::setErrorString(const QString &errorString)


static void _init_f_setErrorString_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("errorString");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setErrorString_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostInfo *)cls)->setErrorString (arg1);
}


// void QHostInfo::setHostName(const QString &name)


static void _init_f_setHostName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHostName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostInfo *)cls)->setHostName (arg1);
}


// void QHostInfo::setLookupId(int id)


static void _init_f_setLookupId_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLookupId_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostInfo *)cls)->setLookupId (arg1);
}


// void QHostInfo::swap(QHostInfo &other)


static void _init_f_swap_1509 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QHostInfo & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1509 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QHostInfo &arg1 = gsi::arg_reader<QHostInfo & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostInfo *)cls)->swap (arg1);
}


// static void QHostInfo::abortHostLookup(int lookupId)


static void _init_f_abortHostLookup_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("lookupId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_abortHostLookup_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QHostInfo::abortHostLookup (arg1);
}


// static QHostInfo QHostInfo::fromName(const QString &name)


static void _init_f_fromName_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QHostInfo > ();
}

static void _call_f_fromName_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QHostInfo > ((QHostInfo)QHostInfo::fromName (arg1));
}


// static QString QHostInfo::localDomainName()


static void _init_f_localDomainName_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_localDomainName_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QHostInfo::localDomainName ());
}


// static QString QHostInfo::localHostName()


static void _init_f_localHostName_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_localHostName_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QHostInfo::localHostName ());
}


// static int QHostInfo::lookupHost(const QString &name, QObject *receiver, const char *member)


static void _init_f_lookupHost_4842 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("receiver");
  decl->add_arg<QObject * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("member");
  decl->add_arg<const char * > (argspec_2);
  decl->set_return<int > ();
}

static void _call_f_lookupHost_4842 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QObject *arg2 = gsi::arg_reader<QObject * >() (args, heap);
  const char *arg3 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)QHostInfo::lookupHost (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QHostInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHostInfo::QHostInfo(int lookupId)\nThis method creates an object of class QHostInfo.", &_init_ctor_QHostInfo_767, &_call_ctor_QHostInfo_767);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHostInfo::QHostInfo(const QHostInfo &d)\nThis method creates an object of class QHostInfo.", &_init_ctor_QHostInfo_2204, &_call_ctor_QHostInfo_2204);
  methods += new qt_gsi::GenericMethod (":addresses", "@brief Method QList<QHostAddress> QHostInfo::addresses()\n", true, &_init_f_addresses_c0, &_call_f_addresses_c0);
  methods += new qt_gsi::GenericMethod (":error", "@brief Method QHostInfo::HostInfoError QHostInfo::error()\n", true, &_init_f_error_c0, &_call_f_error_c0);
  methods += new qt_gsi::GenericMethod (":errorString", "@brief Method QString QHostInfo::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod (":hostName", "@brief Method QString QHostInfo::hostName()\n", true, &_init_f_hostName_c0, &_call_f_hostName_c0);
  methods += new qt_gsi::GenericMethod (":lookupId", "@brief Method int QHostInfo::lookupId()\n", true, &_init_f_lookupId_c0, &_call_f_lookupId_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QHostInfo &QHostInfo::operator=(const QHostInfo &d)\n", false, &_init_f_operator_eq__2204, &_call_f_operator_eq__2204);
  methods += new qt_gsi::GenericMethod ("setAddresses|addresses=", "@brief Method void QHostInfo::setAddresses(const QList<QHostAddress> &addresses)\n", false, &_init_f_setAddresses_3133, &_call_f_setAddresses_3133);
  methods += new qt_gsi::GenericMethod ("setError|error=", "@brief Method void QHostInfo::setError(QHostInfo::HostInfoError error)\n", false, &_init_f_setError_2775, &_call_f_setError_2775);
  methods += new qt_gsi::GenericMethod ("setErrorString|errorString=", "@brief Method void QHostInfo::setErrorString(const QString &errorString)\n", false, &_init_f_setErrorString_2025, &_call_f_setErrorString_2025);
  methods += new qt_gsi::GenericMethod ("setHostName|hostName=", "@brief Method void QHostInfo::setHostName(const QString &name)\n", false, &_init_f_setHostName_2025, &_call_f_setHostName_2025);
  methods += new qt_gsi::GenericMethod ("setLookupId|lookupId=", "@brief Method void QHostInfo::setLookupId(int id)\n", false, &_init_f_setLookupId_767, &_call_f_setLookupId_767);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QHostInfo::swap(QHostInfo &other)\n", false, &_init_f_swap_1509, &_call_f_swap_1509);
  methods += new qt_gsi::GenericStaticMethod ("abortHostLookup", "@brief Static method void QHostInfo::abortHostLookup(int lookupId)\nThis method is static and can be called without an instance.", &_init_f_abortHostLookup_767, &_call_f_abortHostLookup_767);
  methods += new qt_gsi::GenericStaticMethod ("fromName", "@brief Static method QHostInfo QHostInfo::fromName(const QString &name)\nThis method is static and can be called without an instance.", &_init_f_fromName_2025, &_call_f_fromName_2025);
  methods += new qt_gsi::GenericStaticMethod ("localDomainName", "@brief Static method QString QHostInfo::localDomainName()\nThis method is static and can be called without an instance.", &_init_f_localDomainName_0, &_call_f_localDomainName_0);
  methods += new qt_gsi::GenericStaticMethod ("localHostName", "@brief Static method QString QHostInfo::localHostName()\nThis method is static and can be called without an instance.", &_init_f_localHostName_0, &_call_f_localHostName_0);
  methods += new qt_gsi::GenericStaticMethod ("lookupHost", "@brief Static method int QHostInfo::lookupHost(const QString &name, QObject *receiver, const char *member)\nThis method is static and can be called without an instance.", &_init_f_lookupHost_4842, &_call_f_lookupHost_4842);
  return methods;
}

gsi::Class<QHostInfo> decl_QHostInfo ("QtNetwork", "QHostInfo",
  methods_QHostInfo (),
  "@qt\n@brief Binding of QHostInfo");


GSI_QTNETWORK_PUBLIC gsi::Class<QHostInfo> &qtdecl_QHostInfo () { return decl_QHostInfo; }

}


//  Implementation of the enum wrapper class for QHostInfo::HostInfoError
namespace qt_gsi
{

static gsi::Enum<QHostInfo::HostInfoError> decl_QHostInfo_HostInfoError_Enum ("QtNetwork", "QHostInfo_HostInfoError",
    gsi::enum_const ("NoError", QHostInfo::NoError, "@brief Enum constant QHostInfo::NoError") +
    gsi::enum_const ("HostNotFound", QHostInfo::HostNotFound, "@brief Enum constant QHostInfo::HostNotFound") +
    gsi::enum_const ("UnknownError", QHostInfo::UnknownError, "@brief Enum constant QHostInfo::UnknownError"),
  "@qt\n@brief This class represents the QHostInfo::HostInfoError enum");

static gsi::QFlagsClass<QHostInfo::HostInfoError > decl_QHostInfo_HostInfoError_Enums ("QtNetwork", "QHostInfo_QFlags_HostInfoError",
  "@qt\n@brief This class represents the QFlags<QHostInfo::HostInfoError> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QHostInfo> inject_QHostInfo_HostInfoError_Enum_in_parent (decl_QHostInfo_HostInfoError_Enum.defs ());
static gsi::ClassExt<QHostInfo> decl_QHostInfo_HostInfoError_Enum_as_child (decl_QHostInfo_HostInfoError_Enum, "HostInfoError");
static gsi::ClassExt<QHostInfo> decl_QHostInfo_HostInfoError_Enums_as_child (decl_QHostInfo_HostInfoError_Enums, "QFlags_HostInfoError");

}
