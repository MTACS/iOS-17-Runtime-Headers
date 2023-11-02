
@interface MTTimeInBedSessionTracker : MTSleepSessionTracker

+ (bool)_shouldUseBedtimeDismissedDateForAlarm:(id)arg1;
+ (bool)_trackingEnabledForSleepAlarm:(id)arg1;

- (id)_createSleepSessionWithUserWakeTime:(id)arg1 endReason:(unsigned long long)arg2;
- (void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2;
- (id)processedSessionForSession:(id)arg1;
- (Class)sessionClass;
- (void)sleepCoordinator:(id)arg1 sleepModeManuallyExited:(id)arg2 sleepAlarm:(id)arg3;
- (void)startSession;

@end
