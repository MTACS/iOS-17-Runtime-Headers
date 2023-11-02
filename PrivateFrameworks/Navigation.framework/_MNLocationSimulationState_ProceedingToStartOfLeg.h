
@interface _MNLocationSimulationState_ProceedingToStartOfLeg : _MNLocationSimulationState

- (struct { unsigned int x1; float x2; })_simulationStartRouteCoordinate;
- (id)nextSimulatedLocationWithElapsedTime:(double)arg1;
- (void)onEnterState;
- (long long)type;

@end
