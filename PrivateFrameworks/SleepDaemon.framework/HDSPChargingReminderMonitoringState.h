
@interface HDSPChargingReminderMonitoringState : HDSPChargingReminderStateMachineState

- (void)batteryLevelChanged:(float)arg1;
- (void)didEnter;
- (void)didExit;
- (id)expirationDate;
- (bool)schedulesExpiration;
- (id)stateName;

@end
