
@interface PFApplicationStateMonitor : NSObject {
    PFCloudKitThrottledNotificationObserver * _appActivateLifecycleObserver;
    PFCloudKitThrottledNotificationObserver * _appDeactivateLifecycleObserver;
    unsigned long long  _applicationState;
    long long  _backgroundTimeout;
    NSObject<PFApplicationStateMonitorDelegate> * _delegate;
    _Atomic int  _transitionCounter;
}

- (void).cxx_destruct;
- (void)applicationDidActivate:(id)arg1;
- (void)applicationWillDeactivate:(id)arg1;
- (void)dealloc;
- (id)init;

@end
