
@interface HMMutableArray : NSObject {
    NSMutableArray * _internal;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, copy) NSArray *array;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly, copy) NSMutableArray *internal;

+ (id)array;
+ (id)arrayWithArray:(id)arg1;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (bool)addObjectIfNotPresent:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (id)array;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)firstItemWithCharacteristicType:(id)arg1;
- (id)firstItemWithInstanceID:(id)arg1;
- (id)firstItemWithName:(id)arg1;
- (id)firstItemWithUUID:(id)arg1;
- (id)firstItemWithUniqueIdentifier:(id)arg1;
- (id)firstItemWithValue:(id)arg1 forKey:(id)arg2;
- (id)initWithArray:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (id)itemsWithValue:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)replaceObject:(id)arg1;
- (void)setArray:(id)arg1;
- (void)setIfDifferent:(id)arg1;

@end
