
@protocol MNLocationTrackerDelegate <NSObject>

@optional

- (void)locationTracker:(MNLocationTracker *)arg1 didArriveAtWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 didChangeState:(int)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didEndNavigatingWithReason:(unsigned long long)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didEnterPreArrivalStateForWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 didFailRerouteWithError:(NSError *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didReachETAUpdatePosition:(GEOComposedRouteETAUPosition *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didReceiveTransitAlert:(MNTransitAlert *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didReroute:(MNActiveRouteInfo *)arg2 newAlternateRoutes:(NSArray *)arg3 rerouteReason:(unsigned long long)arg4 request:(GEODirectionsRequest *)arg5 response:(GEODirectionsResponse *)arg6;
- (void)locationTracker:(MNLocationTracker *)arg1 didResumeNavigatingFromWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;
- (void)locationTracker:(MNLocationTracker *)arg1 didSuppressReroute:(NSError *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(MNActiveRouteInfo *)arg3 request:(GEODirectionsRequest *)arg4 response:(GEODirectionsResponse *)arg5;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateArrivalInfo:(MNArrivalInfo *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateBackgroundWalkingRoute:(MNActiveRouteInfo *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateETAForRoute:(MNActiveRouteInfo *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateMatchedLocation:(MNLocation *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateTargetLegIndex:(unsigned long long)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateVehicleParkingInfo:(MNVehicleParkingInfo *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 dismissedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 invalidatedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 isApproachingEndOfLeg:(unsigned long long)arg2;
- (void)locationTracker:(void *)arg1 receivedTrafficIncidentAlert:(void *)arg2 responseCallback:(void *)arg3; // needs 3 arg types, found 8: MNLocationTracker *, MNTrafficIncidentAlert *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)locationTracker:(MNLocationTracker *)arg1 shouldShowChargingInfoForWaypoint:(GEOComposedWaypoint *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 updatedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)locationTrackerDidArrive:(MNLocationTracker *)arg1;
- (void)locationTrackerDidCancelReroute:(MNLocationTracker *)arg1;
- (void)locationTrackerDidEnterPreArrivalState:(MNLocationTracker *)arg1;
- (void)locationTrackerWillReroute:(MNLocationTracker *)arg1;

@end
