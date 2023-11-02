
@interface HDSPGoodMorningAlertStateMachine : HKSPPersistentStateMachine <HDSPGoodMorningAlertStateMachineDelegate, HDSPGoodMorningAlertStateMachineEventHandler, HDSPGoodMorningAlertStateMachineInfoProvider> {
    HDSPGoodMorningAlertDisabledState * _disabledState;
    HDSPGoodMorningAlertPresentingState * _presentingState;
    HDSPGoodMorningAlertWaitingState * _waitingState;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDSPGoodMorningAlertStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPGoodMorningAlertDisabledState *disabledState;
@property (nonatomic, readonly) bool goodMorningAlertEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPGoodMorningAlertStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) bool isAppleWatch;
@property (nonatomic, readonly) bool isOnCharger;
@property (nonatomic, readonly) HDSPGoodMorningAlertPresentingState *presentingState;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSPGoodMorningAlertWaitingState *waitingState;

- (void).cxx_destruct;
- (id)allStates;
- (id)currentDate;
- (id)disabledState;
- (void)dismissAlertForGoodMorning;
- (bool)goodMorningAlertEnabled;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (bool)isAppleWatch;
- (bool)isOnCharger;
- (unsigned long long)loggingCategory;
- (void)presentAlertForGoodMorning;
- (id)presentingState;
- (id)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;
- (void)sleepScheduleStateChangedToBedtime;
- (void)sleepScheduleStateChangedToWakeUp;
- (id)waitingState;

@end
