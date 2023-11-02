
@interface MSSharedTripBlockedItem : MapsSync.MapsSyncObject {
    void _expiryTime;
    void _sharedTripIdentifier;
}

@property (nonatomic) long long expiryTime;
@property (nonatomic, copy) NSString *sharedTripIdentifier;

+ (Class)managedClass;

- (void).cxx_destruct;
- (long long)expiryTime;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 expiryTime:(long long)arg2 sharedTripIdentifier:(id)arg3;
- (void)setExpiryTime:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setSharedTripIdentifier:(id)arg1;
- (id)sharedTripIdentifier;

@end
