
@interface HDSPWakeUpResultsNotificationDelayingForTrackingState : HDSPWakeUpResultsNotificationStateMachineState

- (id)expirationDate;
- (bool)schedulesExpiration;
- (void)stateDidExpire;
- (id)stateName;

@end
