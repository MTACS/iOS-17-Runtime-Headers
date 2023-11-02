
@interface _MNLocationSimulationState_FollowingRoute : _MNLocationSimulationState {
    struct { 
        unsigned int index; 
        float offset; 
    }  _startRouteCoordinate;
}

- (bool)_isCoordinate:(struct { unsigned int x1; float x2; })arg1 atEndOfLeg:(id)arg2;
- (struct { unsigned int x1; float x2; })_projectedCoordinateOnRouteFrom:(struct { unsigned int x1; float x2; })arg1 overTimeDelta:(double)arg2 outSpeed:(out double*)arg3;
- (id)_routeToFollow;
- (bool)_shouldProceedToWaypointForLeg:(id)arg1;
- (id)initWithStartRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (id)nextSimulatedLocationWithElapsedTime:(double)arg1;
- (void)onEnterState;
- (long long)type;
- (void)updateWithRouteInfo:(id)arg1;

@end
