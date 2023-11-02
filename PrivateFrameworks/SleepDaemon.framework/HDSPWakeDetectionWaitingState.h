
@interface HDSPWakeDetectionWaitingState : HDSPWakeDetectionStateMachineState

- (id)expirationDate;
- (bool)schedulesExpiration;
- (id)stateName;

@end
