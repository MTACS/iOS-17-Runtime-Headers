
@interface HDSPTimeAsleepTrackerStateMachineState : HKSPPersistentStateMachineState <HDSPTimeAsleepTrackerStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDSPTimeAsleepTrackerStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void)activityDetectedOnDate:(id)arg1;
- (void)appLaunchedOnDate:(id)arg1;
- (void)bedtimeOccurred;
- (bool)inTrackingWindow;
- (bool)inWakeDetectionWindow;
- (bool)isActivityTrackingState;
- (bool)isSleepScheduleDisabled;
- (bool)isSleepTrackingState;
- (bool)isTimeAsleepTrackingDisabled;
- (void)scheduleModelChanged:(id)arg1;
- (void)sleepModeExitedWithReason:(unsigned long long)arg1;
- (void)sleepSessionEndRequestedInternally;
- (void)sleepSessionFinished;
- (void)startWakeDetectionOccurred;
- (void)updateState;
- (bool)updateStateForSleepTrackingDisabled;
- (void)userEngagedSleepMode;
- (void)wakeUpOccurredWithReason:(unsigned long long)arg1;

@end
