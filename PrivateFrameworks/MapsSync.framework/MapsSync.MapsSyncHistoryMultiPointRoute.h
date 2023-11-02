
@interface MapsSync.MapsSyncHistoryMultiPointRoute : MapsSync.MapsSyncHistoryItem <MapsSyncHistoryEvDirectionsItem> {
    void _navigationInterrupted;
    void _requiredCharge;
    void _routeProgressWaypointIndex;
    void _routeRequestStorage;
    void _sharedETAData;
    void _type;
    void _vehicleIdentifier;
}

@property (nonatomic, readonly, copy) NSDate *createTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) bool navigationInterrupted;
@property (nonatomic, readonly) double requiredBatteryCharge;
@property (nonatomic, readonly) NSNumber *requiredCharge;
@property (nonatomic, readonly) short routeProgressWaypointIndex;
@property (nonatomic, readonly) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, readonly) NSData *sharedETAData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly, copy) NSString *vehicleIdentifier;
@property (nonatomic, readonly) NSString *vehicleIdentifier;

// Image: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)description;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (bool)navigationInterrupted;
- (id)requiredCharge;
- (short)routeProgressWaypointIndex;
- (id)routeRequestStorage;
- (void)setPropertiesWithObject:(id)arg1;
- (id)sharedETAData;
- (short)type;
- (id)vehicleIdentifier;

// Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions

- (double)requiredBatteryCharge;

@end
