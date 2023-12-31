
@interface VTLowPowerModeMonitor : VTEventMonitor {
    unsigned char  _powerMode;
}

+ (id)sharedInstance;

- (unsigned char)_checkPowerMode;
- (void)_didReceiveLowPowerModeChanged;
- (void)_didReceiveLowPowerModeChangedInQueue:(unsigned char)arg1;
- (void)_notifyObserver:(id)arg1 withPowerMode:(unsigned char)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isLowPowerMode;
- (unsigned char)powerMode;

@end
