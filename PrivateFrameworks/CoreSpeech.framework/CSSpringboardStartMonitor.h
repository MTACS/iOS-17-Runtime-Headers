
@interface CSSpringboardStartMonitor : CSEventMonitor <CSSystemShellStartProviding> {
    bool  _isSpringBoardStarted;
    int  _notifyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)_checkSpringBoardStarted;
- (void)_didReceiveSpringboardStarted:(bool)arg1;
- (void)_didReceiveSpringboardStartedInQueue:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withStarted:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isSpringboardStarted;
- (bool)isSystemShellStarted;

@end
