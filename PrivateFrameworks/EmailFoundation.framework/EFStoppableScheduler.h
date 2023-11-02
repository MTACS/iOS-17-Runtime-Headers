
@interface EFStoppableScheduler : NSObject <EFAssertableScheduler, EFScheduler, EFSuspendableScheduler> {
    struct EFAtomicObject { 
        _Atomic long long cfObject; 
    }  _scheduler;
    EFLocked * _tokens;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <EFScheduler> *scheduler;
@property (readonly) Class superclass;

+ (id)assertableSchedulerWithScheduler:(id)arg1;
+ (id)suspendableSchedulerWithScheduler:(id)arg1;

- (void).cxx_destruct;
- (void)_addCancelationToken:(id)arg1;
- (void)_cancelAllTokens;
- (void)_removeCancelationToken:(id)arg1;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (void)assertIsExecuting:(bool)arg1;
- (void)dealloc;
- (id)initWithScheduler:(id)arg1;
- (void)performBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1;
- (void)performSyncBarrierBlock:(id /* block */)arg1;
- (void)performSyncBlock:(id /* block */)arg1;
- (void)performVoucherPreservingBlock:(id /* block */)arg1;
- (id)performWithObject:(id)arg1;
- (void)resume;
- (id)scheduler;
- (void)stopAndWait;
- (void)suspend;

@end
