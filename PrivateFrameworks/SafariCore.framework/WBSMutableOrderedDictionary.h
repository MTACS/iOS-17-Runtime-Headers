
@interface WBSMutableOrderedDictionary : NSObject {
    unsigned long long  _maximumCount;
    NSMutableDictionary * _mutableDictionary;
    WBSMutableOrderedSet * _mutableOrderedSetOfKeys;
}

@property (nonatomic, readonly) NSArray *orderedKeys;
@property (nonatomic, readonly) NSArray *orderedValues;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)orderedKeys;
- (id)orderedValues;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
