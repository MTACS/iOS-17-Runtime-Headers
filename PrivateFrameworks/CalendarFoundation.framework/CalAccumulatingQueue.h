
@interface CalAccumulatingQueue : NSObject {
    id /* block */  _block;
    NSMutableDictionary * _context;
    double  _delay;
    bool  _executionPending;
    NSObject<OS_dispatch_source> * _pendingExecutionTimer;
    unsigned long long  _pendingPopTime;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _tags;
    id /* block */  _throttleBlock;
}

- (void).cxx_destruct;
- (void)_callTargetBlockAndReset;
- (void)_cancelPendingTimer;
- (void)_executeBlockWithThrottleBlock;
- (void)_executeBlockWithoutThrottleBlock;
- (id)_initWithQueue:(id)arg1 andBlock:(id /* block */)arg2 delay:(double)arg3 throttle:(id /* block */)arg4;
- (void)_scheduleTimerWithDelay:(double)arg1;
- (void)executeBlock;
- (id)initWithQueue:(id)arg1 andBlock:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1 andBlock:(id /* block */)arg2 delay:(double)arg3;
- (id)initWithQueue:(id)arg1 andBlock:(id /* block */)arg2 throttle:(id /* block */)arg3;
- (void)updateTags:(id)arg1;
- (void)updateTags:(id)arg1 withContext:(id)arg2;
- (void)updateTagsAndExecuteBlock:(id)arg1;
- (void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2;

@end
