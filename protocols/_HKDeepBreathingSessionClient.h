
@protocol _HKDeepBreathingSessionClient <NSObject>

@required

- (void)clientRemote_sessionDidReceiveError:(NSError *)arg1;
- (void)clientRemote_sessionDidReceiveHeartRate:(double)arg1;

@end
