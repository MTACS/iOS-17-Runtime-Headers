
@interface CalDefaultDictionary : NSObject <NSCopying> {
    Class  _defaultClass;
    NSMutableDictionary * _dict;
}

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 isDeepCopy:(bool)arg2;
- (id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone { }*)arg1 isDeepCopy:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)deepCopy;
- (id)existingObjectForKey:(id)arg1;
- (id)finalDictionary;
- (id)initWithDefaultClass:(Class)arg1;
- (id)keys;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setDictionary:(id)arg1;

@end
