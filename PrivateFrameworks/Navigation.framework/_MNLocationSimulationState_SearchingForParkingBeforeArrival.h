
@interface _MNLocationSimulationState_SearchingForParkingBeforeArrival : _MNLocationSimulationState_FollowingRoute {
    GEOComposedRoute * _routeToParkingDestination;
}

- (void).cxx_destruct;
- (void)_findParkingLocation:(id /* block */)arg1;
- (void)_findRouteToParkingDestination;
- (void)_findRouteToParkingLocation:(id)arg1 finishedHandler:(id /* block */)arg2;
- (void)_handleReachedParkingLocation;
- (id)_routeToFollow;
- (double)_scoreForRoad:(id)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (id)init;
- (id)nextSimulatedLocationWithElapsedTime:(double)arg1;
- (void)onEnterState;
- (long long)type;
- (void)updateWithRouteInfo:(id)arg1;

@end
