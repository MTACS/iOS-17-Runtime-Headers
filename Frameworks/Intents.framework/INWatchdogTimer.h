
@interface INWatchdogTimer : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    double  _interval;
    bool  _isStopped;
    double  _remainingInterval;
    double  _startTime;
    NSObject<OS_dispatch_source> * _timerSource;
}

- (void).cxx_destruct;
- (void)_cancel;
- (bool)_cancelIfNotAlreadyCanceled;
- (bool)_isCanceled;
- (void)_reset;
- (void)_start;
- (void)_stop;
- (void)cancel;
- (bool)cancelIfNotAlreadyCanceled;
- (void)dealloc;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(id /* block */)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(id /* block */)arg2;
- (bool)isCanceled;
- (void)start;
- (void)stop;

@end
