
@interface HDSPSleepScheduleStateCoordinatorStateMachine : HKSPPersistentStateMachine <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineEventHandler, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider> {
    HDSPSleepScheduleStateCoordinatorBedtimeState * _bedtimeState;
    HDSPSleepScheduleStateCoordinatorDelayedWakeUpState * _delayedWakeUpState;
    HDSPSleepScheduleStateCoordinatorDisabledState * _disabledState;
    HDSPSleepScheduleStateCoordinatorInitialState * _initialState;
    HDSPSleepScheduleStateCoordinatorWakeUpState * _wakeUpState;
    HDSPSleepScheduleStateCoordinatorWindDownState * _windDownState;
}

@property (nonatomic, readonly) HDSPSleepScheduleStateCoordinatorBedtimeState *bedtimeState;
@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) HDSPSleepScheduleStateCoordinatorDelayedWakeUpState *delayedWakeUpState;
@property (nonatomic, readonly) <HDSPSleepScheduleStateCoordinatorStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPSleepScheduleStateCoordinatorDisabledState *disabledState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) HDSPSleepScheduleStateCoordinatorInitialState *initialState;
@property (nonatomic, readonly) bool isAppleWatch;
@property (nonatomic, readonly) HKSPSleepScheduleOccurrence *previousOccurrence;
@property (nonatomic, readonly) bool sleepFeaturesEnabled;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSPSleepScheduleStateCoordinatorWakeUpState *wakeUpState;
@property (nonatomic, readonly) HDSPSleepScheduleStateCoordinatorWindDownState *windDownState;

- (void).cxx_destruct;
- (void)bedtimeReached;
- (id)bedtimeState;
- (id)currentDate;
- (id)delayedWakeUpState;
- (id)disabledState;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (id)initialState;
- (bool)isAppleWatch;
- (unsigned long long)loggingCategory;
- (id)previousOccurrence;
- (void)scheduleModelChanged:(id)arg1;
- (void)significantTimeChange;
- (bool)sleepFeaturesEnabled;
- (id)sleepScheduleModel;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 context:(id)arg3;
- (void)snoozeFireDateShouldBeReset;
- (void)timeZoneChange;
- (void)wakeTimeReached;
- (void)wakeUpConfirmed;
- (id)wakeUpState;
- (void)windDownReached;
- (id)windDownState;

@end
