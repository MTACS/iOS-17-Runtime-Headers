
@protocol HDSPTimeAsleepTrackerStateMachineDelegate <HKSPPersistentStateMachineDelegate>

@required

- (void)endSleepTrackingSessionWithReason:(unsigned long long)arg1;
- (void)notifyForActivityDetectedOnDate:(NSDate *)arg1;
- (void)startActivityDetection;
- (void)startAppLaunchDetection;
- (void)startSleepTrackingSessionWithReason:(unsigned long long)arg1;
- (void)stopActivityDetection;
- (void)stopAppLaunchDetection;

@end
