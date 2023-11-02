
@interface MapsSync.MapsSyncCommunityID : MapsSync.MapsSyncBaseItem {
    void _communityIdentifier;
    void _expired;
    void _rapRecords;
    void _reviewedPlaces;
    void _usedCount;
}

@property (nonatomic, readonly) NSString *communityIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool expired;
@property (nonatomic, readonly) NSSet *rapRecords;
@property (nonatomic, readonly) NSSet *reviewedPlaces;
@property (nonatomic, readonly) long long usedCount;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)communityIdentifier;
- (id)description;
- (bool)expired;
- (id)init;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (id)rapRecords;
- (id)reviewedPlaces;
- (void)setPropertiesWithObject:(id)arg1;
- (long long)usedCount;

@end
