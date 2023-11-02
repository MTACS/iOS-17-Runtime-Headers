
@interface BNTieredArray : NSObject <NSCopying, NSFastEnumeration> {
    NSArray * _allObjects;
    NSMutableArray * _collections;
}

@property (nonatomic, readonly) NSArray *allObjects;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long tierCount;
@property (nonatomic, readonly) id topObject;
@property (nonatomic, readonly) NSArray *topObjectFromEachTier;

- (void).cxx_destruct;
- (void)_invalidateAllObjectsCache;
- (void)addObject:(id)arg1 incrementingTier:(bool)arg2;
- (id)allObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)indexPathForObject:(id)arg1;
- (void)insertObject:(id)arg1 beneathObject:(id)arg2;
- (id)objectAtIndexPath:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndexPath:(id)arg1;
- (id)tierAtIndex:(unsigned long long)arg1;
- (unsigned long long)tierCount;
- (id)topObject;
- (id)topObjectFromEachTier;
- (id)topObjectInTier:(long long)arg1;

@end
