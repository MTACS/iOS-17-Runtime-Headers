
@interface VTLockScreenMonitor : VTEventMonitor {
    unsigned char  _lockScreenState;
    int  _notifyToken;
}

+ (id)sharedInstance;

- (unsigned char)_checkLockScreenState;
- (void)_didReceiveLockScreenStateChanged:(unsigned char)arg1;
- (void)_didReceiveLockScreenStateChangedInQueue:(unsigned char)arg1;
- (void)_notifyObserver:(id)arg1 withLockScreenState:(unsigned char)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (unsigned char)lockScreenState;
- (id)lockScreenStateDescription:(unsigned char)arg1;

@end
