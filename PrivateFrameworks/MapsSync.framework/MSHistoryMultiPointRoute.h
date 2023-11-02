
@interface MSHistoryMultiPointRoute : MSHistoryItem {
    void _navigationInterrupted;
    void _requiredCharge;
    void _routeProgressWaypointIndex;
    void _routeRequestStorage;
    void _sharedETAData;
    void _type;
    void _vehicleIdentifier;
}

@property (nonatomic) bool navigationInterrupted;
@property (nonatomic, retain) NSNumber *requiredCharge;
@property (nonatomic) short routeProgressWaypointIndex;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *vehicleIdentifier;

+ (Class)managedClass;

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 navigationInterrupted:(bool)arg2 requiredCharge:(id)arg3 routeProgressWaypointIndex:(short)arg4 routeRequestStorage:(id)arg5 sharedETAData:(id)arg6 type:(short)arg7 vehicleIdentifier:(id)arg8;
- (bool)navigationInterrupted;
- (id)requiredCharge;
- (short)routeProgressWaypointIndex;
- (id)routeRequestStorage;
- (void)setNavigationInterrupted:(bool)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
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
