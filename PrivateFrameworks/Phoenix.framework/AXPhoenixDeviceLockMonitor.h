
@interface AXPhoenixDeviceLockMonitor : AXPhoenixEventMonitor {
    bool  _deviceLocked;
}

@property (getter=isDeviceLocked, nonatomic) bool deviceLocked;

+ (id)sharedInstance;

- (void)_notifyObserver:(id)arg1 isDeviceLocked:(bool)arg2 timestamp:(double)arg3;
- (bool)_queryIsDeviceLocked;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)deviceLockStateChanged:(double)arg1;
- (id)init;
- (bool)isDeviceLocked;
- (void)setDeviceLocked:(bool)arg1;

@end
