
@interface FPGracePeriodTimer : NSObject {
    id /* block */  _action;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    double  _delay;
    double  _expectedFiringTimeSinceReferenceDate;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)_createTimer;
- (void)arm;
- (void)dealloc;
- (id)initWithAction:(id /* block */)arg1 callbackQueue:(id)arg2 delay:(double)arg3;
- (id)prettyDescription;
- (void)suppress;

@end
