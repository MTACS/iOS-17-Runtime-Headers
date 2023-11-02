
@protocol BSTimerScheduleQuerying <NSObject>

@required

- (NSString *)identifier;
- (bool)isScheduled;
- (double)timeRemaining;

@end
