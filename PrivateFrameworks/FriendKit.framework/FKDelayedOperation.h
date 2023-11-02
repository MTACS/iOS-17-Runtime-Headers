
@interface FKDelayedOperation : NSObject {
    id /* block */  _block;
    int  _blockEnqueued;
    double  _delay;
    double  _lastExecution;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timerSource;
}

- (void).cxx_destruct;
- (void)_queue_executeBlock;
- (void)_queue_updateLastExecution;
- (void)execute;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 block:(id /* block */)arg3;
- (void)invalidate;

@end
