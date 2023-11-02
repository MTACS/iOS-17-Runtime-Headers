
@interface BRKDataCollectionScheduler : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSBackgroundActivityScheduler * _scheduler;
    NSObject<OS_dispatch_semaphore> * _sema;
}

- (void).cxx_destruct;
- (void)_queue_schedule:(id /* block */)arg1;
- (void)_queue_setSchedulerCriteria;
- (id)init;
- (void)schedule:(id /* block */)arg1;

@end
