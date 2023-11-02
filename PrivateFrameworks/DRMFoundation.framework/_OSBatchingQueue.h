
@interface _OSBatchingQueue : NSObject {
    NSObject<OS_dispatch_queue> * _executionQueue;
    double  _maxDelay;
    unsigned long long  _maxQueueDepth;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSObject<OS_dispatch_source> * _timer;
    id /* block */  _workHandler;
    NSMutableArray * _workItems;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic) double maxDelay;
@property (nonatomic) unsigned long long maxQueueDepth;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, copy) id /* block */ workHandler;
@property (nonatomic, retain) NSMutableArray *workItems;

+ (id)queueWithName:(id)arg1 maxBatchingDelay:(double)arg2 maxQueueDepth:(unsigned long long)arg3 queue:(id)arg4 workItemsHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)addWorkItem:(id)arg1;
- (id)executionQueue;
- (id)initWithName:(id)arg1 maxBatchingDelay:(double)arg2 maxQueueDepth:(unsigned long long)arg3 queue:(id)arg4 workItemsHandler:(id /* block */)arg5;
- (double)maxDelay;
- (unsigned long long)maxQueueDepth;
- (void)setExecutionQueue:(id)arg1;
- (void)setMaxDelay:(double)arg1;
- (void)setMaxQueueDepth:(unsigned long long)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setWorkHandler:(id /* block */)arg1;
- (void)setWorkItems:(id)arg1;
- (id)syncQueue;
- (id)timer;
- (void)unprotectedExecuteWorkItems;
- (id /* block */)workHandler;
- (id)workItems;

@end
