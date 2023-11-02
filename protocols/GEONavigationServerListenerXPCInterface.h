
@protocol GEONavigationServerListenerXPCInterface <NSObject>

@required

- (void)currentRoadNameUpdated:(NSString *)arg1;
- (void)didArriveAtWaypoint:(GEOComposedWaypoint *)arg1 endOfLegIndex:(unsigned long long)arg2;
- (void)didResumeNavigatingFromWaypoint:(GEOComposedWaypoint *)arg1 endOfLegIndex:(unsigned long long)arg2;
- (void)didUpdateETA:(GEOArrivalTimeAndDistanceInfo *)arg1;
- (void)didUpdateLocation:(GEOLocation *)arg1 routeMatchedCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (void)didUpdateRoute:(GEOComposedRoute *)arg1;
- (void)didUpdateTrafficForCurrentRoute:(GEOComposedRouteTraffic *)arg1;
- (void)navigationStateChanged:(unsigned long long)arg1 transportType:(int)arg2 isResumingMultipointRoute:(bool)arg3;
- (void)navigationUpdatedWithVoiceVolumeData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithActiveRouteDetailsData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithGuidanceStateData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithPositionFromDestinationData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithPositionFromManeuverData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithPositionFromSignData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithRideSelectionData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithStepIndexData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithStepNameInfoData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithTransitSummaryData:(NSData *)arg1;

@end
