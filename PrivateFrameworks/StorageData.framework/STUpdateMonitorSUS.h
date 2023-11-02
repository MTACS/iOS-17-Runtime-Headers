
@interface STUpdateMonitorSUS : STUpdateMonitor <SUManagerClientDelegate> {
    SUDownload * _currentUpdate;
    long long  _currentUpdateSize;
    SUManagerClient * _suManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpdate:(id)arg1;
- (id)bundleIdentifier;
- (void)checkForSystemUpdates;
- (void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 downloadDidFinish:(id)arg2;
- (void)client:(id)arg1 downloadDidStart:(id)arg2;
- (void)client:(id)arg1 downloadProgressDidChange:(id)arg2;
- (void)client:(id)arg1 downloadWasInvalidatedForNewUpdatesAvailable:(id)arg2;
- (id)currentUpdateName;
- (long long)currentUpdateSize;
- (void)startMonitor;
- (void)stopMonitor;
- (void)sync;

@end
