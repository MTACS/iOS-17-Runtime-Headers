
@interface CNMutableOrderedDictionary : CNOrderedDictionary

- (id)initWithDictionary:(id)arg1 orderedKeys:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
