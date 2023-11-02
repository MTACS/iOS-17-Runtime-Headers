
@interface HDSPChargingReminderWaitingState : HDSPChargingReminderStateMachineState

- (id)expirationDate;
- (bool)schedulesExpiration;
- (void)stateDidExpire;
- (id)stateName;

@end
