
@interface _UITextAttributeDictionaryImplI : NSMutableDictionary {
    <_UITextAttributeDefaults> * _fallback;
    NSMutableSet * _ignoring;
    NSMutableDictionary * _storage;
}

+ (Class)_ignoringClass;
+ (bool)_isMutable;
+ (Class)_storageClass;

- (void).cxx_destruct;
- (id)_fullDictionary;
- (id)_initWithDictionary:(id)arg1 copyItems:(bool)arg2 fallback:(id)arg3;
- (id)_initWithStorage:(id)arg1 fallback:(id)arg2 ignoring:(id)arg3;
- (id)_keysIfThereIsFallback;
- (void)_removeFallbackFromStorage;
- (id)allKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)fallback;
- (unsigned long long)hash;
- (bool)ignoresFallbackForKey:(id)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(bool)arg2;
- (id)initWithDictionary:(id)arg1 fallback:(id)arg2;
- (id)initWithFallback:(id)arg1;
- (bool)isEqualToDictionary:(id)arg1;
- (bool)isNSDictionary__;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (id)sparseDictionary;
- (bool)usesFallbackForKey:(id)arg1;

@end
