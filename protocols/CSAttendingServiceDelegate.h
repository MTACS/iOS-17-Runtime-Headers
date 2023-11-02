
@protocol CSAttendingServiceDelegate <NSObject>

@required

- (void)attendingStoppedWithReason:(long long)arg1;
- (void)speechPauseDetected;
- (void)speechStartDetectedWithEventInfo:(CSAttendingTriggerInfo *)arg1;

@end
