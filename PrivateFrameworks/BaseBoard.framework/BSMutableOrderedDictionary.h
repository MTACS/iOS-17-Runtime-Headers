
@interface BSMutableOrderedDictionary : BSOrderedDictionary

@property (nonatomic, retain) BSOrderedDictionaryKeyStrategy *keyOrderingStrategy;

+ (bool)supportsSecureCoding;

- (void)addEntriesFromDictionary:(id)arg1;
- (void)addEntriesFromOrderedDictionary:(id)arg1;
- (void)addObject:(id)arg1 toCollectionClass:(Class)arg2 forKey:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1 keyOrderingStrategy:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 keyOrderingStrategy:(id)arg2;
- (id)initWithKeyOrderingStrategy:(id)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyOrderingStrategy;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1 fromCollectionForKey:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setKeyOrderingStrategy:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
