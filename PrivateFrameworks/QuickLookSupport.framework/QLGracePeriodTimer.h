
@interface QLGracePeriodTimer : NSObject {
    id /* block */  _action;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    double  _delay;
    NSObject<OS_dispatch_source> * _timer;
}

@property (copy) id /* block */ action;

- (void).cxx_destruct;
- (void)_createTimer;
- (void)_suppress;
- (id /* block */)action;
- (void)arm;
- (id)initWithAction:(id /* block */)arg1 callbackQueue:(id)arg2 delay:(double)arg3;
- (void)setAction:(id /* block */)arg1;
- (void)suppress;

@end
