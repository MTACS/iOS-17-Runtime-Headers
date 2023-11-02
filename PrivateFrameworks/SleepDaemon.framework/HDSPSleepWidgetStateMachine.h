
@interface HDSPSleepWidgetStateMachine : HKSPPersistentStateMachine <HDSPSleepWidgetStateMachineDelegate, HDSPSleepWidgetStateMachineEventHandler, HDSPSleepWidgetStateMachineInfoProvider> {
    HDSPSleepWidgetBedtimeInProgressState * _bedtimeInProgressState;
    HDSPSleepWidgetBedtimeState * _bedtimeState;
    HDSPSleepWidgetDisabledState * _disabledState;
    HDSPSleepWidgetGreetingState * _greetingState;
    HDSPSleepWidgetNotOnboardedState * _notOnboardedState;
    HDSPSleepWidgetUpcomingState * _upcomingState;
    HDSPSleepWidgetWaitingState * _waitingState;
    HDSPSleepWidgetWindDownState * _windDownState;
}

@property (nonatomic, readonly) HDSPSleepWidgetBedtimeInProgressState *bedtimeInProgressState;
@property (nonatomic, readonly) HDSPSleepWidgetBedtimeState *bedtimeState;
@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDSPSleepWidgetStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPSleepWidgetDisabledState *disabledState;
@property (nonatomic, readonly) HDSPSleepWidgetGreetingState *greetingState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inUnscheduledSleepMode;
@property (nonatomic, readonly) <HDSPSleepWidgetStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) bool isOnboarded;
@property (nonatomic, readonly) HDSPSleepWidgetNotOnboardedState *notOnboardedState;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSPSleepWidgetUpcomingState *upcomingState;
@property (nonatomic, readonly) HDSPSleepWidgetWaitingState *waitingState;
@property (nonatomic, readonly) HDSPSleepWidgetWindDownState *windDownState;

- (void).cxx_destruct;
- (id)allStates;
- (id)bedtimeInProgressState;
- (id)bedtimeState;
- (id)currentDate;
- (id)disabledState;
- (id)greetingState;
- (bool)inUnscheduledSleepMode;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (bool)isOnboarded;
- (unsigned long long)loggingCategory;
- (id)notOnboardedState;
- (void)significantTimeChangeOccurred;
- (void)sleepModeDidChange:(long long)arg1 isUserRequested:(bool)arg2;
- (id)sleepScheduleModel;
- (void)sleepScheduleModelDidChange:(id)arg1;
- (unsigned long long)sleepScheduleState;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1;
- (void)sleepWidgetShouldReload;
- (void)sleepWidgetStateDidChange:(long long)arg1 previousState:(long long)arg2;
- (id)upcomingState;
- (id)waitingState;
- (id)windDownState;

@end
