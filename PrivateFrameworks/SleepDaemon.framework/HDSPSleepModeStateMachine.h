
@interface HDSPSleepModeStateMachine : HKSPPersistentStateMachine <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineEventHandler, HDSPSleepModeStateMachineInfoProvider> {
    HDSPSleepModeAutomatedOffState * _automatedOffState;
    HDSPSleepModeAutomatedOnState * _automatedOnState;
    HDSPSleepModeBedtimeState * _bedtimeState;
    HDSPSleepModeManualOffState * _manualOffState;
    HDSPSleepModeManualOnState * _manualOnState;
    HDSPSleepModeOffState * _offState;
    HDSPSleepModeWindDownState * _windDownState;
}

@property (nonatomic, readonly) HDSPSleepModeAutomatedOffState *automatedOffState;
@property (nonatomic, readonly) HDSPSleepModeAutomatedOnState *automatedOnState;
@property (nonatomic, readonly) HDSPSleepModeBedtimeState *bedtimeState;
@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDSPSleepModeStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSleepFocusMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPSleepModeStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) bool isAppleWatch;
@property (nonatomic, readonly) HDSPSleepModeManualOffState *manualOffState;
@property (nonatomic, readonly) HDSPSleepModeManualOnState *manualOnState;
@property (nonatomic, readonly) HDSPSleepModeOffState *offState;
@property (nonatomic, readonly) bool sleepFeaturesEnabled;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSPSleepModeWindDownState *windDownState;

- (void).cxx_destruct;
- (id)automatedOffState;
- (id)automatedOnState;
- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)arg1;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)arg1;
- (id)bedtimeState;
- (id)currentDate;
- (bool)hasSleepFocusMode;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (bool)isAppleWatch;
- (unsigned long long)loggingCategory;
- (id)manualOffState;
- (id)manualOnState;
- (id)offState;
- (bool)shouldGoIntoSleepModeDuringState:(unsigned long long)arg1;
- (bool)sleepFeaturesEnabled;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (void)sleepModeTurnedOffForUnknownReason;
- (void)sleepModeTurnedOnForUnknownReason;
- (id)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToDisabled;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)arg1;
- (void)userTurnedOnSleepModeWithReason:(unsigned long long)arg1;
- (id)windDownState;

@end
