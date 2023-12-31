
@protocol HKElectrocardiogramSessionClientInterface <NSObject>

@required

- (void)clientRemote_didDetectContactAtDate:(NSDate *)arg1;
- (void)clientRemote_didDetectEmergencyCallbackModeWithEndDate:(NSDate *)arg1;
- (void)clientRemote_didEndWithReason:(long long)arg1 error:(NSError *)arg2;

@end
