
@interface HDSPSleepLockScreenStateMachineState : HKSPPersistentStateMachineState <HDSPSleepLockScreenStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long sleepLockScreenState;
@property (nonatomic, readonly) HDSPSleepLockScreenStateMachine *stateMachine;
@property (readonly) Class superclass;

- (bool)_isSleepLockScreenDisabled;
- (void)_updateStateForSleepMode:(long long)arg1 reason:(unsigned long long)arg2;
- (void)didEnter;
- (void)dismissAlertForGoodMorning;
- (void)presentAlertForGoodMorning;
- (long long)sleepLockScreenState;
- (void)sleepModeDidChange:(long long)arg1 reason:(unsigned long long)arg2;
- (void)updateState;

@end
