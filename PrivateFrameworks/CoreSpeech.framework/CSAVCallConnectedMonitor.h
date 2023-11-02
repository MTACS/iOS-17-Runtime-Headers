
@interface CSAVCallConnectedMonitor : CSEventMonitor {
    bool  _hasConnectedAVCall;
}

+ (id)sharedInstance;

- (void)_handleCallActiveDidChangeNotification:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_startObservingAVCallActiveChange;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)arg1;
- (bool)hasConnectedAVCall;
- (id)init;

@end
