
@interface SLGracePeriodTimer : NSObject {
    id /* block */  _action;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    double  _delay;
    double  _expectedFiringTimeSinceReferenceDate;
    NSObject<OS_dispatch_source> * _timer;
}

@property (getter=isValid, readonly) bool valid;

+ (id)timerWithQueue:(id)arg1 delay:(double)arg2 action:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_createTimer;
- (void)arm;
- (void)dealloc;
- (id)description;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 action:(id /* block */)arg3;
- (bool)isValid;
- (void)suppress;

@end
