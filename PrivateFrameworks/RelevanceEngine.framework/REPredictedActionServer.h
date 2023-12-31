
@interface REPredictedActionServer : NSObject {
    NSXPCConnection * _connection;
    NSArray * _counts;
    NSMutableArray * _fetchCompletionBlocks;
    bool  _fetchingData;
    NSDate * _firstPerformedDate;
    NSDate * _lastFetchedDate;
    REObserverStore * _observers;
    NSArray * _predictions;
    NSObject<OS_dispatch_queue> * _queue;
    REUpNextScheduler * _scheduler;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accessOrEnqueueDataRequest:(id /* block */)arg1 error:(id /* block */)arg2;
- (void)_clearConnection;
- (void)_finishProcessingData;
- (void)_invalidateConnection;
- (void)_notifyObservers;
- (void)_queue_fetchPredicitions;
- (void)_queue_setupConnection;
- (void)_requestPredictions:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)fetchFirstPerformedActionDate:(id /* block */)arg1;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fetchPredictedActions:(id /* block */)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
