
@interface HDSPWakeDetectionStateMachineState : HKSPPersistentStateMachineState <HDSPWakeDetectionStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDetectingState;
@property (nonatomic, readonly) HDSPWakeDetectionStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void)earlyWakeUpWasNotifiedRemotely;
- (bool)isDetectingState;
- (bool)isWakeDetectionDisabled;
- (void)updateState;
- (void)wakeDetectionEventDue;
- (void)wakeupEventDetected:(unsigned long long)arg1 date:(id)arg2;

@end
