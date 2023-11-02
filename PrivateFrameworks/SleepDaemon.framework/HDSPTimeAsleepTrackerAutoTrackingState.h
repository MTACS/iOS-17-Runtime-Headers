
@interface HDSPTimeAsleepTrackerAutoTrackingState : HDSPTimeAsleepTrackerSleepTrackingState

- (bool)inExpectedAutoTrackingWindow;
- (void)scheduleModelChanged:(id)arg1;
- (void)sleepModeExitedWithReason:(unsigned long long)arg1;
- (void)startWakeDetectionOccurred;
- (id)stateName;
- (void)updateState;
- (void)wakeUpOccurredWithReason:(unsigned long long)arg1;

@end
