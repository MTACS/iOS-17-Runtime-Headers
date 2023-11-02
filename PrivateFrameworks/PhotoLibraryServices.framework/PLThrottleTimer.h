
@interface PLThrottleTimer : NSObject {
    SEL  _action;
    NSObject<OS_dispatch_queue> * _invocationQueue;
    bool  _isInvalid;
    bool  _isPaused;
    bool  _isPingedSinceLastFire;
    double  _maxTimeout;
    unsigned long long  _maxTimeoutId;
    NSObject<OS_dispatch_queue> * _queue;
    id  _target;
    double  _timeout;
    unsigned long long  _timeoutId;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) double maxTimeout;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) double timeout;

- (void).cxx_destruct;
- (void)_inqFireWithTimeout:(bool)arg1 timeoutId:(unsigned long long)arg2 maxTimeout:(bool)arg3 maxTimeoutId:(unsigned long long)arg4;
- (void)_inqScheduleTimeout:(bool)arg1 maxTimeout:(bool)arg2;
- (SEL)action;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 invocationQueue:(id)arg3 timeout:(double)arg4 maxTimeout:(double)arg5;
- (void)invalidate;
- (double)maxTimeout;
- (void)ping;
- (void)setPaused:(bool)arg1;
- (id)target;
- (double)timeout;

@end
