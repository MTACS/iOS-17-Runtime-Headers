
@protocol TATrackingAvoidanceServiceObserver <NSObject>

@required

- (void)trackingAvoidanceService:(TATrackingAvoidanceService *)arg1 didFindSuspiciousDevices:(NSArray *)arg2;

@optional

- (void)trackingAvoidanceService:(TATrackingAvoidanceService *)arg1 didRequestAIS:(TAUnknownBeacon *)arg2;
- (void)trackingAvoidanceService:(TATrackingAvoidanceService *)arg1 didStageSuspiciousDevices:(NSArray *)arg2;
- (void)trackingAvoidanceService:(TATrackingAvoidanceService *)arg1 didUnstageSuspiciousDevices:(NSArray *)arg2;
- (void)trackingAvoidanceService:(TATrackingAvoidanceService *)arg1 didUpdateSuspiciousDevices:(NSArray *)arg2;
- (void)trackingAvoidanceService:(TATrackingAvoidanceService *)arg1 requestingAdditionalInformation:(NSArray *)arg2;
- (void)visitStateChangedForTrackingAvoidanceService:(TATrackingAvoidanceService *)arg1;

@end
