
@interface MSCommunityID : MapsSync.MapsSyncObject {
    void _communityIdentifier;
    void _expired;
    void _positionIndex;
    void _rapRecordChanges;
    void _reviewedPlaceChanges;
    void _usedCount;
}

@property (nonatomic, copy) NSString *communityIdentifier;
@property (nonatomic) bool expired;
@property (nonatomic) long long positionIndex;
@property (nonatomic) long long usedCount;

+ (Class)managedClass;

- (void).cxx_destruct;
- (void)addRapRecord:(id)arg1;
- (void)addReviewedPlace:(id)arg1;
- (id)communityIdentifier;
- (bool)expired;
- (id)fetchRapRecords;
- (id)fetchReviewedPlaces;
- (void)flushChanges;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 communityIdentifier:(id)arg2 expired:(bool)arg3 positionIndex:(long long)arg4 usedCount:(long long)arg5;
- (long long)positionIndex;
- (void)removeRapRecord:(id)arg1;
- (void)removeReviewedPlace:(id)arg1;
- (void)setCommunityIdentifier:(id)arg1;
- (void)setExpired:(bool)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setUsedCount:(long long)arg1;
- (long long)usedCount;

@end
