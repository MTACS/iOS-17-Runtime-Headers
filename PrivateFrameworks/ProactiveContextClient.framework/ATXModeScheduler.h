
@interface ATXModeScheduler : NSObject {
    id /* block */  _block;
    double  _leewaySeconds;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _scheduledDate;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)cancelPendingOperation;
- (id)init;
- (id)initWithQueue:(id)arg1 operationBlock:(id /* block */)arg2 andLeeway:(double)arg3;
- (id)runAfterDelaySecondsIfNotYetScheduled:(double)arg1;

@end
