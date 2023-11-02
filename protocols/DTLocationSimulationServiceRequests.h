
@protocol DTLocationSimulationServiceRequests <DTXAllowedRPC>

@required

- (void)simulateLocationWithLatitude:(NSNumber *)arg1 longitude:(NSNumber *)arg2;
- (void)stopLocationSimulation;

@end
