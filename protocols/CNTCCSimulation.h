
@protocol CNTCCSimulation

@required

- (bool)isUnitTesting;
- (void)simulateStatus:(long long)arg1;
- (void)stopSimulation;

@end
