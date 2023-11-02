
@protocol HDSPChargingReminderStateMachineDelegate <HKSPPersistentStateMachineDelegate>

@required

- (void)postChargingReminderNotification;
- (void)startBatteryMonitoring;
- (void)stopBatteryMonitoring;

@end
