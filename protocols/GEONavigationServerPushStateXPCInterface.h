
@protocol GEONavigationServerPushStateXPCInterface <NSObject>

@required

- (void)setArrivedAtWaypoint:(GEOComposedWaypoint *)arg1 endOfLegIndex:(unsigned long long)arg2;
- (void)setCurrentRoadName:(NSString *)arg1;
- (void)setETAUpdate:(GEOArrivalTimeAndDistanceInfo *)arg1;
- (void)setLocation:(GEOLocation *)arg1 routeMatchedCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2 isResumingMultipointRoute:(bool)arg3;
- (void)setNavigationVoiceVolumeWithData:(NSData *)arg1;
- (void)setResumedNavigatingFromWaypoint:(GEOComposedWaypoint *)arg1 endOfLegIndex:(unsigned long long)arg2;
- (void)setRoute:(GEOComposedRoute *)arg1;
- (void)setRouteSummaryWithActiveRouteDetailsData:(NSData *)arg1;
- (void)setRouteSummaryWithGuidanceStateData:(NSData *)arg1;
- (void)setRouteSummaryWithNavigationRouteSummaryData:(NSData *)arg1;
- (void)setRouteSummaryWithPositionFromDestinationData:(NSData *)arg1;
- (void)setRouteSummaryWithPositionFromManeuverData:(NSData *)arg1;
- (void)setRouteSummaryWithPositionFromSignData:(NSData *)arg1;
- (void)setRouteSummaryWithRideSelectionsData:(NSData *)arg1;
- (void)setRouteSummaryWithStepIndexData:(NSData *)arg1;
- (void)setRouteSummaryWithStepNameInfoData:(NSData *)arg1;
- (void)setRouteSummaryWithTransitSummaryData:(NSData *)arg1;
- (void)updateTrafficForCurrentRoute:(GEOComposedRouteTraffic *)arg1;

@end
