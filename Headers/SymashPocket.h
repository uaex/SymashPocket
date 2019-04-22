//
//  SymashPocket.h
//  SymashPocket
//
//  Created by tyrant.jorris on 2018/8/9.
//  Copyright © 2018 uaex. All rights reserved.
//

#if __has_include(<SymashSupport/SymashSupport.h>)
#import <SymashSupport/SymashSupport.h>

#if !defined(__SYMASH__) && defined(SYMASH_FX)

#undef  SYMASH_FX
#define SYMASH_FX(_Fn, _E, ...) _E

#endif

#else

#ifdef __SYMASH__
#error "please install SymashSupport.framework!"
#endif

#define SYMASH_READONLY_DECL

#define SYMASH_MIRROR_BRIDGE

#define SYMASH_PROPERTY_MAPPER(_sel)

#define SYMASH_PROTO_INST_PROP(_Proto, _Prop) _Prop
#define SYMASH_PROTO_META_PROP(_Proto, _Prop) _Prop
#define SYMASH_PROTO_INST_METH(_Proto, _Meth) _Meth
#define SYMASH_PROTO_META_METH(_Proto, _Meth) _Meth

#define SYMASH_CLASS_INST_PROP(_Class, _Prop) _Prop
#define SYMASH_CLASS_META_PROP(_Class, _Prop) _Prop
#define SYMASH_CLASS_INST_METH(_Class, _Meth) _Meth
#define SYMASH_CLASS_META_METH(_Class, _Meth) _Meth
#define SYMASH_CLASS_INST_IVAR(_Class, _Ivar) _Ivar

#define SYMASH_SCOPE_INST_PROP(_Prop)         _Prop
#define SYMASH_SCOPE_META_PROP(_Prop)         _Prop
#define SYMASH_SCOPE_INST_METH(_Meth)         _Meth
#define SYMASH_SCOPE_META_METH(_Meth)         _Meth
#define SYMASH_SCOPE_INST_IVAR(_Ivar)         _Ivar

#define SYMASH_GLOBAL_ENCSTR(_Id, _Init) NSString *const _Id = _Init;
#define SYMASH_ENCSTR(_Init) _Init

#endif
