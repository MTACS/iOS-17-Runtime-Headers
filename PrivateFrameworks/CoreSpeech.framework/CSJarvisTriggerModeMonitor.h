
@interface CSJarvisTriggerModeMonitor : CSEventMonitor {
    long long  _triggerMode;
}

+ (id)sharedInstance;
+ (id)triggerModeStringDescription:(long long)arg1;

- (long long)_fetchTriggerMode;
- (void)_notifyJarvisTriggerModeDidChanged;
- (void)_notifyObserver:(id)arg1 withJarvisTriggerMode:(long long)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (long long)getTriggerMode;
- (id)init;
- (void)setTriggerMode:(long long)arg1;

@end