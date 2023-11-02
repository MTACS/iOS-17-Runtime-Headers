
@interface HDSPWakeDetectionNotifiedState : HDSPWakeDetectionStateMachineState

- (void)didEnter;
- (id)expirationDate;
- (void)stateDidExpire;
- (id)stateName;
- (void)updateState;

@end
