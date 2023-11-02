
@protocol UWBSessionDelegateProxyProtocol <NSObject>

@required

- (void)didDiscoverNearbyObject:(NINearbyObject *)arg1;
- (void)didGenerateShareableConfigurationData:(NSData *)arg1 forObject:(NINearbyObject *)arg2;
- (void)didReceiveRangingAuthRecommendation:(bool)arg1 forObject:(NINearbyObject *)arg2;
- (void)didRemoveNearbyObjects:(NSArray *)arg1 withReason:(unsigned long long)arg2;
- (void)didUpdateAlgorithmState:(NIAlgorithmConvergenceState *)arg1 forObject:(NINearbyObject *)arg2;
- (void)didUpdateHealthStatus:(long long)arg1;
- (void)didUpdateHomeDeviceUWBRangingAvailability:(bool)arg1;
- (void)didUpdateLocalDiscoveryToken:(NIDiscoveryToken *)arg1;
- (void)didUpdateMotionState:(long long)arg1;
- (void)didUpdateNearbyObjects:(NSArray *)arg1;
- (void)object:(NINearbyObject *)arg1 didUpdateRegion:(NIRegionPredicate *)arg2 previousRegion:(NIRegionPredicate *)arg3;
- (void)relayDCKMessage:(NSData *)arg1;
- (void)uwbSessionDidFailWithError:(NSError *)arg1;
- (void)uwbSessionDidInvalidateWithError:(NSError *)arg1;
- (void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;
- (void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;

@end
