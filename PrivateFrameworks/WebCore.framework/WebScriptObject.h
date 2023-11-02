
@interface WebScriptObject : NSObject {
    WebScriptObjectPrivate * _private;
}

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

+ (id)_convertValueToObjcValue:(struct JSValue { union EncodedValueDescriptor { long long x_1_1_1; struct JSCell {} *x_1_1_2; struct { int x_3_2_1; int x_3_2_2; } x_1_1_3; } x1; })arg1 originRootObject:(void*)arg2 rootObject:(void*)arg3;
+ (void)initialize;
+ (id)scriptObjectForJSObject:(struct OpaqueJSValue { }*)arg1 originRootObject:(void*)arg2 rootObject:(void*)arg3;
+ (bool)throwException:(id)arg1;

- (struct OpaqueJSValue { }*)JSObject;
- (id)JSValue;
- (struct OpaqueJSContext { }*)_globalContextRef;
- (bool)_hasImp;
- (void*)_imp;
- (id)_initWithJSObject:(void*)arg1 originRootObject:(void*)arg2 rootObject:(void*)arg3;
- (bool)_isSafeScript;
- (void*)_originRootObject;
- (void*)_rootObject;
- (void)_setImp:(void*)arg1 originRootObject:(void*)arg2 rootObject:(void*)arg3;
- (void)_setOriginRootObject:(void*)arg1 andRootObject:(void*)arg2;
- (id)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (void)dealloc;
- (id)evaluateWebScript:(id)arg1;
- (bool)hasWebScriptKey:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (oneway void)release;
- (void)removeWebScriptKey:(id)arg1;
- (void)setException:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setWebScriptValueAtIndex:(unsigned int)arg1 value:(id)arg2;
- (id)stringRepresentation;
- (id)valueForKey:(id)arg1;
- (id)webScriptValueAtIndex:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_init;
- (void)_initializeScriptDOMNodeImp;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (id)copyArrayOrDictionaryWithContext:(struct OpaqueJSContext { }*)arg1;
- (id)copyArrayValueWithValidator:(int (*)arg1 context:(void*)arg2;
- (id)copyDate;
- (id)copyJSONDataWithContext:(struct OpaqueJSContext { }*)arg1;
- (id)copyValuesForKeys:(id)arg1;
- (id)safeCallWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (id)safeValueForKey:(id)arg1;

@end
