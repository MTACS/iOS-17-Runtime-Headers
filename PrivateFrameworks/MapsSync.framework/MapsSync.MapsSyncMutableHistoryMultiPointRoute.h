
@interface MapsSync.MapsSyncMutableHistoryMultiPointRoute : MapsSync.MapsSyncMutableHistoryItem {
    void _proxyHistory;
}

@property (nonatomic) bool navigationInterrupted;
@property (nonatomic, retain) NSNumber *requiredCharge;
@property (nonatomic) short routeProgressWaypointIndex;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *vehicleIdentifier;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)arg1;
- (bool)navigationInterrupted;
- (id)requiredCharge;
- (short)routeProgressWaypointIndex;
- (id)routeRequestStorage;
- (void)setNavigationInterrupted:(bool)arg1;
- (void)setRequiredCharge:(id)arg1;
- (void)setRouteProgressWaypointIndex:(short)arg1;
- (void)setRouteRequestStorage:(id)arg1;
- (void)setSharedETAData:(id)arg1;
- (void)setType:(short)arg1;
- (void)setVehicleIdentifier:(id)arg1;
- (id)sharedETAData;
- (short)type;
- (id)vehicleIdentifier;

@end
