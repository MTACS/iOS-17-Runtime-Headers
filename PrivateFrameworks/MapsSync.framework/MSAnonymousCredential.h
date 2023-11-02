
@interface MSAnonymousCredential : MapsSync.MapsSyncObject {
    void _anonymousId;
    void _mapsToken;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _mapsTokenCreatedAt;
    void _mapsTokenTTL;
    void _positionIndex;
    void _reviewedPlaceChanges;
}

@property (nonatomic, copy) NSData *anonymousId;
@property (nonatomic, copy) NSData *mapsToken;
@property (nonatomic, copy) NSDate *mapsTokenCreatedAt;
@property (nonatomic) long long mapsTokenTTL;
@property (nonatomic) long long positionIndex;

+ (Class)managedClass;

- (void).cxx_destruct;
- (void)addReviewedPlace:(id)arg1;
- (id)anonymousId;
- (id)fetchReviewedPlaces;
- (void)flushChanges;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 anonymousId:(id)arg2 mapsToken:(id)arg3 mapsTokenCreatedAt:(id)arg4 mapsTokenTTL:(long long)arg5 positionIndex:(long long)arg6;
- (id)mapsToken;
- (id)mapsTokenCreatedAt;
- (long long)mapsTokenTTL;
- (long long)positionIndex;
- (void)removeReviewedPlace:(id)arg1;
- (void)setAnonymousId:(id)arg1;
- (void)setMapsToken:(id)arg1;
- (void)setMapsTokenCreatedAt:(id)arg1;
- (void)setMapsTokenTTL:(long long)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;

@end
