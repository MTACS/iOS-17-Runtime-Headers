
@interface MSCuratedCollection : MapsSync.MapsSyncObject {
    void _curatedCollectionIdentifier;
    void _positionIndex;
    void _resultProviderIdentifier;
}

@property (nonatomic) unsigned long long curatedCollectionIdentifier;
@property (nonatomic) long long positionIndex;
@property (nonatomic) int resultProviderIdentifier;

+ (void)beforeFetchWithStore:(id)arg1;
+ (Class)managedClass;
+ (void)pruneCachedCuratedCollectionsWithStore:(id)arg1;

- (unsigned long long)curatedCollectionIdentifier;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 curatedCollectionIdentifier:(unsigned long long)arg2 positionIndex:(long long)arg3 resultProviderIdentifier:(int)arg4;
- (long long)positionIndex;
- (int)resultProviderIdentifier;
- (void)setCuratedCollectionIdentifier:(unsigned long long)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setResultProviderIdentifier:(int)arg1;

@end
