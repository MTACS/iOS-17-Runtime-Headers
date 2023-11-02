
@interface FCKeyValueStoreSavePolicyAppBackground : FCKeyValueStoreSavePolicy <FCAppActivityObserving> {
    <FCBackgroundTaskable> * _backgroundTaskable;
    bool  _inBackground;
    id /* block */  _pendingHandler;
    NSObject<OS_dispatch_queue> * _pendingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_saveIfNeeded;
- (void)activityObservingApplicationDidEnterBackground;
- (void)activityObservingApplicationWillEnterForeground;
- (void)activityObservingApplicationWillTerminate;
- (id)initWithActivityMonitor:(id)arg1 backgroundTaskable:(id)arg2;
- (void)scheduleSaveOnQueue:(id)arg1 handler:(id /* block */)arg2;

@end
