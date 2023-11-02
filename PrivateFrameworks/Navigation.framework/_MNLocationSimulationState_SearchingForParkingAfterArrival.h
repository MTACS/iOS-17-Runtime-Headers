
@interface _MNLocationSimulationState_SearchingForParkingAfterArrival : _MNLocationSimulationState_SearchingForParkingBeforeArrival

- (void)_handleReachedParkingLocation;
- (double)_scoreForRoad:(id)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (long long)type;

@end
