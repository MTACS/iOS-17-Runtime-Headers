
@interface HDSPSleepModeStateMachineState : HKSPPersistentStateMachineState <HDSPSleepModeStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long defaultChangeReason;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long sleepMode;
@property (nonatomic, readonly) HDSPSleepModeStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)arg1;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)arg1;
- (unsigned long long)defaultChangeReason;
- (void)didEnter;
- (long long)sleepMode;
- (void)sleepModeTurnedOffForUnknownReason;
- (void)sleepModeTurnedOnForUnknownReason;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToDisabled;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)updateState;
- (bool)updateStateCommon;
- (void)updateStateFromTimeline;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)arg1;
- (void)userTurnedOnSleepModeWithReason:(unsigned long long)arg1;

@end
