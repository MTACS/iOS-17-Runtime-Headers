
@interface DTLocationSimulationService : DTXService <DTLocationSimulationServiceRequests>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (id)initWithChannel:(id)arg1;
- (void)simulateLocationWithLatitude:(id)arg1 longitude:(id)arg2;
- (void)stopLocationSimulation;

@end
