
@interface _HKSPQueueBackedScheduler : NSObject <HKSPQueueBackedScheduler> {
    NSObject<OS_dispatch_queue> * _queue;
    <NAScheduler> * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) <NAScheduler> *scheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1;
- (id)initWithScheduler:(id)arg1 queue:(id)arg2;
- (void)performBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)queue;
- (void)resume;
- (id)scheduler;
- (void)suspend;

@end
