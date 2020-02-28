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
// Generated from file `PropertiesAdmin.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Ice_PropertiesAdmin_h__
#define __Ice_PropertiesAdmin_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/GCObject.h>
#include <Ice/AsyncResult.h>
#include <Ice/Incoming.h>
#include <Ice/IncomingAsync.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <Ice/BuiltinSequences.h>
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

#ifndef ICE_API
#   ifdef ICE_API_EXPORTS
#       define ICE_API ICE_DECLSPEC_EXPORT
#   elif defined(ICE_STATIC_LIBS)
#       define ICE_API /**/
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace IceProxy
{

namespace Ice
{

class PropertiesAdmin;
ICE_API void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Ice::PropertiesAdmin>&);
ICE_API ::IceProxy::Ice::Object* upCast(::IceProxy::Ice::PropertiesAdmin*);

}

}

namespace Ice
{

class PropertiesAdmin;
ICE_API ::Ice::Object* upCast(::Ice::PropertiesAdmin*);
typedef ::IceInternal::Handle< ::Ice::PropertiesAdmin> PropertiesAdminPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Ice::PropertiesAdmin> PropertiesAdminPrx;
ICE_API void __patch(PropertiesAdminPtr&, const ::Ice::ObjectPtr&);

}

namespace Ice
{

typedef ::std::map< ::std::string, ::std::string> PropertyDict;

}

namespace Ice
{

class ICE_API AMD_PropertiesAdmin_setProperties : virtual public ::Ice::AMDCallback
{
public:

    virtual void ice_response() = 0;
};

typedef ::IceUtil::Handle< ::Ice::AMD_PropertiesAdmin_setProperties> AMD_PropertiesAdmin_setPropertiesPtr;

}

namespace IceAsync
{

namespace Ice
{

class ICE_API AMD_PropertiesAdmin_setProperties : public ::Ice::AMD_PropertiesAdmin_setProperties, public ::IceInternal::IncomingAsync
{
public:

    AMD_PropertiesAdmin_setProperties(::IceInternal::Incoming&);

    virtual void ice_response();
};

}

}

namespace Ice
{

class Callback_PropertiesAdmin_getProperty_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_PropertiesAdmin_getProperty_Base> Callback_PropertiesAdmin_getPropertyPtr;

class Callback_PropertiesAdmin_getPropertiesForPrefix_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_PropertiesAdmin_getPropertiesForPrefix_Base> Callback_PropertiesAdmin_getPropertiesForPrefixPtr;

class Callback_PropertiesAdmin_setProperties_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_PropertiesAdmin_setProperties_Base> Callback_PropertiesAdmin_setPropertiesPtr;

}

namespace IceProxy
{

namespace Ice
{

class ICE_API PropertiesAdmin : virtual public ::IceProxy::Ice::Object
{
public:

    ::std::string getProperty(const ::std::string& __p_key)
    {
        return getProperty(__p_key, 0);
    }
    ::std::string getProperty(const ::std::string& __p_key, const ::Ice::Context& __ctx)
    {
        return getProperty(__p_key, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_getProperty(const ::std::string& __p_key, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getProperty(__p_key, 0, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getProperty(const ::std::string& __p_key, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getProperty(__p_key, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_getProperty(const ::std::string& __p_key, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getProperty(__p_key, &__ctx, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getProperty(const ::std::string& __p_key, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getProperty(__p_key, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_getProperty(const ::std::string& __p_key, const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent);
    
public:
#endif

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& __p_key)
    {
        return begin_getProperty(__p_key, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& __p_key, const ::Ice::Context& __ctx)
    {
        return begin_getProperty(__p_key, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& __p_key, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getProperty(__p_key, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& __p_key, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getProperty(__p_key, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& __p_key, const ::Ice::Callback_PropertiesAdmin_getPropertyPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getProperty(__p_key, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& __p_key, const ::Ice::Context& __ctx, const ::Ice::Callback_PropertiesAdmin_getPropertyPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getProperty(__p_key, &__ctx, __del, __cookie);
    }

    ::std::string end_getProperty(const ::Ice::AsyncResultPtr&);
    
private:

    ::std::string getProperty(const ::std::string&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    ::Ice::PropertyDict getPropertiesForPrefix(const ::std::string& __p_prefix)
    {
        return getPropertiesForPrefix(__p_prefix, 0);
    }
    ::Ice::PropertyDict getPropertiesForPrefix(const ::std::string& __p_prefix, const ::Ice::Context& __ctx)
    {
        return getPropertiesForPrefix(__p_prefix, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_getPropertiesForPrefix(const ::std::string& __p_prefix, const ::IceInternal::Function<void (const ::Ice::PropertyDict&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getPropertiesForPrefix(__p_prefix, 0, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getPropertiesForPrefix(const ::std::string& __p_prefix, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getPropertiesForPrefix(__p_prefix, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_getPropertiesForPrefix(const ::std::string& __p_prefix, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::PropertyDict&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getPropertiesForPrefix(__p_prefix, &__ctx, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getPropertiesForPrefix(const ::std::string& __p_prefix, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getPropertiesForPrefix(__p_prefix, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_getPropertiesForPrefix(const ::std::string& __p_prefix, const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::Ice::PropertyDict&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent);
    
public:
#endif

    ::Ice::AsyncResultPtr begin_getPropertiesForPrefix(const ::std::string& __p_prefix)
    {
        return begin_getPropertiesForPrefix(__p_prefix, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getPropertiesForPrefix(const ::std::string& __p_prefix, const ::Ice::Context& __ctx)
    {
        return begin_getPropertiesForPrefix(__p_prefix, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getPropertiesForPrefix(const ::std::string& __p_prefix, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getPropertiesForPrefix(__p_prefix, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getPropertiesForPrefix(const ::std::string& __p_prefix, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getPropertiesForPrefix(__p_prefix, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getPropertiesForPrefix(const ::std::string& __p_prefix, const ::Ice::Callback_PropertiesAdmin_getPropertiesForPrefixPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getPropertiesForPrefix(__p_prefix, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getPropertiesForPrefix(const ::std::string& __p_prefix, const ::Ice::Context& __ctx, const ::Ice::Callback_PropertiesAdmin_getPropertiesForPrefixPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getPropertiesForPrefix(__p_prefix, &__ctx, __del, __cookie);
    }

    ::Ice::PropertyDict end_getPropertiesForPrefix(const ::Ice::AsyncResultPtr&);
    
private:

    ::Ice::PropertyDict getPropertiesForPrefix(const ::std::string&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_getPropertiesForPrefix(const ::std::string&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    void setProperties(const ::Ice::PropertyDict& __p_newProperties)
    {
        setProperties(__p_newProperties, 0);
    }
    void setProperties(const ::Ice::PropertyDict& __p_newProperties, const ::Ice::Context& __ctx)
    {
        setProperties(__p_newProperties, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_setProperties(const ::Ice::PropertyDict& __p_newProperties, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_setProperties(__p_newProperties, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_setProperties(const ::Ice::PropertyDict& __p_newProperties, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setProperties(__p_newProperties, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_setProperties(const ::Ice::PropertyDict& __p_newProperties, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_setProperties(__p_newProperties, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_setProperties(const ::Ice::PropertyDict& __p_newProperties, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setProperties(__p_newProperties, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_setProperties(const ::Ice::PropertyDict& __p_newProperties)
    {
        return begin_setProperties(__p_newProperties, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setProperties(const ::Ice::PropertyDict& __p_newProperties, const ::Ice::Context& __ctx)
    {
        return begin_setProperties(__p_newProperties, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setProperties(const ::Ice::PropertyDict& __p_newProperties, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setProperties(__p_newProperties, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setProperties(const ::Ice::PropertyDict& __p_newProperties, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setProperties(__p_newProperties, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setProperties(const ::Ice::PropertyDict& __p_newProperties, const ::Ice::Callback_PropertiesAdmin_setPropertiesPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setProperties(__p_newProperties, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setProperties(const ::Ice::PropertyDict& __p_newProperties, const ::Ice::Context& __ctx, const ::Ice::Callback_PropertiesAdmin_setPropertiesPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setProperties(__p_newProperties, &__ctx, __del, __cookie);
    }

    void end_setProperties(const ::Ice::AsyncResultPtr&);
    
private:

    void setProperties(const ::Ice::PropertyDict&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_setProperties(const ::Ice::PropertyDict&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_secure(bool __secure) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_invocationTimeout(int __timeout) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_invocationTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_twoway() const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_oneway() const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_batchOneway() const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_datagram() const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_batchDatagram() const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_compress(bool __compress) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_timeout(int __timeout) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<PropertiesAdmin> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<PropertiesAdmin*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace Ice
{

class ICE_API PropertiesAdmin : virtual public ::Ice::Object
{
public:

    typedef PropertiesAdminPrx ProxyType;
    typedef PropertiesAdminPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string getProperty(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getProperty(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::PropertyDict getPropertiesForPrefix(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPropertiesForPrefix(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setProperties_async(const ::Ice::AMD_PropertiesAdmin_setPropertiesPtr&, const ::Ice::PropertyDict&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setProperties(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
};

inline bool operator==(const PropertiesAdmin& l, const PropertiesAdmin& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const PropertiesAdmin& l, const PropertiesAdmin& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace Ice
{

template<class T>
class CallbackNC_PropertiesAdmin_getProperty : public Callback_PropertiesAdmin_getProperty_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::std::string&);

    CallbackNC_PropertiesAdmin_getProperty(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    virtual void completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Ice::PropertiesAdminPrx __proxy = ::Ice::PropertiesAdminPrx::uncheckedCast(__result->getProxy());
        ::std::string __ret;
        try
        {
            __ret = __proxy->end_getProperty(__result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::exception(__result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::CallbackNC<T>::_callback.get()->*_response)(__ret);
        }
    }

    private:

    Response _response;
};

template<class T> Callback_PropertiesAdmin_getPropertyPtr
newCallback_PropertiesAdmin_getProperty(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PropertiesAdmin_getProperty<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_PropertiesAdmin_getPropertyPtr
newCallback_PropertiesAdmin_getProperty(T* instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PropertiesAdmin_getProperty<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_PropertiesAdmin_getProperty : public Callback_PropertiesAdmin_getProperty_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::std::string&, const CT&);

    Callback_PropertiesAdmin_getProperty(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    virtual void completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Ice::PropertiesAdminPrx __proxy = ::Ice::PropertiesAdminPrx::uncheckedCast(__result->getProxy());
        ::std::string __ret;
        try
        {
            __ret = __proxy->end_getProperty(__result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::exception(__result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::Callback<T, CT>::_callback.get()->*_response)(__ret, CT::dynamicCast(__result->getCookie()));
        }
    }

    private:

    Response _response;
};

template<class T, typename CT> Callback_PropertiesAdmin_getPropertyPtr
newCallback_PropertiesAdmin_getProperty(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PropertiesAdmin_getProperty<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_PropertiesAdmin_getPropertyPtr
newCallback_PropertiesAdmin_getProperty(T* instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PropertiesAdmin_getProperty<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_PropertiesAdmin_getPropertiesForPrefix : public Callback_PropertiesAdmin_getPropertiesForPrefix_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::Ice::PropertyDict&);

    CallbackNC_PropertiesAdmin_getPropertiesForPrefix(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    virtual void completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Ice::PropertiesAdminPrx __proxy = ::Ice::PropertiesAdminPrx::uncheckedCast(__result->getProxy());
        ::Ice::PropertyDict __ret;
        try
        {
            __ret = __proxy->end_getPropertiesForPrefix(__result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::exception(__result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::CallbackNC<T>::_callback.get()->*_response)(__ret);
        }
    }

    private:

    Response _response;
};

template<class T> Callback_PropertiesAdmin_getPropertiesForPrefixPtr
newCallback_PropertiesAdmin_getPropertiesForPrefix(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::Ice::PropertyDict&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PropertiesAdmin_getPropertiesForPrefix<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_PropertiesAdmin_getPropertiesForPrefixPtr
newCallback_PropertiesAdmin_getPropertiesForPrefix(T* instance, void (T::*cb)(const ::Ice::PropertyDict&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PropertiesAdmin_getPropertiesForPrefix<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_PropertiesAdmin_getPropertiesForPrefix : public Callback_PropertiesAdmin_getPropertiesForPrefix_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::Ice::PropertyDict&, const CT&);

    Callback_PropertiesAdmin_getPropertiesForPrefix(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    virtual void completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Ice::PropertiesAdminPrx __proxy = ::Ice::PropertiesAdminPrx::uncheckedCast(__result->getProxy());
        ::Ice::PropertyDict __ret;
        try
        {
            __ret = __proxy->end_getPropertiesForPrefix(__result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::exception(__result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::Callback<T, CT>::_callback.get()->*_response)(__ret, CT::dynamicCast(__result->getCookie()));
        }
    }

    private:

    Response _response;
};

template<class T, typename CT> Callback_PropertiesAdmin_getPropertiesForPrefixPtr
newCallback_PropertiesAdmin_getPropertiesForPrefix(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::Ice::PropertyDict&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PropertiesAdmin_getPropertiesForPrefix<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_PropertiesAdmin_getPropertiesForPrefixPtr
newCallback_PropertiesAdmin_getPropertiesForPrefix(T* instance, void (T::*cb)(const ::Ice::PropertyDict&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PropertiesAdmin_getPropertiesForPrefix<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_PropertiesAdmin_setProperties : public Callback_PropertiesAdmin_setProperties_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_PropertiesAdmin_setProperties(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_PropertiesAdmin_setPropertiesPtr
newCallback_PropertiesAdmin_setProperties(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PropertiesAdmin_setProperties<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_PropertiesAdmin_setPropertiesPtr
newCallback_PropertiesAdmin_setProperties(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PropertiesAdmin_setProperties<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_PropertiesAdmin_setPropertiesPtr
newCallback_PropertiesAdmin_setProperties(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PropertiesAdmin_setProperties<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_PropertiesAdmin_setPropertiesPtr
newCallback_PropertiesAdmin_setProperties(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_PropertiesAdmin_setProperties<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_PropertiesAdmin_setProperties : public Callback_PropertiesAdmin_setProperties_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_PropertiesAdmin_setProperties(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_PropertiesAdmin_setPropertiesPtr
newCallback_PropertiesAdmin_setProperties(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PropertiesAdmin_setProperties<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_PropertiesAdmin_setPropertiesPtr
newCallback_PropertiesAdmin_setProperties(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PropertiesAdmin_setProperties<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_PropertiesAdmin_setPropertiesPtr
newCallback_PropertiesAdmin_setProperties(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PropertiesAdmin_setProperties<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_PropertiesAdmin_setPropertiesPtr
newCallback_PropertiesAdmin_setProperties(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_PropertiesAdmin_setProperties<T, CT>(instance, 0, excb, sentcb);
}

}

#include <IceUtil/PopDisableWarnings.h>
#endif
