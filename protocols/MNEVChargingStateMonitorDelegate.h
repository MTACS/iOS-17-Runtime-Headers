
@protocol MNEVChargingStateMonitorDelegate <NSObject>

@required

- (void)evChargingStateMonitor:(MNEVChargingStateMonitor *)arg1 didChangeChargingState:(bool)arg2;
- (void)evChargingStateMonitor:(MNEVChargingStateMonitor *)arg1 didReachTargetBatteryCharge:(NSMeasurement *)arg2;
- (void)evChargingStateMonitorShouldShowChargingInfo:(MNEVChargingStateMonitor *)arg1;

@end
