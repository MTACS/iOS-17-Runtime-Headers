
@interface EFMutableIndexMap : NSObject {
    NSMutableDictionary * _keyToTuple;
    NSMutableArray * _tuples;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSMutableDictionary *keyToTuple;
@property (nonatomic, retain) NSMutableArray *tuples;

- (void).cxx_destruct;
- (id)_tupleForKey:(long long)arg1;
- (void)addKey:(long long)arg1 atIndex:(unsigned long long)arg2;
- (void)addKey:(long long)arg1 atIndex:(unsigned long long)arg2 object:(id)arg3;
- (unsigned long long)count;
- (id)description;
- (void)enumerateKeysAndIndexesUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysIndexesAndObjectsUsingBlock:(id /* block */)arg1;
- (bool)hasKeyAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfKey:(long long)arg1;
- (id)init;
- (long long)keyAtIndex:(unsigned long long)arg1;
- (id)keyToTuple;
- (id)objectForInt64Key:(long long)arg1;
- (void)removeAllKeys;
- (bool)removeKeyAtIndex:(unsigned long long)arg1;
- (void)setKeyToTuple:(id)arg1;
- (void)setObject:(id)arg1 forKey:(long long)arg2;
- (void)setTuples:(id)arg1;
- (void)shiftKeysStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;
- (id)tuples;

@end
