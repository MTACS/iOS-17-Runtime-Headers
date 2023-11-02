
@interface CSAutomaticVolumeEnabledMonitor : CSEventMonitor {
    NSUserDefaults * _defaults;
    bool  _isAutomaticVolumeEnabled;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didReceiveAutomaticVolumeToggled:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
