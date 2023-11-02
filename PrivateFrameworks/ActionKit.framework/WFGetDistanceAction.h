
@interface WFGetDistanceAction : WFAction

+ (unsigned long long)transportTypeFromString:(id)arg1;

- (id)contentDestinationWithError:(id*)arg1;
- (bool)destinationIsCurrentLocation;
- (void)finishRunningWithDistance:(double)arg1;
- (void)getDirectDistanceFromOrigin:(id)arg1 toDestination:(id)arg2;
- (void)getDistanceFromOrigin:(id)arg1 toDestination:(id)arg2 transportType:(unsigned long long)arg3;
- (bool)locationParameterIsCurrentLocation:(id)arg1;
- (id)noLocationError;
- (bool)originIsCurrentLocation;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
