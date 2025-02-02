// Copyright (c) 2024 Epic Games Tools
// Licensed under the MIT license (https://opensource.org/license/mit/)

//- GENERATED CODE

#ifndef TYPE_GRAPH_META_H
#define TYPE_GRAPH_META_H

typedef enum TG_Kind
{
TG_Kind_Null,
TG_Kind_Void,
TG_Kind_Handle,
TG_Kind_Char8,
TG_Kind_Char16,
TG_Kind_Char32,
TG_Kind_UChar8,
TG_Kind_UChar16,
TG_Kind_UChar32,
TG_Kind_U8,
TG_Kind_U16,
TG_Kind_U32,
TG_Kind_U64,
TG_Kind_U128,
TG_Kind_U256,
TG_Kind_U512,
TG_Kind_S8,
TG_Kind_S16,
TG_Kind_S32,
TG_Kind_S64,
TG_Kind_S128,
TG_Kind_S256,
TG_Kind_S512,
TG_Kind_Bool,
TG_Kind_F16,
TG_Kind_F32,
TG_Kind_F32PP,
TG_Kind_F48,
TG_Kind_F64,
TG_Kind_F80,
TG_Kind_F128,
TG_Kind_ComplexF32,
TG_Kind_ComplexF64,
TG_Kind_ComplexF80,
TG_Kind_ComplexF128,
TG_Kind_Modifier,
TG_Kind_Ptr,
TG_Kind_LRef,
TG_Kind_RRef,
TG_Kind_Array,
TG_Kind_Function,
TG_Kind_Method,
TG_Kind_MemberPtr,
TG_Kind_Struct,
TG_Kind_Class,
TG_Kind_Union,
TG_Kind_Enum,
TG_Kind_Alias,
TG_Kind_IncompleteStruct,
TG_Kind_IncompleteUnion,
TG_Kind_IncompleteClass,
TG_Kind_IncompleteEnum,
TG_Kind_Bitfield,
TG_Kind_Variadic,
TG_Kind_COUNT,
TG_Kind_FirstBasic = TG_Kind_Void,
TG_Kind_LastBasic  = TG_Kind_ComplexF128,
TG_Kind_FirstInteger = TG_Kind_Char8,
TG_Kind_LastInteger  = TG_Kind_S512,
TG_Kind_FirstSigned1 = TG_Kind_Char8,
TG_Kind_LastSigned1  = TG_Kind_Char32,
TG_Kind_FirstSigned2 = TG_Kind_S8,
TG_Kind_LastSigned2  = TG_Kind_S512,
TG_Kind_FirstIncomplete = TG_Kind_IncompleteStruct,
TG_Kind_LastIncomplete  = TG_Kind_IncompleteEnum,
} TG_Kind;

U8 tg_kind_basic_byte_size_table[] =
{
0,
0,
0xFF,
1,
2,
4,
1,
2,
4,
1,
2,
4,
8,
16,
32,
64,
1,
2,
4,
8,
16,
32,
64,
1,
2,
4,
4,
6,
8,
10,
16,
8,
16,
20,
32,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
};

String8 tg_kind_basic_string_table[] =
{
str8_lit_comp(""),
str8_lit_comp("void"),
str8_lit_comp("HANDLE"),
str8_lit_comp("char8"),
str8_lit_comp("char16"),
str8_lit_comp("char32"),
str8_lit_comp("uchar8"),
str8_lit_comp("uchar16"),
str8_lit_comp("uchar32"),
str8_lit_comp("U8"),
str8_lit_comp("U16"),
str8_lit_comp("U32"),
str8_lit_comp("U64"),
str8_lit_comp("U128"),
str8_lit_comp("U256"),
str8_lit_comp("U512"),
str8_lit_comp("S8"),
str8_lit_comp("S16"),
str8_lit_comp("S32"),
str8_lit_comp("S64"),
str8_lit_comp("S128"),
str8_lit_comp("S256"),
str8_lit_comp("S512"),
str8_lit_comp("bool"),
str8_lit_comp("F16"),
str8_lit_comp("F32"),
str8_lit_comp("F32PP"),
str8_lit_comp("F48"),
str8_lit_comp("F64"),
str8_lit_comp("F80"),
str8_lit_comp("F128"),
str8_lit_comp("ComplexF32"),
str8_lit_comp("ComplexF64"),
str8_lit_comp("ComplexF80"),
str8_lit_comp("ComplexF128"),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
};


#endif // TYPE_GRAPH_META_H
