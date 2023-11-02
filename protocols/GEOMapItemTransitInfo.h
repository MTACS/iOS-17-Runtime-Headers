
@protocol GEOMapItemTransitInfo <GEOMapItemTransitSchedule>

@required

- (GEOComposedRoute *)composedRoute;
- (NSArray *)connections;
- (NSString *)displayName;
- (bool)hasTransitIncidentComponent;
- (NSArray *)incidents;
- (bool)isTransitIncidentsTTLExpired;
- (NSArray *)labelItems;
- (NSArray *)lines;
- (unsigned long long)linesCount;
- (NSArray *)linesForSystem:(id <GEOTransitSystem>)arg1;
- (<GEOTransitNearbySchedule> *)nearbySchedule;
- (NSArray *)systems;
- (unsigned long long)systemsCount;
- (NSArray *)transitTripStops;

@end
