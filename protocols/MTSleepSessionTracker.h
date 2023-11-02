
@protocol MTSleepSessionTracker <NSObject>

@required

+ (bool)_trackingEnabledForSleepAlarm:(MTAlarm *)arg1;

- (void)endSessionWithDate:(NSDate *)arg1 reason:(unsigned long long)arg2;
- (Class)sessionClass;
- (void)setSleepSessionTrackerDelegate:(id <MTSleepSessionTrackerDelegate>)arg1;
- (<MTSleepSessionTrackerDelegate> *)sleepSessionTrackerDelegate;
- (void)startSession;
- (bool)trackingEnabled;

@optional

- (<MTSleepSession> *)processedSessionForSession:(id <MTSleepSession>)arg1;

@end
