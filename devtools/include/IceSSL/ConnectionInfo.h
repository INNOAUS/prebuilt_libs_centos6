// **********************************************************************
//
// Copyright (c) 2003-2018 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.6.5
//
// <auto-generated>
//
// Generated from file `ConnectionInfo.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __IceSSL_ConnectionInfo_h__
#define __IceSSL_ConnectionInfo_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/AsyncResult.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/Connection.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 306
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 5
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef ICE_SSL_API
#   ifdef ICE_SSL_API_EXPORTS
#       define ICE_SSL_API ICE_DECLSPEC_EXPORT
#   elif defined(ICE_STATIC_LIBS)
#       define ICE_SSL_API /**/
#   else
#       define ICE_SSL_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace IceSSL
{

class ConnectionInfo;
ICE_SSL_API ::Ice::LocalObject* upCast(::IceSSL::ConnectionInfo*);
typedef ::IceInternal::Handle< ::IceSSL::ConnectionInfo> ConnectionInfoPtr;

class WSSConnectionInfo;
ICE_SSL_API ::Ice::LocalObject* upCast(::IceSSL::WSSConnectionInfo*);
typedef ::IceInternal::Handle< ::IceSSL::WSSConnectionInfo> WSSConnectionInfoPtr;

}

namespace IceSSL
{

class ICE_SSL_API ConnectionInfo : public ::Ice::IPConnectionInfo
{
public:

    typedef ConnectionInfoPtr PointerType;

    ConnectionInfo()
    {
    }

    ConnectionInfo(bool __ice_incoming, const ::std::string& __ice_adapterName, const ::std::string& __ice_connectionId, ::Ice::Int __ice_rcvSize, ::Ice::Int __ice_sndSize, const ::std::string& __ice_localAddress, ::Ice::Int __ice_localPort, const ::std::string& __ice_remoteAddress, ::Ice::Int __ice_remotePort, const ::std::string& __ice_cipher, const ::Ice::StringSeq& __ice_certs, bool __ice_verified) :
        ::Ice::IPConnectionInfo(__ice_incoming, __ice_adapterName, __ice_connectionId, __ice_rcvSize, __ice_sndSize, __ice_localAddress, __ice_localPort, __ice_remoteAddress, __ice_remotePort),
        cipher(__ice_cipher),
        certs(__ice_certs),
        verified(__ice_verified)
    {
    }


public:

    ::std::string cipher;

    ::Ice::StringSeq certs;

    bool verified;
protected:

    virtual ~ConnectionInfo() {}

friend class ConnectionInfo__staticInit;
};

inline bool operator==(const ConnectionInfo& l, const ConnectionInfo& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const ConnectionInfo& l, const ConnectionInfo& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

class ICE_SSL_API WSSConnectionInfo : public ::IceSSL::ConnectionInfo
{
public:

    typedef WSSConnectionInfoPtr PointerType;

    WSSConnectionInfo()
    {
    }

    WSSConnectionInfo(bool __ice_incoming, const ::std::string& __ice_adapterName, const ::std::string& __ice_connectionId, ::Ice::Int __ice_rcvSize, ::Ice::Int __ice_sndSize, const ::std::string& __ice_localAddress, ::Ice::Int __ice_localPort, const ::std::string& __ice_remoteAddress, ::Ice::Int __ice_remotePort, const ::std::string& __ice_cipher, const ::Ice::StringSeq& __ice_certs, bool __ice_verified, const ::Ice::HeaderDict& __ice_headers) :
        ::IceSSL::ConnectionInfo(__ice_incoming, __ice_adapterName, __ice_connectionId, __ice_rcvSize, __ice_sndSize, __ice_localAddress, __ice_localPort, __ice_remoteAddress, __ice_remotePort, __ice_cipher, __ice_certs, __ice_verified),
        headers(__ice_headers)
    {
    }


public:

    ::Ice::HeaderDict headers;
protected:

    virtual ~WSSConnectionInfo() {}

friend class WSSConnectionInfo__staticInit;
};

inline bool operator==(const WSSConnectionInfo& l, const WSSConnectionInfo& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const WSSConnectionInfo& l, const WSSConnectionInfo& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

}

#include <IceUtil/PopDisableWarnings.h>
#endif
