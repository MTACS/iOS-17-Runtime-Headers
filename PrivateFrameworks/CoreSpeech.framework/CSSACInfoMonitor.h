
@interface CSSACInfoMonitor : CSEventMonitor {
    bool  _isDeviceRoleStereo;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isDeviceRoleStereo;

@end
