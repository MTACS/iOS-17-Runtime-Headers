
@interface CSPineboardStartMonitor : CSEventMonitor <CSSystemShellStartProviding> {
    bool  _isPineBoardStarted;
    int  _notifyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)_checkPineBoardStarted;
- (void)_didReceivePineboardStarted:(bool)arg1;
- (void)_didReceivePineboardStartedInQueue:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withStarted:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isPineboardStarted;
- (bool)isSystemShellStarted;

@end
