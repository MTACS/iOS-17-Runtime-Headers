
@protocol HDSPChargingReminderStateMachineEventHandler <HKSPPersistentStateMachineEventHandler>

@required

- (void)batteryLevelChanged:(float)arg1;

@end
