/* comCoreTypes_ps.cpp generated by WIDL Version 2.2.1 on 17-Dec-01 at 10:46:40 AM */

#define __WIDL_PROXY_STUB 0x0200
#include "dcomProxy.h"
#include "comCoreTypes.h"
#include <string.h>

extern "C" int include_comCoreTypes () {return 0;}

NdrTypeDesc StructDesc__tagCY (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_tagCY, int64, ndrtypes.hyper_t ()),
        };

    return ndrtypes.struct_t (1, m);
    }

NdrTypeDesc StructDesc__FILETIME (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_FILETIME, dwLowDateTime, ndrtypes.ulong_t ()),
        NDR_MEMBER(_FILETIME, dwHighDateTime, ndrtypes.ulong_t ()),
        };

    return ndrtypes.struct_t (2, m);
    }

NdrTypeDesc StructDesc__SYSTEMTIME (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_SYSTEMTIME, wYear, ndrtypes.short_t ()),
        NDR_MEMBER(_SYSTEMTIME, wMonth, ndrtypes.short_t ()),
        NDR_MEMBER(_SYSTEMTIME, wDayOfWeek, ndrtypes.short_t ()),
        NDR_MEMBER(_SYSTEMTIME, wDay, ndrtypes.short_t ()),
        NDR_MEMBER(_SYSTEMTIME, wHour, ndrtypes.short_t ()),
        NDR_MEMBER(_SYSTEMTIME, wMinute, ndrtypes.short_t ()),
        NDR_MEMBER(_SYSTEMTIME, wSecond, ndrtypes.short_t ()),
        NDR_MEMBER(_SYSTEMTIME, wMilliseconds, ndrtypes.short_t ()),
        };

    return ndrtypes.struct_t (8, m);
    }

NdrTypeDesc StructDesc__SECURITY_ATTRIBUTES (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_SECURITY_ATTRIBUTES, nLength, ndrtypes.ulong_t ()),
        NDR_MEMBER(_SECURITY_ATTRIBUTES, lpSecurityDescriptor, ndrtypes.pointer_t(ndrtypes.byte_t ())),
        NDR_MEMBER(_SECURITY_ATTRIBUTES, bInheritHandle, ndrtypes.int_t ()),
        };

    return ndrtypes.struct_t (3, m);
    }

NdrTypeDesc StructDesc__ACL (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_ACL, AclRevision, ndrtypes.uchar_t ()),
        NDR_MEMBER(_ACL, Sbz1, ndrtypes.uchar_t ()),
        NDR_MEMBER(_ACL, AclSize, ndrtypes.ushort_t ()),
        NDR_MEMBER(_ACL, AceCount, ndrtypes.ushort_t ()),
        NDR_MEMBER(_ACL, Sbz2, ndrtypes.ushort_t ()),
        };

    return ndrtypes.struct_t (5, m);
    }

NdrTypeDesc StructDesc__ACL(NDRTYPES&);

NdrTypeDesc StructDesc__ACL(NDRTYPES&);

NdrTypeDesc StructDesc__SECURITY_DESCRIPTOR (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_SECURITY_DESCRIPTOR, Revision, ndrtypes.uchar_t ()),
        NDR_MEMBER(_SECURITY_DESCRIPTOR, Sbz1, ndrtypes.uchar_t ()),
        NDR_MEMBER(_SECURITY_DESCRIPTOR, Control, ndrtypes.ushort_t ()),
        NDR_MEMBER(_SECURITY_DESCRIPTOR, Owner, ndrtypes.pointer_t(ndrtypes.byte_t ())),
        NDR_MEMBER(_SECURITY_DESCRIPTOR, Group, ndrtypes.pointer_t(ndrtypes.byte_t ())),
        NDR_MEMBER(_SECURITY_DESCRIPTOR, Sacl, ndrtypes.pointer_t(StructDesc__ACL (ndrtypes))),
        NDR_MEMBER(_SECURITY_DESCRIPTOR, Dacl, ndrtypes.pointer_t(StructDesc__ACL (ndrtypes))),
        };

    return ndrtypes.struct_t (7, m);
    }

NdrTypeDesc StructDesc__COAUTHIDENTITY (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_COAUTHIDENTITY, User, ndrtypes.pointer_t(ndrtypes.wstring_t ())),
        NDR_MEMBER(_COAUTHIDENTITY, UserLength, ndrtypes.ulong_t ()),
        NDR_MEMBER(_COAUTHIDENTITY, Domain, ndrtypes.pointer_t(ndrtypes.wstring_t ())),
        NDR_MEMBER(_COAUTHIDENTITY, DomainLength, ndrtypes.ulong_t ()),
        NDR_MEMBER(_COAUTHIDENTITY, Password, ndrtypes.pointer_t(ndrtypes.wstring_t ())),
        NDR_MEMBER(_COAUTHIDENTITY, PasswordLength, ndrtypes.ulong_t ()),
        NDR_MEMBER(_COAUTHIDENTITY, Flags, ndrtypes.ulong_t ()),
        };

    return ndrtypes.struct_t (7, m);
    }

NdrTypeDesc StructDesc__COAUTHIDENTITY(NDRTYPES&);

NdrTypeDesc StructDesc__COAUTHINFO (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_COAUTHINFO, dwAuthnSvc, ndrtypes.ulong_t ()),
        NDR_MEMBER(_COAUTHINFO, dwAuthzSvc, ndrtypes.ulong_t ()),
        NDR_MEMBER(_COAUTHINFO, pwszServerPrincName, ndrtypes.pointer_t(ndrtypes.wstring_t ())),
        NDR_MEMBER(_COAUTHINFO, dwAuthnLevel, ndrtypes.ulong_t ()),
        NDR_MEMBER(_COAUTHINFO, dwImpersonationLevel, ndrtypes.ulong_t ()),
        NDR_MEMBER(_COAUTHINFO, pAuthIdentityData, ndrtypes.pointer_t(StructDesc__COAUTHIDENTITY (ndrtypes))),
        NDR_MEMBER(_COAUTHINFO, dwCapabilities, ndrtypes.ulong_t ()),
        };

    return ndrtypes.struct_t (7, m);
    }

NdrTypeDesc StructDesc__COAUTHINFO(NDRTYPES&);

NdrTypeDesc StructDesc__COSERVERINFO (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_COSERVERINFO, dwReserved1, ndrtypes.ulong_t ()),
        NDR_MEMBER(_COSERVERINFO, pwszName, ndrtypes.pointer_t(ndrtypes.wstring_t ())),
        NDR_MEMBER(_COSERVERINFO, pAuthInfo, ndrtypes.pointer_t(StructDesc__COAUTHINFO (ndrtypes))),
        NDR_MEMBER(_COSERVERINFO, dwReserved2, ndrtypes.ulong_t ()),
        };

    return ndrtypes.struct_t (4, m);
    }

NdrTypeDesc StructDesc__GUID (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_GUID, Data1, ndrtypes.ulong_t ()),
        NDR_MEMBER(_GUID, Data2, ndrtypes.short_t ()),
        NDR_MEMBER(_GUID, Data3, ndrtypes.short_t ()),
        NDR_MEMBER(_GUID, Data4, ndrtypes.array_t(ndrtypes.uchar_t (), NDR_SIZEOF(BYTE), 8)),
        };

    return ndrtypes.struct_t (4, m);
    }

NdrTypeDesc StructDesc__BYTE_BLOB (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_BYTE_BLOB, clSize, ndrtypes.ulong_t ()),
        NDR_MEMBERX(_BYTE_BLOB, abData, ndrtypes.array_t(ndrtypes.byte_t (), NDR_SIZEOF(byte)), 0),
        };

    return ndrtypes.cstruct_t (2, m, 0);
    }

NdrTypeDesc StructDesc__WORD_BLOB (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_WORD_BLOB, clSize, ndrtypes.ulong_t ()),
        NDR_MEMBERX(_WORD_BLOB, asData, ndrtypes.array_t(ndrtypes.ushort_t (), NDR_SIZEOF(unsigned short)), 0),
        };

    return ndrtypes.cstruct_t (2, m, 0);
    }

NdrTypeDesc StructDesc__DWORD_BLOB (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_DWORD_BLOB, clSize, ndrtypes.ulong_t ()),
        NDR_MEMBERX(_DWORD_BLOB, alData, ndrtypes.array_t(ndrtypes.ulong_t (), NDR_SIZEOF(unsigned long)), 0),
        };

    return ndrtypes.cstruct_t (2, m, 0);
    }

NdrTypeDesc StructDesc__FLAGGED_BYTE_BLOB (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_FLAGGED_BYTE_BLOB, fFlags, ndrtypes.ulong_t ()),
        NDR_MEMBER(_FLAGGED_BYTE_BLOB, clSize, ndrtypes.ulong_t ()),
        NDR_MEMBERX(_FLAGGED_BYTE_BLOB, abData, ndrtypes.array_t(ndrtypes.byte_t (), NDR_SIZEOF(byte)), 1),
        };

    return ndrtypes.cstruct_t (3, m, 1);
    }

NdrTypeDesc StructDesc__FLAGGED_WORD_BLOB (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_FLAGGED_WORD_BLOB, fFlags, ndrtypes.ulong_t ()),
        NDR_MEMBER(_FLAGGED_WORD_BLOB, clSize, ndrtypes.ulong_t ()),
        NDR_MEMBERX(_FLAGGED_WORD_BLOB, asData, ndrtypes.array_t(ndrtypes.ushort_t (), NDR_SIZEOF(unsigned short)), 1),
        };

    return ndrtypes.cstruct_t (3, m, 1);
    }

NdrTypeDesc StructDesc__BYTE_SIZEDARR (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_BYTE_SIZEDARR, clSize, ndrtypes.ulong_t ()),
        NDR_MEMBERX(_BYTE_SIZEDARR, pData, ndrtypes.pointer_t(ndrtypes.carray_t(ndrtypes.byte_t (), NDR_SIZEOF(byte))), 0),
        };

    return ndrtypes.struct_t (2, m, 0);
    }

NdrTypeDesc StructDesc__SHORT_SIZEDARR (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_SHORT_SIZEDARR, clSize, ndrtypes.ulong_t ()),
        NDR_MEMBERX(_SHORT_SIZEDARR, pData, ndrtypes.pointer_t(ndrtypes.carray_t(ndrtypes.ushort_t (), NDR_SIZEOF(unsigned short))), 0),
        };

    return ndrtypes.struct_t (2, m, 0);
    }

NdrTypeDesc StructDesc__LONG_SIZEDARR (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_LONG_SIZEDARR, clSize, ndrtypes.ulong_t ()),
        NDR_MEMBERX(_LONG_SIZEDARR, pData, ndrtypes.pointer_t(ndrtypes.carray_t(ndrtypes.ulong_t (), NDR_SIZEOF(unsigned long))), 0),
        };

    return ndrtypes.struct_t (2, m, 0);
    }

NdrTypeDesc StructDesc__HYPER_SIZEDARR (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(_HYPER_SIZEDARR, clSize, ndrtypes.ulong_t ()),
        NDR_MEMBERX(_HYPER_SIZEDARR, pData, ndrtypes.pointer_t(ndrtypes.carray_t(ndrtypes.hyper_t (), NDR_SIZEOF(hyper))), 0),
        };

    return ndrtypes.struct_t (2, m, 0);
    }

NdrTypeDesc StructDesc_tagDEC (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(tagDEC, wReserved, ndrtypes.ushort_t ()),
        NDR_MEMBER(tagDEC, scale, ndrtypes.uchar_t ()),
        NDR_MEMBER(tagDEC, sign, ndrtypes.uchar_t ()),
        NDR_MEMBER(tagDEC, Hi32, ndrtypes.ulong_t ()),
        NDR_MEMBER(tagDEC, Lo64, ndrtypes.uhyper_t ()),
        };

    return ndrtypes.struct_t (5, m);
    }

NdrTypeDesc StructDesc_tagBLOB (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(tagBLOB, cbSize, ndrtypes.ulong_t ()),
        NDR_MEMBERX(tagBLOB, pBlobData, ndrtypes.pointer_t(ndrtypes.carray_t(ndrtypes.uchar_t (), NDR_SIZEOF(BYTE))), 0),
        };

    return ndrtypes.struct_t (2, m, 0);
    }

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc_tagMULTI_QI (NDRTYPES& ndrtypes)
    {
    NdrMemberInfo m [] =
        {
        NDR_MEMBER(tagMULTI_QI, pIID, ndrtypes.pointer_t(StructDesc__GUID (ndrtypes))),
        NDR_MEMBER(tagMULTI_QI, pItf, ndrtypes.interfaceptr_t (IID_IUnknown)),
        NDR_MEMBER(tagMULTI_QI, hr, ndrtypes.long_t ()),
        };

    return ndrtypes.struct_t (3, m);
    }

NdrTypeDesc StructDesc_tagMULTI_QI(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc_tagMULTI_QI(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

HRESULT STDMETHODCALLTYPE IEnumGUID_Next_vxproxy (IEnumGUID* pThis, ULONG celt, GUID* rgelt, ULONG* pceltFetched)
    {
    RPC_PROXY_MSG	msg (IID_IEnumGUID, RpcMode::OBJECT, 3, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&celt, pms, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&rgelt, pus, ndrtypes.refptr_t(ndrtypes.cvarray_t(StructDesc__GUID (ndrtypes), NDR_SIZEOF(GUID)))); if (FAILED(hr)) return hr;
    hr=widlUnmarshal (&pceltFetched, pus, ndrtypes.refptr_t(ndrtypes.ulong_t ())); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumGUID_Next_vxstub (IEnumGUID* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    ULONG celt;
    hr=widlUnmarshal (&celt, pus, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    GUID* rgelt = (GUID*) CoTaskMemAlloc (NDR_SIZEOF(GUID) * celt);
    ULONG pceltFetched_tmp;
    ULONG* pceltFetched = &pceltFetched_tmp;
    hrMethod = pitf->Next (celt, rgelt, pceltFetched);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&rgelt, pms, ndrtypes.refptr_t(ndrtypes.cvarray_t(StructDesc__GUID (ndrtypes), NDR_SIZEOF(GUID), *pceltFetched, celt))); if (FAILED(hr)) return hr;
    hr=widlMarshal (&pceltFetched, pms, ndrtypes.refptr_t(ndrtypes.ulong_t ())); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    CoTaskMemFree (rgelt);
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IEnumGUID_Skip_vxproxy (IEnumGUID* pThis, ULONG celt)
    {
    RPC_PROXY_MSG	msg (IID_IEnumGUID, RpcMode::OBJECT, 4, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&celt, pms, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumGUID_Skip_vxstub (IEnumGUID* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    ULONG celt;
    hr=widlUnmarshal (&celt, pus, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hrMethod = pitf->Skip (celt);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IEnumGUID_Reset_vxproxy (IEnumGUID* pThis)
    {
    RPC_PROXY_MSG	msg (IID_IEnumGUID, RpcMode::OBJECT, 5, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumGUID_Reset_vxstub (IEnumGUID* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    hrMethod = pitf->Reset ();

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IEnumGUID_Clone_vxproxy (IEnumGUID* pThis, IEnumGUID** ppenum)
    {
    RPC_PROXY_MSG	msg (IID_IEnumGUID, RpcMode::OBJECT, 6, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&ppenum, pus, ndrtypes.refptr_t(ndrtypes.interfaceptr_t (IID_IEnumGUID))); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumGUID_Clone_vxstub (IEnumGUID* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    IEnumGUID* ppenum_tmp = 0;
    IEnumGUID** ppenum = &ppenum_tmp;
    hrMethod = pitf->Clone (ppenum);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&ppenum, pms, ndrtypes.refptr_t(ndrtypes.interfaceptr_t (IID_IEnumGUID))); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    if ((*ppenum)) {((*ppenum))->Release ();};
    return S_OK;
    }

COM_VTABLE(IEnumGUID) IEnumGUID_vxproxy_vtbl = {
    COM_VTBL_HEADER
    COM_VTBL_METHOD(&IUnknown_QueryInterface_vxproxy),
    COM_VTBL_METHOD(&IUnknown_AddRef_vxproxy),
    COM_VTBL_METHOD(&IUnknown_Release_vxproxy),
    COM_VTBL_METHOD(&IEnumGUID_Next_vxproxy),
    COM_VTBL_METHOD(&IEnumGUID_Skip_vxproxy),
    COM_VTBL_METHOD(&IEnumGUID_Reset_vxproxy),
    COM_VTBL_METHOD(&IEnumGUID_Clone_vxproxy),
    };

const PFN_ORPC_STUB stub_functbl_IEnumGUID [] =
    {
    0,0,0,
    (PFN_ORPC_STUB) IEnumGUID_Next_vxstub,
    (PFN_ORPC_STUB) IEnumGUID_Skip_vxstub,
    (PFN_ORPC_STUB) IEnumGUID_Reset_vxstub,
    (PFN_ORPC_STUB) IEnumGUID_Clone_vxstub,
    };

EXTERN_C const VXDCOM_STUB_DISPTBL IEnumGUID_vxstub_disptbl =
    {
    7,
    stub_functbl_IEnumGUID
    };

VXDCOM_PS_AUTOREGISTER(IEnumGUID);

HRESULT STDMETHODCALLTYPE IEnumString_Next_vxproxy (IEnumString* pThis, ULONG celt, LPOLESTR* rgelt, ULONG* pceltFetched)
    {
    RPC_PROXY_MSG	msg (IID_IEnumString, RpcMode::OBJECT, 3, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&celt, pms, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&rgelt, pus, ndrtypes.refptr_t(ndrtypes.cvarray_t(ndrtypes.pointer_t(ndrtypes.wstring_t ()), NDR_SIZEOF(LPOLESTR)))); if (FAILED(hr)) return hr;
    hr=widlUnmarshal (&pceltFetched, pus, ndrtypes.refptr_t(ndrtypes.ulong_t ())); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumString_Next_vxstub (IEnumString* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    ULONG celt;
    hr=widlUnmarshal (&celt, pus, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    LPOLESTR* rgelt = (LPOLESTR*) CoTaskMemAlloc (NDR_SIZEOF(LPOLESTR) * celt);
    ULONG pceltFetched_tmp;
    ULONG* pceltFetched = &pceltFetched_tmp;
    hrMethod = pitf->Next (celt, rgelt, pceltFetched);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&rgelt, pms, ndrtypes.refptr_t(ndrtypes.cvarray_t(ndrtypes.pointer_t(ndrtypes.wstring_t ()), NDR_SIZEOF(LPOLESTR), *pceltFetched, celt))); if (FAILED(hr)) return hr;
    hr=widlMarshal (&pceltFetched, pms, ndrtypes.refptr_t(ndrtypes.ulong_t ())); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    {for (DWORD __ix=0; __ix < *pceltFetched; ++__ix) {if ((rgelt[__ix])) {CoTaskMemFree ((rgelt[__ix]));}}};
    CoTaskMemFree (rgelt);
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IEnumString_Skip_vxproxy (IEnumString* pThis, ULONG celt)
    {
    RPC_PROXY_MSG	msg (IID_IEnumString, RpcMode::OBJECT, 4, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&celt, pms, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumString_Skip_vxstub (IEnumString* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    ULONG celt;
    hr=widlUnmarshal (&celt, pus, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hrMethod = pitf->Skip (celt);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IEnumString_Reset_vxproxy (IEnumString* pThis)
    {
    RPC_PROXY_MSG	msg (IID_IEnumString, RpcMode::OBJECT, 5, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumString_Reset_vxstub (IEnumString* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    hrMethod = pitf->Reset ();

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IEnumString_Clone_vxproxy (IEnumString* pThis, IEnumString** ppenum)
    {
    RPC_PROXY_MSG	msg (IID_IEnumString, RpcMode::OBJECT, 6, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&ppenum, pus, ndrtypes.refptr_t(ndrtypes.interfaceptr_t (IID_IEnumString))); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumString_Clone_vxstub (IEnumString* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    IEnumString* ppenum_tmp = 0;
    IEnumString** ppenum = &ppenum_tmp;
    hrMethod = pitf->Clone (ppenum);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&ppenum, pms, ndrtypes.refptr_t(ndrtypes.interfaceptr_t (IID_IEnumString))); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    if ((*ppenum)) {((*ppenum))->Release ();};
    return S_OK;
    }

COM_VTABLE(IEnumString) IEnumString_vxproxy_vtbl = {
    COM_VTBL_HEADER
    COM_VTBL_METHOD(&IUnknown_QueryInterface_vxproxy),
    COM_VTBL_METHOD(&IUnknown_AddRef_vxproxy),
    COM_VTBL_METHOD(&IUnknown_Release_vxproxy),
    COM_VTBL_METHOD(&IEnumString_Next_vxproxy),
    COM_VTBL_METHOD(&IEnumString_Skip_vxproxy),
    COM_VTBL_METHOD(&IEnumString_Reset_vxproxy),
    COM_VTBL_METHOD(&IEnumString_Clone_vxproxy),
    };

const PFN_ORPC_STUB stub_functbl_IEnumString [] =
    {
    0,0,0,
    (PFN_ORPC_STUB) IEnumString_Next_vxstub,
    (PFN_ORPC_STUB) IEnumString_Skip_vxstub,
    (PFN_ORPC_STUB) IEnumString_Reset_vxstub,
    (PFN_ORPC_STUB) IEnumString_Clone_vxstub,
    };

EXTERN_C const VXDCOM_STUB_DISPTBL IEnumString_vxstub_disptbl =
    {
    7,
    stub_functbl_IEnumString
    };

VXDCOM_PS_AUTOREGISTER(IEnumString);

HRESULT STDMETHODCALLTYPE IEnumUnknown_Next_vxproxy (IEnumUnknown* pThis, ULONG celt, IUnknown** rgelt, ULONG* pceltFetched)
    {
    RPC_PROXY_MSG	msg (IID_IEnumUnknown, RpcMode::OBJECT, 3, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&celt, pms, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&rgelt, pus, ndrtypes.refptr_t(ndrtypes.cvarray_t(ndrtypes.interfaceptr_t (IID_IUnknown), NDR_SIZEOF(IUnknown*)))); if (FAILED(hr)) return hr;
    hr=widlUnmarshal (&pceltFetched, pus, ndrtypes.refptr_t(ndrtypes.ulong_t ())); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumUnknown_Next_vxstub (IEnumUnknown* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    ULONG celt;
    hr=widlUnmarshal (&celt, pus, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    IUnknown** rgelt = (IUnknown**) CoTaskMemAlloc (NDR_SIZEOF(IUnknown*) * celt);
    ULONG pceltFetched_tmp;
    ULONG* pceltFetched = &pceltFetched_tmp;
    hrMethod = pitf->Next (celt, rgelt, pceltFetched);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&rgelt, pms, ndrtypes.refptr_t(ndrtypes.cvarray_t(ndrtypes.interfaceptr_t (IID_IUnknown), NDR_SIZEOF(IUnknown*), *pceltFetched, celt))); if (FAILED(hr)) return hr;
    hr=widlMarshal (&pceltFetched, pms, ndrtypes.refptr_t(ndrtypes.ulong_t ())); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    {for (DWORD __ix=0; __ix < *pceltFetched; ++__ix) {if ((rgelt[__ix])) {((rgelt[__ix]))->Release ();}}};
    CoTaskMemFree (rgelt);
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IEnumUnknown_Skip_vxproxy (IEnumUnknown* pThis, ULONG celt)
    {
    RPC_PROXY_MSG	msg (IID_IEnumUnknown, RpcMode::OBJECT, 4, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&celt, pms, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumUnknown_Skip_vxstub (IEnumUnknown* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    ULONG celt;
    hr=widlUnmarshal (&celt, pus, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hrMethod = pitf->Skip (celt);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IEnumUnknown_Reset_vxproxy (IEnumUnknown* pThis)
    {
    RPC_PROXY_MSG	msg (IID_IEnumUnknown, RpcMode::OBJECT, 5, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumUnknown_Reset_vxstub (IEnumUnknown* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    hrMethod = pitf->Reset ();

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IEnumUnknown_Clone_vxproxy (IEnumUnknown* pThis, IEnumUnknown** ppenum)
    {
    RPC_PROXY_MSG	msg (IID_IEnumUnknown, RpcMode::OBJECT, 6, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&ppenum, pus, ndrtypes.refptr_t(ndrtypes.interfaceptr_t (IID_IEnumUnknown))); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IEnumUnknown_Clone_vxstub (IEnumUnknown* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    IEnumUnknown* ppenum_tmp = 0;
    IEnumUnknown** ppenum = &ppenum_tmp;
    hrMethod = pitf->Clone (ppenum);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&ppenum, pms, ndrtypes.refptr_t(ndrtypes.interfaceptr_t (IID_IEnumUnknown))); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    if ((*ppenum)) {((*ppenum))->Release ();};
    return S_OK;
    }

COM_VTABLE(IEnumUnknown) IEnumUnknown_vxproxy_vtbl = {
    COM_VTBL_HEADER
    COM_VTBL_METHOD(&IUnknown_QueryInterface_vxproxy),
    COM_VTBL_METHOD(&IUnknown_AddRef_vxproxy),
    COM_VTBL_METHOD(&IUnknown_Release_vxproxy),
    COM_VTBL_METHOD(&IEnumUnknown_Next_vxproxy),
    COM_VTBL_METHOD(&IEnumUnknown_Skip_vxproxy),
    COM_VTBL_METHOD(&IEnumUnknown_Reset_vxproxy),
    COM_VTBL_METHOD(&IEnumUnknown_Clone_vxproxy),
    };

const PFN_ORPC_STUB stub_functbl_IEnumUnknown [] =
    {
    0,0,0,
    (PFN_ORPC_STUB) IEnumUnknown_Next_vxstub,
    (PFN_ORPC_STUB) IEnumUnknown_Skip_vxstub,
    (PFN_ORPC_STUB) IEnumUnknown_Reset_vxstub,
    (PFN_ORPC_STUB) IEnumUnknown_Clone_vxstub,
    };

EXTERN_C const VXDCOM_STUB_DISPTBL IEnumUnknown_vxstub_disptbl =
    {
    7,
    stub_functbl_IEnumUnknown
    };

VXDCOM_PS_AUTOREGISTER(IEnumUnknown);



