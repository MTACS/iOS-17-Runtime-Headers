
@interface HDSPGoodMorningAlertStateMachineState : HKSPPersistentStateMachineState <HDSPGoodMorningAlertStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDSPGoodMorningAlertStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void)goodMorningAlertTimedOut;
- (void)sleepScheduleStateChangedToBedtime;
- (void)sleepScheduleStateChangedToWakeUp;
- (void)updateState;

@end
