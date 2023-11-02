
@interface CSClarityboardStartMonitor : CSEventMonitor <CSSystemShellStartProviding> {
    bool  _isClarityBoardStarted;
    int  _notifyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)_checkClarityBoardStarted;
- (void)_didReceiveClarityboardStarted:(bool)arg1;
- (void)_didReceiveClarityboardStartedInQueue:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withStarted:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isClarityBoardStarted;
- (bool)isSystemShellStarted;

@end
