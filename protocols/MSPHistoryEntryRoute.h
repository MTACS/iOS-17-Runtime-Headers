
@protocol MSPHistoryEntryRoute <MSPHistoryEntry>

@required

- (NSData *)archivedSharedTripData;
- (GEOAutomobileOptions *)automobileOptions;
- (GEOCyclingOptions *)cyclingOptions;
- (GEOComposedWaypoint *)endWaypoint;
- (NSString *)identifier;
- (bool)navigationWasInterrupted;
- (GEOURLRouteHandle *)routeHandle;
- (GEOComposedWaypoint *)startWaypoint;
- (GEOTransitOptions *)transitOptions;
- (long long)transportType;
- (GEOWalkingOptions *)walkingOptions;
- (NSArray *)waypoints;

@end
