
@interface MSHistoryDirectionsItem : MSHistoryItem {
    void _navigationInterrupted;
    void _routeRequestStorage;
    void _sharedETAData;
}

@property (nonatomic) bool navigationInterrupted;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;

+ (Class)managedClass;

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 navigationInterrupted:(bool)arg2 routeRequestStorage:(id)arg3 sharedETAData:(id)arg4;
- (bool)navigationInterrupted;
- (id)routeRequestStorage;
- (void)setNavigationInterrupted:(bool)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setRouteRequestStorage:(id)arg1;
- (void)setSharedETAData:(id)arg1;
- (id)sharedETAData;

@end
