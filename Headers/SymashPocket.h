//
//  SymashPocket.h
//  SymashPocket
//
//  Created by tyrant.jorris on 2018/8/9.
//  Copyright © 2018 uaex. All rights reserved.
//

#if __has_include(<SymashSupport/SymashSupport.h>)
#import <SymashSupport/SymashSupport.h>

#ifndef __SYMASH__

#undef SYMASH_FX
#define SYMASH_FX(_Fn, _E, ...) _E

#endif

#else

#ifdef __SYMASH__
#error "please install SymashSupport.framework!"
#endif

#define SYMASH_READONLY_DECL
#define SYMASH_EXPORT_IOS

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

// ---------------------- deprecated ----------------------

#define SYMASH_POD_DEPENDENCY(_POD)

#define SYMASH_SELECTOR(POD, SEL) @selector(SEL)
#define SYMASH_SELECTOR2(POD, SEL, BIND) SYMASH_SELECTOR(POD, SEL)

#define SYMASH_NSSTRING(POD, TAG, STR) (@"" STR @"")
#define SYMASH_NSSTRING2(POD, TAG, STR, BIND) SYMASH_NSSTRING(POD, TAG, STR)

#define SYMASH_CSTRING(POD, TAG, STR) ("" STR "")
#define SYMASH_CSTRING2(POD, TAG, STR, BIND) SYMASH_CSTRING(POD, TAG, STR)

#define SYMASH_OCRT(POD, EXPR) EXPR
#define SYMASH_OCRT2(POD, EXPR, BIND) SYMASH_OCRT(POD, EXPR)

// ---------------------- deprecated ----------------------

#endif
