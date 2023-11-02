
@interface MSCollectionItem : MapsSync.MapsSyncObject {
    void _collectionChanges;
    void _positionIndex;
}

@property (nonatomic) long long positionIndex;

+ (Class)managedClass;

- (void).cxx_destruct;
- (void)addCollection:(id)arg1;
- (id)fetchCollections;
- (void)flushChanges;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 collection:(id)arg2;
- (id)initWithStore:(id)arg1 positionIndex:(long long)arg2;
- (long long)positionIndex;
- (void)removeCollection:(id)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;

@end
