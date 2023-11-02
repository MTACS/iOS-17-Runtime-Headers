
@interface EFQueueScheduler : NSObject <EFAssertableScheduler, EFSuspendableScheduler> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool prefersImmediateExecution;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (void)assertIsExecuting:(bool)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)performBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1;
- (void)performSyncBarrierBlock:(id /* block */)arg1;
- (void)performSyncBlock:(id /* block */)arg1;
- (void)performVoucherPreservingBlock:(id /* block */)arg1;
- (id)performWithObject:(id)arg1;
- (bool)prefersImmediateExecution;
- (void)resume;
- (void)suspend;

@end
