
@interface HDSPChargingReminderNotifiedState : HDSPChargingReminderStateMachineState

- (void)didEnter;
- (id)expirationDate;
- (void)stateDidExpire;
- (id)stateName;
- (void)updateState;

@end
