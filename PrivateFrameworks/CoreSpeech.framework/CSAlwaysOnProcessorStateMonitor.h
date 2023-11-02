
@interface CSAlwaysOnProcessorStateMonitor : CSEventMonitor {
    bool  _isListeningEnabled;
    int  _notifyToken;
}

+ (id)sharedInstance;

- (void)_didReceiveAOPListeningStateChange:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isEnabled;

@end
