
@interface CNMutableMultiDictionary : CNMultiDictionary

- (void)addNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectsForKey:(id)arg1;
- (void)setObjects:(id)arg1 forKey:(id)arg2;

@end
