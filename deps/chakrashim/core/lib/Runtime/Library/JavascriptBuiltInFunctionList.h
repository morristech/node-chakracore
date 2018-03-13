//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft Corporation and contributors. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------

#ifndef BUILTIN_TEMPLATE
#define BUILTIN_TEMPLATE(c, n, e, i) BUILTIN(c, n, e, i)
#endif

BUILTIN(JavascriptExceptionOperators, StackTraceAccessor, StackTraceAccessor, FunctionInfo::DoNotProfile)
BUILTIN(JavascriptExceptionOperators, ThrowTypeErrorRestrictedPropertyAccessor, ThrowTypeErrorRestrictedPropertyAccessor, FunctionInfo::DoNotProfile)
BUILTIN(JavascriptOperators, DefaultAccessor, DefaultAccessor, FunctionInfo::DoNotProfile)
BUILTIN(GlobalObject, Eval, EntryEval, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, ParseInt, EntryParseInt, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, ParseFloat, EntryParseFloat, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, IsNaN, EntryIsNaN, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, IsFinite, EntryIsFinite, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, DecodeURI, EntryDecodeURI, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, DecodeURIComponent, EntryDecodeURIComponent, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, EncodeURI, EntryEncodeURI, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, EncodeURIComponent, EntryEncodeURIComponent, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, Escape, EntryEscape, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, UnEscape, EntryUnEscape, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, CollectGarbage, EntryCollectGarbage, FunctionInfo::ErrorOnNew)

#if ENABLE_TTD
BUILTIN(GlobalObject, TelemetryLog, EntryTelemetryLog, FunctionInfo::ErrorOnNew)

BUILTIN(GlobalObject, EnabledDiagnosticsTrace, EntryEnabledDiagnosticsTrace, FunctionInfo::ErrorOnNew)
BUILTIN(GlobalObject, EmitTTDLog, EntryEmitTTDLog, FunctionInfo::ErrorOnNew)
#endif

#ifdef ENABLE_DEBUG_CONFIG_OPTIONS
BUILTIN(GlobalObject, ChWriteTraceEvent, EntryChWriteTraceEvent, FunctionInfo::ErrorOnNew)
#endif

#ifdef IR_VIEWER
    BUILTIN(GlobalObject, ParseIR, EntryParseIR, FunctionInfo::ErrorOnNew)
    BUILTIN(GlobalObject, FunctionList, EntryFunctionList, FunctionInfo::ErrorOnNew)
    BUILTIN(GlobalObject, RejitFunction, EntryRejitFunction, FunctionInfo::ErrorOnNew)
#endif /* IR_VIEWER */

BUILTIN(JavascriptArray, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptArray, Concat, EntryConcat, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Every, EntryEvery, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Filter, EntryFilter, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, ForEach, EntryForEach, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, IndexOf, EntryIndexOf, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Includes, EntryIncludes, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Join, EntryJoin, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, LastIndexOf, EntryLastIndexOf, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Map, EntryMap, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Pop, EntryPop, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Push, EntryPush, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Reduce, EntryReduce, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, ReduceRight, EntryReduceRight, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Reverse, EntryReverse, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Shift, EntryShift, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Slice, EntrySlice, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Some, EntrySome, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Sort, EntrySort, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Splice, EntrySplice, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, ToString, EntryToString, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptArray, ToLocaleString, EntryToLocaleString, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Unshift, EntryUnshift, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, IsArray, EntryIsArray, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Find, EntryFind, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, FindIndex, EntryFindIndex, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Entries, EntryEntries, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Keys, EntryKeys, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Values, EntryValues, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Fill, EntryFill, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, CopyWithin, EntryCopyWithin, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, Of, EntryOf, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, GetterSymbolSpecies, EntryGetterSymbolSpecies, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArray, From, EntryFrom, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptBoolean, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptBoolean, ValueOf, EntryValueOf, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect | FunctionInfo::CanBeHoisted)
BUILTIN(JavascriptBoolean, ToString, EntryToString, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect | FunctionInfo::CanBeHoisted)
BUILTIN(JavascriptDate, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptDate, GetDate, EntryGetDate, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetDay, EntryGetDay, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetFullYear, EntryGetFullYear, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetYear, EntryGetYear, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetHours, EntryGetHours, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetMilliseconds, EntryGetMilliseconds, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetMinutes, EntryGetMinutes, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetMonth, EntryGetMonth, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetSeconds, EntryGetSeconds, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetTime, EntryGetTime, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetTimezoneOffset, EntryGetTimezoneOffset, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetUTCDate, EntryGetUTCDate, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetUTCDay, EntryGetUTCDay, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetUTCFullYear, EntryGetUTCFullYear, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetUTCHours, EntryGetUTCHours, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetUTCMilliseconds, EntryGetUTCMilliseconds, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetUTCMinutes, EntryGetUTCMinutes, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetUTCMonth, EntryGetUTCMonth, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetUTCSeconds, EntryGetUTCSeconds, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, GetVarDate, EntryGetVarDate, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, Now, EntryNow, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, Parse, EntryParse, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetDate, EntrySetDate, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetFullYear, EntrySetFullYear, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetYear, EntrySetYear, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetHours, EntrySetHours, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetMilliseconds, EntrySetMilliseconds, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetMinutes, EntrySetMinutes, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetMonth, EntrySetMonth, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetSeconds, EntrySetSeconds, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetTime, EntrySetTime, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetUTCDate, EntrySetUTCDate, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetUTCFullYear, EntrySetUTCFullYear, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetUTCHours, EntrySetUTCHours, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetUTCMilliseconds, EntrySetUTCMilliseconds, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetUTCMinutes, EntrySetUTCMinutes, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetUTCMonth, EntrySetUTCMonth, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, SetUTCSeconds, EntrySetUTCSeconds, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, ToDateString, EntryToDateString, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, ToISOString, EntryToISOString, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, ToJSON, EntryToJSON, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, ToLocaleDateString, EntryToLocaleDateString, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, ToLocaleString, EntryToLocaleString, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, ToLocaleTimeString, EntryToLocaleTimeString, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, ToString, EntryToString, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptDate, ToTimeString, EntryToTimeString, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, ToUTCString, EntryToUTCString, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, UTC, EntryUTC, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptDate, ValueOf, EntryValueOf, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptDate, SymbolToPrimitive, EntrySymbolToPrimitive, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptError, NewErrorInstance, NewErrorInstance, FunctionInfo::None)
BUILTIN(JavascriptError, NewEvalErrorInstance, NewEvalErrorInstance, FunctionInfo::None)
BUILTIN(JavascriptError, NewRangeErrorInstance, NewRangeErrorInstance, FunctionInfo::None)
BUILTIN(JavascriptError, NewReferenceErrorInstance, NewReferenceErrorInstance, FunctionInfo::None)
BUILTIN(JavascriptError, NewSyntaxErrorInstance, NewSyntaxErrorInstance, FunctionInfo::None)
BUILTIN(JavascriptError, NewTypeErrorInstance, NewTypeErrorInstance, FunctionInfo::None)
BUILTIN(JavascriptError, NewURIErrorInstance, NewURIErrorInstance, FunctionInfo::None)
BUILTIN(JavascriptError, NewWebAssemblyCompileErrorInstance, NewWebAssemblyCompileErrorInstance, FunctionInfo::None)
BUILTIN(JavascriptError, NewWebAssemblyRuntimeErrorInstance, NewWebAssemblyRuntimeErrorInstance, FunctionInfo::None)
BUILTIN(JavascriptError, NewWebAssemblyLinkErrorInstance, NewWebAssemblyLinkErrorInstance, FunctionInfo::None)
#ifdef ENABLE_PROJECTION
BUILTIN(JavascriptError, NewWinRTErrorInstance, NewWinRTErrorInstance, FunctionInfo::None)
#endif
BUILTIN(JavascriptError, ToString, EntryToString, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptExternalFunction, ExternalFunctionThunk, ExternalFunctionThunk, FunctionInfo::None)
BUILTIN(JavascriptExternalFunction, WrappedFunctionThunk, WrappedFunctionThunk, FunctionInfo::None)
BUILTIN(JavascriptExternalFunction, StdCallExternalFunctionThunk, StdCallExternalFunctionThunk, FunctionInfo::None)
BUILTIN(JavascriptExternalFunction, DefaultExternalFunctionThunk, DefaultExternalFunctionThunk, FunctionInfo::None)
BUILTIN(JavascriptFunction, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptFunction, PrototypeEntryPoint, PrototypeEntryPoint, FunctionInfo::DoNotProfile | FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptFunction, Apply, EntryApply, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptFunction, Bind, EntryBind, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptFunction, Call, EntryCall, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptFunction, ToString, EntryToString, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptFunction, SymbolHasInstance, EntrySymbolHasInstance, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptFunction, NewAsyncFunctionInstance, NewAsyncFunctionInstance, FunctionInfo::SkipDefaultNewObject)
#ifdef ALLOW_JIT_REPRO
BUILTIN(JavascriptFunction, InvokeJit, EntryInvokeJit, FunctionInfo::ErrorOnNew)
#endif
BUILTIN(JavascriptNumber, IsNaN, EntryIsNaN, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptNumber, IsFinite, EntryIsFinite, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptNumber, IsInteger, EntryIsInteger, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptNumber, IsSafeInteger, EntryIsSafeInteger, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptNumber, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptNumber, ToExponential, EntryToExponential, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptNumber, ToFixed, EntryToFixed, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptNumber, ToPrecision, EntryToPrecision, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptNumber, ToLocaleString, EntryToLocaleString, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptNumber, ToString, EntryToString, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptNumber, ValueOf, EntryValueOf, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptObject, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptObject, HasOwnProperty, EntryHasOwnProperty, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, PropertyIsEnumerable, EntryPropertyIsEnumerable, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, IsPrototypeOf, EntryIsPrototypeOf, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, ToLocaleString, EntryToLocaleString, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, ToString, EntryToString, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptObject, ValueOf, EntryValueOf, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptObject, DefineProperty, EntryDefineProperty, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, DefineProperties, EntryDefineProperties, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, Create, EntryCreate, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, GetOwnPropertyDescriptor, EntryGetOwnPropertyDescriptor, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, GetOwnPropertyDescriptors, EntryGetOwnPropertyDescriptors, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, GetPrototypeOf, EntryGetPrototypeOf, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, SetPrototypeOf, EntrySetPrototypeOf, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, Keys, EntryKeys, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, GetOwnPropertyNames, EntryGetOwnPropertyNames, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, GetOwnPropertySymbols, EntryGetOwnPropertySymbols, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, Seal, EntrySeal, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, Freeze, EntryFreeze, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, PreventExtensions, EntryPreventExtensions, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, IsSealed, EntryIsSealed, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, IsFrozen, EntryIsFrozen, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, IsExtensible, EntryIsExtensible, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, DefineGetter, EntryDefineGetter, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, DefineSetter, EntryDefineSetter, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, LookupGetter, EntryLookupGetter, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, LookupSetter, EntryLookupSetter, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, Is, EntryIs, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, Assign, EntryAssign, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, Values, EntryValues, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptObject, Entries, EntryEntries, FunctionInfo::ErrorOnNew)
BUILTIN(ObjectPrototypeObject, __proto__getter, Entry__proto__getter, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(ObjectPrototypeObject, __proto__setter, Entry__proto__setter, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptRegExp, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptRegExp, Exec, EntryExec, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptRegExp, Test, EntryTest, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptRegExp, ToString, EntryToString, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptRegExp, SymbolMatch, EntrySymbolMatch, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptRegExp, SymbolReplace, EntrySymbolReplace, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptRegExp, SymbolSearch, EntrySymbolSearch, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptRegExp, SymbolSplit, EntrySymbolSplit, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptRegExp, GetterSymbolSpecies, EntryGetterSymbolSpecies, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptRegExp, Compile, EntryCompile, FunctionInfo::None)
BUILTIN(JavascriptRegExp, GetterFlags, EntryGetterFlags, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptRegExp, GetterGlobal, EntryGetterGlobal, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptRegExp, GetterIgnoreCase, EntryGetterIgnoreCase, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptRegExp, GetterMultiline, EntryGetterMultiline, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptRegExp, GetterOptions, EntryGetterOptions, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptRegExp, GetterSource, EntryGetterSource, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptRegExp, GetterSticky, EntryGetterSticky, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptRegExp, GetterUnicode, EntryGetterUnicode, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptString, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptString, CharAt, EntryCharAt, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, CharCodeAt, EntryCharCodeAt, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, CodePointAt, EntryCodePointAt, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Concat, EntryConcat, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, FromCharCode, EntryFromCharCode, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, FromCodePoint, EntryFromCodePoint, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, IndexOf, EntryIndexOf, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, LastIndexOf, EntryLastIndexOf, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, LocaleCompare, EntryLocaleCompare, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Match, EntryMatch, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Normalize, EntryNormalize, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Raw, EntryRaw, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Replace, EntryReplace, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Search, EntrySearch, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Slice, EntrySlice, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Split, EntrySplit, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Substring, EntrySubstring, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Substr, EntrySubstr, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, ToLocaleLowerCase, EntryToLocaleLowerCase, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, ToLocaleUpperCase, EntryToLocaleUpperCase, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, ToLowerCase, EntryToLowerCase, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, ToString, EntryToString, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptString, ToUpperCase, EntryToUpperCase, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Trim, EntryTrim, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, TrimLeft, EntryTrimLeft, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, TrimRight, EntryTrimRight, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Repeat, EntryRepeat, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, StartsWith, EntryStartsWith, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, EndsWith, EntryEndsWith, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Includes, EntryIncludes, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Anchor, EntryAnchor, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Big, EntryBig, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Blink, EntryBlink, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Bold, EntryBold, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Fixed, EntryFixed, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, FontColor, EntryFontColor, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, FontSize, EntryFontSize, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Italics, EntryItalics, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Link, EntryLink, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Small, EntrySmall, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Strike, EntryStrike, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Sub, EntrySub, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, Sup, EntrySup, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, ValueOf, EntryValueOf, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptString, SymbolIterator, EntrySymbolIterator, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, PadStart, EntryPadStart, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptString, PadEnd, EntryPadEnd, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSymbol, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptSymbol, ValueOf, EntryValueOf, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect | FunctionInfo::CanBeHoisted)
BUILTIN(JavascriptSymbol, ToString, EntryToString, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect | FunctionInfo::CanBeHoisted)
BUILTIN(JavascriptSymbol, For, EntryFor, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSymbol, KeyFor, EntryKeyFor, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSymbol, SymbolToPrimitive, EntrySymbolToPrimitive, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptProxy, Revocable, EntryRevocable, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptProxy, Revoke, EntryRevoke, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptProxy, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(Math, Abs, Abs, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Acos, Acos, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Asin, Asin, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Atan, Atan, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Atan2, Atan2, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Ceil, Ceil, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Cos, Cos, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Exp, Exp, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Floor, Floor, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Log, Log, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Max, Max, FunctionInfo::ErrorOnNew | FunctionInfo::BuiltInInlinableAsLdFldInlinee)
BUILTIN(Math, Min, Min, FunctionInfo::ErrorOnNew | FunctionInfo::BuiltInInlinableAsLdFldInlinee)
BUILTIN(Math, Pow, Pow, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Random, Random, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Round, Round, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Sin, Sin, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Sqrt, Sqrt, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Tan, Tan, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Log10, Log10, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Log2, Log2, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Log1p, Log1p, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Expm1, Expm1, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Cosh, Cosh, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Sinh, Sinh, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Tanh, Tanh, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Acosh, Acosh, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Asinh, Asinh, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Atanh, Atanh, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Hypot, Hypot, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Trunc, Trunc, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Sign, Sign, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Cbrt, Cbrt, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Imul, Imul, FunctionInfo::ErrorOnNew)
BUILTIN(Math, Clz32, Clz32, FunctionInfo::ErrorOnNew)

// Wasm entry points
#ifdef ENABLE_WASM
BUILTIN(WebAssembly, Compile, EntryCompile, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssembly, CompileStreaming, EntryCompileStreaming, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssembly, Validate, EntryValidate, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssembly, Instantiate, EntryInstantiate, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssembly, InstantiateStreaming, EntryInstantiateStreaming, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssembly, InstantiateBound, EntryInstantiateBound, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssembly, QueryResponse, EntryQueryResponse, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssemblyModule, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(WebAssemblyModule, Exports, EntryExports, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssemblyModule, Imports, EntryImports, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssemblyModule, CustomSections, EntryCustomSections, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssemblyInstance, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(WebAssemblyInstance, GetterExports, GetterExports, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(WebAssemblyMemory, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(WebAssemblyMemory, Grow, EntryGrow, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssemblyMemory, GetterBuffer, EntryGetterBuffer, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(WebAssemblyTable, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(WebAssemblyTable, GetterLength, EntryGetterLength, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(WebAssemblyTable, Grow, EntryGrow, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssemblyTable, Get, EntryGet, FunctionInfo::ErrorOnNew)
BUILTIN(WebAssemblyTable, Set, EntrySet, FunctionInfo::ErrorOnNew)
#ifdef ENABLE_WABT
// wabt entry points
BUILTIN(WabtInterface, ConvertWast2Wasm, EntryConvertWast2Wasm, FunctionInfo::ErrorOnNew)
#endif
#endif

BUILTIN(Math, Fround, Fround, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(TypedArrayBase, Set, EntrySet, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Subarray, EntrySubarray, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Of, EntryOf, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, From, EntryFrom, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, CopyWithin, EntryCopyWithin, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Entries, EntryEntries, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Every, EntryEvery, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Fill, EntryFill, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Filter, EntryFilter, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Find, EntryFind, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, FindIndex, EntryFindIndex, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, ForEach, EntryForEach, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, IndexOf, EntryIndexOf, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Includes, EntryIncludes, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Join, EntryJoin, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Keys, EntryKeys, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, LastIndexOf, EntryLastIndexOf, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Map, EntryMap, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Reduce, EntryReduce, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, ReduceRight, EntryReduceRight, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Reverse, EntryReverse, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Slice, EntrySlice, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Some, EntrySome, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Sort, EntrySort, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, Values, EntryValues, FunctionInfo::ErrorOnNew)
BUILTIN(TypedArrayBase, GetterBuffer, EntryGetterBuffer, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(TypedArrayBase, GetterByteLength, EntryGetterByteLength, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(TypedArrayBase, GetterByteOffset, EntryGetterByteOffset, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(TypedArrayBase, GetterLength, EntryGetterLength, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(TypedArrayBase, GetterSymbolToStringTag, EntryGetterSymbolToStringTag, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(TypedArrayBase, GetterSymbolSpecies, EntryGetterSymbolSpecies, FunctionInfo::ErrorOnNew)
BUILTIN_TEMPLATE(Int8Array, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(Uint8Array, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(Uint8ClampedArray, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(Int16Array, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(Uint16Array, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(Int32Array, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(Uint32Array, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(Float32Array, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(Float64Array, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(Int64Array, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(Uint64Array, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(CharArray, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(BoolArray, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN_TEMPLATE(Int64Array, Set, EntrySet, FunctionInfo::ErrorOnNew)
BUILTIN_TEMPLATE(Uint64Array, Set, EntrySet, FunctionInfo::ErrorOnNew)
BUILTIN(CharArray, Set, EntrySet, FunctionInfo::ErrorOnNew)
BUILTIN_TEMPLATE(BoolArray, Set, EntrySet, FunctionInfo::ErrorOnNew)
BUILTIN(ArrayBuffer, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(ArrayBuffer, Slice, EntrySlice, FunctionInfo::ErrorOnNew)
BUILTIN(ArrayBuffer, IsView, EntryIsView, FunctionInfo::ErrorOnNew)
BUILTIN(ArrayBuffer, GetterByteLength, EntryGetterByteLength, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(ArrayBuffer, GetterSymbolSpecies, EntryGetterSymbolSpecies, FunctionInfo::ErrorOnNew)
#if ENABLE_DEBUG_CONFIG_OPTIONS
BUILTIN(ArrayBuffer, Detach, EntryDetach, FunctionInfo::ErrorOnNew)
#endif
BUILTIN(DataView, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(DataView, SetInt8, EntrySetInt8, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, SetUint8, EntrySetUint8, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, SetInt16, EntrySetInt16, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, SetUint16, EntrySetUint16, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, SetInt32, EntrySetInt32, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, SetUint32, EntrySetUint32, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, SetFloat32, EntrySetFloat32, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, SetFloat64, EntrySetFloat64, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, GetInt8, EntryGetInt8, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, GetUint8, EntryGetUint8, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, GetInt16, EntryGetInt16, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, GetUint16, EntryGetUint16, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, GetInt32, EntryGetInt32, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, GetUint32, EntryGetUint32, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, GetFloat32, EntryGetFloat32, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, GetFloat64, EntryGetFloat64, FunctionInfo::ErrorOnNew)
BUILTIN(DataView, GetterBuffer, EntryGetterBuffer, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(DataView, GetterByteLength, EntryGetterByteLength, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(DataView, GetterByteOffset, EntryGetterByteOffset, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(JavascriptMap, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptMap, Clear, EntryClear, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptMap, Delete, EntryDelete, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptMap, ForEach, EntryForEach, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptMap, Get, EntryGet, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptMap, Has, EntryHas, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptMap, Set, EntrySet, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptMap, SizeGetter, EntrySizeGetter, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptMap, Entries, EntryEntries, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptMap, Keys, EntryKeys, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptMap, Values, EntryValues, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptMap, GetterSymbolSpecies, EntryGetterSymbolSpecies, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSet, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptSet, Add, EntryAdd, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSet, Clear, EntryClear, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSet, Delete, EntryDelete, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSet, ForEach, EntryForEach, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSet, Has, EntryHas, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSet, SizeGetter, EntrySizeGetter, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSet, Entries, EntryEntries, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSet, Values, EntryValues, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSet, GetterSymbolSpecies, EntryGetterSymbolSpecies, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptWeakMap, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptWeakMap, Delete, EntryDelete, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptWeakMap, Get, EntryGet, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptWeakMap, Has, EntryHas, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptWeakMap, Set, EntrySet, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptWeakSet, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptWeakSet, Add, EntryAdd, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptWeakSet, Delete, EntryDelete, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptWeakSet, Has, EntryHas, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptIterator, SymbolIterator, EntrySymbolIterator, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptArrayIterator, Next, EntryNext, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptMapIterator, Next, EntryNext, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptSetIterator, Next, EntryNext, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptStringIterator, Next, EntryNext, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptListIterator, Next, EntryNext, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptPromise, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptPromise, All, EntryAll, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptPromise, Catch, EntryCatch, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptPromise, Race, EntryRace, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptPromise, Reject, EntryReject, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptPromise, Resolve, EntryResolve, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptPromise, Then, EntryThen, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptPromise, Finally, EntryFinally, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptPromise, Identity, EntryIdentityFunction, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptPromise, Thrower, EntryThrowerFunction, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptPromise, ResolveOrRejectFunction, EntryResolveOrRejectFunction, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptPromise, CapabilitiesExecutorFunction, EntryCapabilitiesExecutorFunction, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptPromise, AllResolveElementFunction, EntryAllResolveElementFunction, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptPromise, GetterSymbolSpecies, EntryGetterSymbolSpecies, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptReflect, DefineProperty, EntryDefineProperty, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, DeleteProperty, EntryDeleteProperty, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, Get, EntryGet, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, GetOwnPropertyDescriptor, EntryGetOwnPropertyDescriptor, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, GetPrototypeOf, EntryGetPrototypeOf, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, Has, EntryHas, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, IsExtensible, EntryIsExtensible, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, OwnKeys, EntryOwnKeys, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, PreventExtensions, EntryPreventExtensions, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, Set, EntrySet, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, SetPrototypeOf, EntrySetPrototypeOf, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, Apply, EntryApply, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptReflect, Construct, EntryConstruct, FunctionInfo::ErrorOnNew | FunctionInfo::DoNotProfile)
BUILTIN(JavascriptGeneratorFunction, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(JavascriptGenerator, Next, EntryNext, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptGenerator, Return, EntryReturn, FunctionInfo::ErrorOnNew)
BUILTIN(JavascriptGenerator, Throw, EntryThrow, FunctionInfo::ErrorOnNew)
BUILTIN(SharedArrayBuffer, NewInstance, NewInstance, FunctionInfo::SkipDefaultNewObject)
BUILTIN(SharedArrayBuffer, Slice, EntrySlice, FunctionInfo::ErrorOnNew)
BUILTIN(SharedArrayBuffer, GetterByteLength, EntryGetterByteLength, FunctionInfo::ErrorOnNew | FunctionInfo::HasNoSideEffect)
BUILTIN(SharedArrayBuffer, GetterSymbolSpecies, EntryGetterSymbolSpecies, FunctionInfo::ErrorOnNew)

BUILTIN(AtomicsObject, Add, EntryAdd, FunctionInfo::ErrorOnNew)
BUILTIN(AtomicsObject, And, EntryAnd, FunctionInfo::ErrorOnNew)
BUILTIN(AtomicsObject, CompareExchange, EntryCompareExchange, FunctionInfo::ErrorOnNew)
BUILTIN(AtomicsObject, Exchange, EntryExchange, FunctionInfo::ErrorOnNew)
BUILTIN(AtomicsObject, IsLockFree, EntryIsLockFree, FunctionInfo::ErrorOnNew)
BUILTIN(AtomicsObject, Load, EntryLoad, FunctionInfo::ErrorOnNew)
BUILTIN(AtomicsObject, Or, EntryOr, FunctionInfo::ErrorOnNew)
BUILTIN(AtomicsObject, Store, EntryStore, FunctionInfo::ErrorOnNew)
BUILTIN(AtomicsObject, Sub, EntrySub, FunctionInfo::ErrorOnNew)
BUILTIN(AtomicsObject, Wait, EntryWait, FunctionInfo::ErrorOnNew)
BUILTIN(AtomicsObject, Wake, EntryWake, FunctionInfo::ErrorOnNew)
BUILTIN(AtomicsObject, Xor, EntryXor, FunctionInfo::ErrorOnNew)

#undef BUILTIN_TEMPLATE