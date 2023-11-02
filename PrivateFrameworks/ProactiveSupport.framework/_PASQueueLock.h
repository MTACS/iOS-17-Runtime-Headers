
@interface _PASQueueLock : NSObject {
    id  _guardedData;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)guardedDataAssertingLockContext;
- (id)initWithGuardedData:(id)arg1 serialQueue:(id)arg2;
- (void)runAsyncWithLockAcquired:(id /* block */)arg1;
- (void)runWithLockAcquired:(id /* block */)arg1;
- (unsigned char)runWithLockAcquired:(id /* block */)arg1 shouldContinueBlock:(id /* block */)arg2;
- (id)unsafeGuardedData;

@end
