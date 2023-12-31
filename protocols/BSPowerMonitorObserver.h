
@protocol BSPowerMonitorObserver <NSObject>

@optional

- (void)powerMonitorSystemDidWakeFromSleep:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemSleepRequestAborted:(BSPowerMonitor *)arg1;
- (bool)powerMonitorSystemSleepRequested:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemWillSleep:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemWillWakeFromSleep:(BSPowerMonitor *)arg1;

@end
