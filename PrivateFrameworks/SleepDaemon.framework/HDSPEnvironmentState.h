
@interface HDSPEnvironmentState : HKSPStateMachineState <HDSPEnvironmentStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDSPEnvironmentStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void)dataMigrationDidComplete;
- (void)systemDidBecomeReady;

@end
