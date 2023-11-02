
@interface HMFMutableOrderedDictionary : HMFOrderedDictionary <HMFMutableAssociativeCollection>

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;
@property (readonly) unsigned long long count;

- (id)allKeys;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2 copyObjects:(bool)arg3 copyKeys:(bool)arg4;
- (id)initWithObjects:(id)arg1 orderedKeySet:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setBySortingDictionary:(id)arg1;
- (void)setBySortingDictionary:(id)arg1 keyComparator:(id /* block */)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setOrderedDictionary:(id)arg1;

@end
