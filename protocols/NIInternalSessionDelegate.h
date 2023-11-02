
@protocol NIInternalSessionDelegate <NISessionDelegate>

@optional

- (void)session:(NISession *)arg1 didDiscoverNearbyObject:(NINearbyObject *)arg2;
- (void)session:(NISession *)arg1 didFailWithError:(NSError *)arg2;
- (void)session:(NISession *)arg1 didReceiveRangingAuthRecommendation:(bool)arg2 forObject:(NINearbyObject *)arg3;
- (void)session:(NISession *)arg1 didUpdateAlgorithmState:(NIAlgorithmConvergenceState *)arg2 forObject:(NINearbyObject *)arg3;
- (void)session:(NISession *)arg1 didUpdateHomeDeviceUWBRangingAvailability:(bool)arg2;
- (void)session:(NISession *)arg1 didUpdateLocalMotionState:(long long)arg2;
- (void)session:(NISession *)arg1 object:(NINearbyObject *)arg2 didUpdateRegion:(NIRegionPredicate *)arg3 previousRegion:(NIRegionPredicate *)arg4;
- (void)session:(NISession *)arg1 suspendedWithReason:(long long)arg2;
- (void)session:(NISession *)arg1 suspensionReasonEnded:(long long)arg2 isNoLongerSuspended:(bool)arg3;
- (void)sessionDidUpdateDiscoveryToken:(NISession *)arg1;

@end
