
@protocol CUTPowerMonitorDelegate <NSObject>

@optional

- (void)cutPowerMonitorBatteryConnectedStateDidChange:(CUTPowerMonitor *)arg1;
- (void)cutPowerMonitorSystemHasPoweredOn:(CUTPowerMonitor *)arg1;

@end
