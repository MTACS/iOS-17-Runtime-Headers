
@interface _MNLocationSimulationState_WaitingAtWaypoint : _MNLocationSimulationState {
    double  _startTime;
    double  _waitDuration;
}

- (id)initWithStartTime:(double)arg1 waitDuration:(double)arg2;
- (id)nextSimulatedLocationWithElapsedTime:(double)arg1;
- (long long)type;

@end
