
@interface CSCoreSpeechDaemonStateMonitor : CSEventMonitor {
    int  _notifyToken;
}

+ (id)sharedInstance;

- (void)_didReceiveDaemonStateChanged:(unsigned long long)arg1;
- (void)_notifyObserver:(id)arg1 withDaemonState:(unsigned long long)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (void)notifyDaemonStateChanged:(unsigned long long)arg1;

@end
