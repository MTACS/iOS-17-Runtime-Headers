
@protocol DTVMTrackingServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (NSMutableDictionary *)configureLaunchEnvironment:(NSMutableDictionary *)arg1;
- (XRVMState *)requestVMSnapshot;
- (void)setTargetPid:(NSNumber *)arg1 referenceDate:(NSDate *)arg2;
- (void)startTracking;
- (void)stopTracking;

@end
