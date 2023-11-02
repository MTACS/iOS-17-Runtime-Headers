
@protocol ICEnvironmentMonitorObserver <NSObject>

@optional

- (void)environmentMonitorDidChangeBatteryLevel:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeNetworkReachability:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeNetworkType:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangePower:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeTelephonyStatus:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeThermalLevel:(ICEnvironmentMonitor *)arg1;

@end
