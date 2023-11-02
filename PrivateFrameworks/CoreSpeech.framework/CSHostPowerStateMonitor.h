
@interface CSHostPowerStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (long long)currentDarwinHostState;
- (long long)currentPowerState;
- (long long)currentRawPowerState;

@end
