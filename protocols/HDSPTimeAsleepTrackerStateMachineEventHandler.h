
@protocol HDSPTimeAsleepTrackerStateMachineEventHandler <HKSPPersistentStateMachineEventHandler>

@required

- (void)activityDetectedOnDate:(NSDate *)arg1;
- (void)appLaunchedOnDate:(NSDate *)arg1;
- (void)bedtimeOccurred;
- (void)scheduleModelChanged:(HDSPSleepScheduleModelChangeEvaluation *)arg1;
- (void)sleepModeExitedWithReason:(unsigned long long)arg1;
- (void)sleepSessionEndRequestedInternally;
- (void)sleepSessionFinished;
- (void)startWakeDetectionOccurred;
- (void)userEngagedSleepMode;
- (void)wakeUpOccurredWithReason:(unsigned long long)arg1;

@end
