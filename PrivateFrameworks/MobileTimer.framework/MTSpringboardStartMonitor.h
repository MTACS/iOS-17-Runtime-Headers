
@interface MTSpringboardStartMonitor : NSObject {
    bool  _isSpringBoardStarted;
    int  _notifyToken;
    MTObserverStore * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_checkSpringBoardStarted;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)didReceiveSpringboardStarted:(bool)arg1;
- (void)enumerateObservers:(id /* block */)arg1;
- (id)init;
- (bool)isSpringboardStarted;
- (void)removeObserver:(id)arg1;

@end
