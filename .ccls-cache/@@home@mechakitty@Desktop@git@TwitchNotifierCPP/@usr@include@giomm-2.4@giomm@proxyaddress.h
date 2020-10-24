// Generated by gmmproc 2.64.2 -- DO NOT MODIFY!
#ifndef _GIOMM_PROXYADDRESS_H
#define _GIOMM_PROXYADDRESS_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2009 The glibmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <giomm/inetsocketaddress.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GProxyAddress = struct _GProxyAddress;
using GProxyAddressClass = struct _GProxyAddressClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API ProxyAddress_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/** ProxyAddress - An internet address with proxy information.
 * Support for proxied InetSocketAddress.
 *
 * @ingroup NetworkIO
 * @newin{2,28}
 */

class GIOMM_API ProxyAddress
: public InetSocketAddress
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = ProxyAddress;
  using CppClassType = ProxyAddress_Class;
  using BaseObjectType = GProxyAddress;
  using BaseClassType = GProxyAddressClass;

  // noncopyable
  ProxyAddress(const ProxyAddress&) = delete;
  ProxyAddress& operator=(const ProxyAddress&) = delete;

private:  friend class ProxyAddress_Class;
  static CppClassType proxyaddress_class_;

protected:
  explicit ProxyAddress(const Glib::ConstructParams& construct_params);
  explicit ProxyAddress(GProxyAddress* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ProxyAddress(ProxyAddress&& src) noexcept;
  ProxyAddress& operator=(ProxyAddress&& src) noexcept;

  ~ProxyAddress() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GProxyAddress*       gobj()       { return reinterpret_cast<GProxyAddress*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GProxyAddress* gobj() const { return reinterpret_cast<GProxyAddress*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GProxyAddress* gobj_copy();

private:


protected:
    explicit ProxyAddress(const Glib::RefPtr<InetAddress>& address, guint16 port, const Glib::ustring& protocol, const Glib::ustring& destination_hostname, guint16 destination_port, const Glib::ustring& username =  Glib::ustring(), const Glib::ustring& password =  Glib::ustring());


public:
  
  static Glib::RefPtr<ProxyAddress> create(const Glib::RefPtr<InetAddress>& address, guint16 port, const Glib::ustring& protocol, const Glib::ustring& destination_hostname, guint16 destination_port, const Glib::ustring& username =  Glib::ustring(), const Glib::ustring& password =  Glib::ustring());


  /** Gets @a proxy's protocol. eg, "socks" or "http"
   * 
   * @newin{2,26}
   * 
   * @return The @a proxy's protocol.
   */
  Glib::ustring get_protocol() const;
  
  /** Gets the protocol that is being spoken to the destination
   * server; eg, "http" or "ftp".
   * 
   * @newin{2,34}
   * 
   * @return The @a proxy's destination protocol.
   */
  Glib::ustring get_destination_protocol() const;
  
  /** Gets @a proxy's destination hostname; that is, the name of the host
   * that will be connected to via the proxy, not the name of the proxy
   * itself.
   * 
   * @newin{2,26}
   * 
   * @return The @a proxy's destination hostname.
   */
  Glib::ustring get_destination_hostname() const;
  
  /** Gets @a proxy's destination port; that is, the port on the
   * destination host that will be connected to via the proxy, not the
   * port number of the proxy itself.
   * 
   * @newin{2,26}
   * 
   * @return The @a proxy's destination port.
   */
  guint16 get_destination_port() const;

  
  /** Gets @a proxy's username.
   * 
   * @newin{2,26}
   * 
   * @return The @a proxy's username.
   */
  Glib::ustring get_username() const;
  
  /** Gets @a proxy's password.
   * 
   * @newin{2,26}
   * 
   * @return The @a proxy's password.
   */
  Glib::ustring get_password() const;

  
  /** Gets the proxy URI that @a proxy was constructed from.
   * 
   * @newin{2,34}
   * 
   * @return The @a proxy's URI, or <tt>nullptr</tt> if unknown.
   */
  Glib::ustring get_uri() const;


  /** The proxy protocol.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_protocol() const;


  /** The protocol being spoke to the destination host, or <tt>nullptr</tt> if
   * the ProxyAddress doesn't know.
   * 
   * @newin{2,34}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_destination_protocol() const;


  /** The proxy destination hostname.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_destination_hostname() const;


//TODO: This should really be a guint16:
  /** The proxy destination port.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_destination_port() const;


  /** The proxy username.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_username() const;


  /** The proxy password.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_password() const;


  /** The URI string that the proxy was constructed from (or <tt>nullptr</tt>
   * if the creator didn't specify this).
   * 
   * @newin{2,34}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_uri() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::ProxyAddress
   */
  GIOMM_API
  Glib::RefPtr<Gio::ProxyAddress> wrap(GProxyAddress* object, bool take_copy = false);
}


#endif /* _GIOMM_PROXYADDRESS_H */

