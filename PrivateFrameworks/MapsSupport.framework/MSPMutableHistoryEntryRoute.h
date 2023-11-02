
@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute> {
    <MSPRouteInformationSource> * _routeInformationSource;
}

@property (nonatomic, readonly) NSData *archivedSharedTripData;
@property (nonatomic, readonly) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readonly) GEOCyclingOptions *cyclingOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *endWaypoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (getter=navigationWasInterrupted, nonatomic) bool navigationInterrupted;
@property (nonatomic, readonly) bool navigationWasInterrupted;
@property (nonatomic, readonly) GEOURLRouteHandle *routeHandle;
@property (nonatomic, copy) <MSPRouteInformationSource> *routeInformationSource;
@property (nonatomic, readonly) GEOComposedWaypoint *startWaypoint;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tracksRAPReportingOnly;
@property (nonatomic, readonly) GEOTransitOptions *transitOptions;
@property (nonatomic, readonly) long long transportType;
@property (nonatomic, readonly, copy) NSDate *usageDate;
@property (nonatomic, readonly) GEOWalkingOptions *walkingOptions;
@property (nonatomic, readonly) NSArray *waypoints;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (void).cxx_destruct;
- (bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)_routeRequestStorage;
- (id)archivedSharedTripData;
- (id)automobileOptions;
- (id)cyclingOptions;
- (id)endWaypoint;
- (id)identifier;
- (id)initWithStorage:(id)arg1;
- (bool)navigationWasInterrupted;
- (id)routeHandle;
- (id)routeInformationSource;
- (void)setNavigationInterrupted:(bool)arg1;
- (void)setRouteInformationSource:(id)arg1;
- (id)startWaypoint;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;
- (id)transitOptions;
- (long long)transportType;
- (id)walkingOptions;
- (id)waypoints;

@end
