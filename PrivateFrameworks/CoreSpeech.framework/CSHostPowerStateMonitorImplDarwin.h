
@interface CSHostPowerStateMonitorImplDarwin : CSHostPowerStateMonitor {
    long long  _hostState;
    struct IONotificationPort { } * _notificationPort;
    unsigned int  _serviceNotification;
}

+ (id)sharedInstance;

- (void)_didReceiveDarwinHostStateChangeNotification:(long long)arg1;
- (int)_fetchHostStateWithService:(unsigned int)arg1;
- (void)_notifyObserver:(id)arg1 withDarwinHostState:(long long)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (long long)currentDarwinHostState;
- (long long)currentPowerState;
- (long long)currentRawPowerState;
- (id)init;

@end
