
@interface CKDPCSFetchAggregator : NSObject {
    CKDContainer * _container;
    CKCoalescer * _fetchCoalescer;
    NSObject<OS_dispatch_queue> * _opQueue;
    NSOperationQueue * _queue;
    NSMutableArray * _queuedFetches;
    NSMutableArray * _runningFetches;
    bool  _skipQueuedFetchCycleDetection;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (nonatomic) CKDContainer *container;
@property (nonatomic, retain) CKCoalescer *fetchCoalescer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *opQueue;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (nonatomic, retain) NSMutableArray *queuedFetches;
@property (nonatomic, retain) NSMutableArray *runningFetches;
@property (nonatomic) bool skipQueuedFetchCycleDetection;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;

- (void).cxx_destruct;
- (void)_lockedFetchesAreReady;
- (id)_lockedGetQueuedFetchForOperation:(id)arg1 ofClass:(Class)arg2;
- (void)_lockedRescheduleFetchTimer;
- (void)_lockedTearDownFetchTimer;
- (void)cancelAllOperations;
- (id)container;
- (void)dealloc;
- (id)fetchCoalescer;
- (bool)fetchRequestForExistingOperation:(id)arg1 isDependentOnOperation:(id)arg2;
- (id)init;
- (id)initWithContainer:(id)arg1;
- (id)opQueue;
- (id)queue;
- (id)queuedFetches;
- (void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)requestFetchOfShareWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)requestFetchOfZoneWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)runningFetches;
- (void)setContainer:(id)arg1;
- (void)setFetchCoalescer:(id)arg1;
- (void)setOpQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueuedFetches:(id)arg1;
- (void)setRunningFetches:(id)arg1;
- (void)setSkipQueuedFetchCycleDetection:(bool)arg1;
- (void)setTimerSource:(id)arg1;
- (bool)skipQueuedFetchCycleDetection;
- (id)timerSource;

@end
