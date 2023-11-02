
@interface EFLazyFuture : EFFuture {
    id /* block */  _block;
    EFPromise * _promise;
    <EFScheduler> * _scheduler;
    NSConditionLock * _stateLock;
}

- (void).cxx_destruct;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id)delegate;
- (id)initWithScheduler:(id)arg1 block:(id /* block */)arg2;
- (bool)isCancelled;
- (bool)isFinished;
- (void)onScheduler:(id)arg1 addFailureBlock:(id /* block */)arg2;
- (void)onScheduler:(id)arg1 addSuccessBlock:(id /* block */)arg2;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultIfAvailable:(id*)arg1;
- (bool)run;
- (void)setDelegate:(id)arg1;
- (bool)tryCancel;

@end
