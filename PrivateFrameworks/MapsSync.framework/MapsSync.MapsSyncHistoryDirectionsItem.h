
@interface MapsSync.MapsSyncHistoryDirectionsItem : MapsSync.MapsSyncHistoryItem {
    void _navigationInterrupted;
    void _routeRequestStorage;
    void _sharedETAData;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool navigationInterrupted;
@property (nonatomic, readonly) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, readonly) NSData *sharedETAData;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)description;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (bool)navigationInterrupted;
- (id)routeRequestStorage;
- (void)setPropertiesWithObject:(id)arg1;
- (id)sharedETAData;

@end
