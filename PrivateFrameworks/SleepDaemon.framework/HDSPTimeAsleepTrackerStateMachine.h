
@interface HDSPTimeAsleepTrackerStateMachine : HKSPPersistentStateMachine <HDSPTimeAsleepTrackerStateMachineDelegate, HDSPTimeAsleepTrackerStateMachineEventHandler, HDSPTimeAsleepTrackerStateMachineInfoProvider> {
    HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState * _activityAfterWakeUpTrackingState;
    HDSPTimeAsleepTrackerActivityTrackingState * _activityTrackingState;
    HDSPTimeAsleepTrackerAutoTrackingState * _autoTrackingState;
    HDSPTimeAsleepTrackerDisabledState * _disabledState;
    HDSPTimeAsleepTrackerInternalEndState * _internalEndState;
    HDSPTimeAsleepTrackerManualTrackingState * _manualTrackingState;
    HDSPTimeAsleepTrackerWaitingState * _waitingState;
}

@property (nonatomic, readonly) HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState *activityAfterWakeUpTrackingState;
@property (nonatomic, readonly) HDSPTimeAsleepTrackerActivityTrackingState *activityTrackingState;
@property (nonatomic, readonly) HDSPTimeAsleepTrackerAutoTrackingState *autoTrackingState;
@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDSPTimeAsleepTrackerStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPTimeAsleepTrackerDisabledState *disabledState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inUnscheduledSleepMode;
@property (nonatomic, readonly) bool inWakeDetectionWindow;
@property (nonatomic, readonly) <HDSPTimeAsleepTrackerStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) HDSPTimeAsleepTrackerInternalEndState *internalEndState;
@property (nonatomic, readonly) bool isCharging;
@property (nonatomic, readonly) bool isWristDetectEnabled;
@property (nonatomic, readonly) HDSPTimeAsleepTrackerManualTrackingState *manualTrackingState;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSPTimeAsleepTrackerWaitingState *waitingState;

- (void).cxx_destruct;
- (id)activityAfterWakeUpTrackingState;
- (void)activityDetectedOnDate:(id)arg1;
- (id)activityTrackingState;
- (id)allStates;
- (void)appLaunchedOnDate:(id)arg1;
- (id)autoTrackingState;
- (void)bedtimeOccurred;
- (id)currentDate;
- (id)disabledState;
- (void)endSleepTrackingSessionWithReason:(unsigned long long)arg1;
- (bool)inUnscheduledSleepMode;
- (bool)inWakeDetectionWindow;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (id)internalEndState;
- (bool)isCharging;
- (bool)isWristDetectEnabled;
- (unsigned long long)loggingCategory;
- (id)manualTrackingState;
- (void)notifyForActivityDetectedOnDate:(id)arg1;
- (void)scheduleModelChanged:(id)arg1;
- (void)sleepModeExitedWithReason:(unsigned long long)arg1;
- (id)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;
- (void)sleepSessionEndRequestedInternally;
- (void)sleepSessionFinished;
- (void)startActivityDetection;
- (void)startAppLaunchDetection;
- (void)startSleepTrackingSessionWithReason:(unsigned long long)arg1;
- (void)startWakeDetectionOccurred;
- (void)stopActivityDetection;
- (void)stopAppLaunchDetection;
- (id)trackingWindowAfterDate:(id)arg1;
- (void)userEngagedSleepMode;
- (id)waitingState;
- (void)wakeUpOccurredWithReason:(unsigned long long)arg1;

@end
