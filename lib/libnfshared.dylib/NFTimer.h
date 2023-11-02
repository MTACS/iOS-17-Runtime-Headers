
@interface NFTimer : NSObject {
    bool  _monotonic;
    unsigned long long  _popTimeInSeconds;
    NSObject<OS_dispatch_source> * _src;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initSleepTimerWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (id)initWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (void)startTimer:(double)arg1;
- (void)startTimer:(double)arg1 leeway:(double)arg2;
- (void)stopTimer;

@end
