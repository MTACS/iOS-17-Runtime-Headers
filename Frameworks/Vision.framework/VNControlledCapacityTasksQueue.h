
@interface VNControlledCapacityTasksQueue : NSObject {
    long long  _maximumTasksCount;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property long long maximumTasksCount;

+ (void)setTasksTimeout:(long long)arg1;
+ (long long)tasksTimeout;

- (void).cxx_destruct;
- (bool)currentQueueIsSynchronizationQueue;
- (id)description;
- (void)dispatchGroupAsyncByPreservingQueueCapacity:(id)arg1 block:(id /* block */)arg2;
- (bool)dispatchGroupWait:(id)arg1 error:(id*)arg2;
- (void)dispatchReportBlockCompletion;
- (void)dispatchSyncByPreservingQueueCapacity:(id /* block */)arg1;
- (id)initWithDispatchQueueLabel:(id)arg1 maximumTasksCount:(long long)arg2;
- (long long)maximumTasksCount;
- (void)setMaximumTasksCount:(long long)arg1;

@end
