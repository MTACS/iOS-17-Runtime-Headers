
@interface MapsSync.MapsSyncMutableHistoryDirectionsItem : MapsSync.MapsSyncMutableHistoryItem {
    void _proxyHistory;
}

@property (nonatomic) bool navigationInterrupted;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)arg1;
- (bool)navigationInterrupted;
- (id)routeRequestStorage;
- (void)setNavigationInterrupted:(bool)arg1;
- (void)setRouteRequestStorage:(id)arg1;
- (void)setSharedETAData:(id)arg1;
- (id)sharedETAData;

@end
