
@interface _UITextAttributeDictionaryImplM : _UITextAttributeDictionaryImplI

+ (Class)_ignoringClass;
+ (bool)_isMutable;
+ (Class)_storageClass;

- (void)_removeFallbackFromStorage;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setFallback:(id)arg1;
- (void)setIgnoresFallback:(bool)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
