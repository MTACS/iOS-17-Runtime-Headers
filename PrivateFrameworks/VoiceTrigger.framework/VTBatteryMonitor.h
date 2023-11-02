
@interface VTBatteryMonitor : VTEventMonitor {
    unsigned char  _batteryState;
    int  _notifyToken;
}

+ (id)sharedInstance;

- (unsigned char)_checkBatteryState;
- (void)_didReceiveBatteryStatusChanged:(unsigned char)arg1;
- (void)_didReceiveBatteryStatusChangedInQueue:(unsigned char)arg1;
- (void)_notifyObserver:(id)arg1 withBatteryState:(unsigned char)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (unsigned char)batteryState;
- (id)init;

@end
