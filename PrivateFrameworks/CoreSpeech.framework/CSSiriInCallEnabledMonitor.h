
@interface CSSiriInCallEnabledMonitor : CSEventMonitor {
    bool  _isEnabled;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_checkSiriInCallEnabled;
- (void)_didReceiveSiriInCallChangedInQueue:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(bool)arg2;
- (void)_siriInCallEnabledDidChangeEnabledDidChange;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isEnabled;

@end
