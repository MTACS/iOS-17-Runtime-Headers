
@protocol HKRPOxygenSaturationSessionClientInterface <NSObject>

@required

- (void)clientRemote_didEndWithReason:(long long)arg1 saturation:(HKQuantity *)arg2 barometricPressure:(HKQuantity *)arg3 averageHeartRate:(HKQuantity *)arg4 averageHeartRateUUID:(NSUUID *)arg5 error:(NSError *)arg6;
- (void)clientRemote_didSendFeedback:(unsigned long long)arg1;
- (void)clientRemote_didStartWithStartTime:(double)arg1 expectedDuration:(double)arg2;

@end
