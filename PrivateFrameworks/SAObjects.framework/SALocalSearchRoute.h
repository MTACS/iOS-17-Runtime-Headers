
@interface SALocalSearchRoute : AceObject <SABackgroundContextObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *etaFilter;
@property (nonatomic, copy) NSData *evChargingMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *originalWaypointRoute;
@property (nonatomic, copy) NSData *routeAsZilchBinary;
@property (nonatomic, copy) NSData *routeId;
@property (nonatomic, copy) NSArray *routeIncidentOffsets;
@property (nonatomic, copy) NSArray *routeIncidents;
@property (nonatomic, copy) NSData *routeTrafficIncident;
@property (nonatomic, copy) NSData *sessionState;
@property (readonly) Class superclass;

+ (id)route;
+ (id)routeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)etaFilter;
- (id)evChargingMetadata;
- (id)groupIdentifier;
- (id)originalWaypointRoute;
- (id)routeAsZilchBinary;
- (id)routeId;
- (id)routeIncidentOffsets;
- (id)routeIncidents;
- (id)routeTrafficIncident;
- (id)sessionState;
- (void)setEtaFilter:(id)arg1;
- (void)setEvChargingMetadata:(id)arg1;
- (void)setOriginalWaypointRoute:(id)arg1;
- (void)setRouteAsZilchBinary:(id)arg1;
- (void)setRouteId:(id)arg1;
- (void)setRouteIncidentOffsets:(id)arg1;
- (void)setRouteIncidents:(id)arg1;
- (void)setRouteTrafficIncident:(id)arg1;
- (void)setSessionState:(id)arg1;

@end
