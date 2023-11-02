
@interface CSScreenLockMonitor : CSEventMonitor {
    bool  _isScreenLocked;
}

+ (id)sharedInstance;

- (void)_notifyObserver:(id)arg1 isScreenLocked:(bool)arg2;
- (bool)_queryIsScreenLocked;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)dealloc;
- (id)init;
- (bool)isScreenLocked;
- (void)screenLockStateChanged;

@end
