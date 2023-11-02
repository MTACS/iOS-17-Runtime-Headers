
@interface LNWatchdogTimer : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    double  _interval;
    double  _remainingInterval;
    double  _startTime;
    bool  _stopped;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) double interval;
@property (nonatomic) double remainingInterval;
@property (nonatomic) double startTime;
@property (getter=_isStopped, nonatomic) bool stopped;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timerSource;

- (void).cxx_destruct;
- (void)_cancel;
- (bool)_cancelIfNotAlreadyCanceled;
- (bool)_isCanceled;
- (bool)_isStopped;
- (void)_reset;
- (void)_start;
- (void)_stop;
- (void)cancel;
- (bool)cancelIfNotAlreadyCanceled;
- (void)dealloc;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 singleUse:(bool)arg3 timeoutHandler:(id /* block */)arg4;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(id /* block */)arg3;
- (id)initWithTimeoutInterval:(double)arg1 singleUse:(bool)arg2 timeoutHandler:(id /* block */)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(id /* block */)arg2;
- (id)internalQueue;
- (double)interval;
- (bool)isCanceled;
- (bool)isStopped;
- (double)remainingInterval;
- (void)reset;
- (void)setRemainingInterval:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStopped:(bool)arg1;
- (void)start;
- (double)startTime;
- (void)stop;
- (id)timerSource;

@end
