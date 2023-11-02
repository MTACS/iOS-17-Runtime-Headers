
@interface _PASCoalescingTimer : NSObject {
    id /* block */  _coalesceData;
    double  _leewaySeconds;
    _PASLock * _lock;
    id /* block */  _operation;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_replaceCoalescingTimerUsingLockWitness:(id)arg1;
- (void)cancelPendingOperations;
- (void)immediatelyProcessData:(id)arg1;
- (id)initWithQueue:(id)arg1 coalesceData:(id /* block */)arg2 operation:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 coalesceData:(id /* block */)arg3 operation:(id /* block */)arg4;
- (void)processData:(id)arg1 afterDelaySeconds:(double)arg2 coalescingBehavior:(unsigned char)arg3;
- (void)processData:(id)arg1 afterStrictDelaySeconds:(double)arg2;

@end
