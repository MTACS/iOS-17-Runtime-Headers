
@interface TweakTimer : NSObject {
    unsigned long long  _updateIntervalMS;
    NSObject<OS_dispatch_source> * _updateTimer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setUpdateInterval:(double)arg1;
- (void)startAttachedTimerWithBlock:(id /* block */)arg1 onQueue:(id)arg2;
- (void)stopAttachedTimer;

@end
