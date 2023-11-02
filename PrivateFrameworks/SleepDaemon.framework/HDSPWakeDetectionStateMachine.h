
@interface HDSPWakeDetectionStateMachine : HKSPPersistentStateMachine <HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineEventHandler, HDSPWakeDetectionStateMachineInfoProvider> {
    HDSPWakeDetectionActivityDetectingState * _activityDetectingState;
    HDSPWakeDetectionDisabledState * _disabledState;
    HDSPWakeDetectionExplicitDetectingState * _explicitDetectingState;
    HDSPWakeDetectionNotifiedState * _notifiedState;
    HDSPWakeDetectionWaitingState * _waitingState;
}

@property (nonatomic, readonly) unsigned long long activeTypes;
@property (nonatomic, readonly) HDSPWakeDetectionActivityDetectingState *activityDetectingState;
@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDSPWakeDetectionStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPWakeDetectionDisabledState *disabledState;
@property (nonatomic, readonly) HDSPWakeDetectionExplicitDetectingState *explicitDetectingState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPWakeDetectionStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) bool isWatch;
@property (nonatomic, readonly) NSDate *nextWakeUp;
@property (nonatomic, readonly) HDSPWakeDetectionNotifiedState *notifiedState;
@property (nonatomic, readonly) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property (nonatomic, readonly) bool sleepModeIsOff;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *upcomingStartDetection;
@property (nonatomic, readonly) HDSPWakeDetectionWaitingState *waitingState;

- (void).cxx_destruct;
- (unsigned long long)activeTypes;
- (id)activityDetectingState;
- (id)allStates;
- (id)currentDate;
- (id)detectionWindowForType:(unsigned long long)arg1;
- (id)disabledState;
- (void)earlyWakeUpWasNotifiedRemotely;
- (id)explicitDetectingState;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (bool)isWatch;
- (unsigned long long)loggingCategory;
- (id)nextWakeUp;
- (id)notifiedState;
- (void)postWakeDetectionNotification:(unsigned long long)arg1;
- (id)relevantOccurrence;
- (bool)sleepModeIsOff;
- (id)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;
- (void)startWakeDetection:(unsigned long long)arg1;
- (void)stopWakeDetection;
- (id)upcomingStartDetection;
- (id)waitingState;
- (void)wakeupEventDetected:(unsigned long long)arg1 date:(id)arg2;

@end
