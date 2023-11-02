
@interface HKThrottleCallback : NSObject {
    bool  _delayInProgress;
    id /* block */  _lastExecutionBlock;
    long long  _throttleDelayInNanoseconds;
    NSObject<OS_dispatch_queue> * _throttlingQueue;
}

@property (nonatomic) bool delayInProgress;
@property (nonatomic, copy) id /* block */ lastExecutionBlock;
@property (nonatomic) long long throttleDelayInNanoseconds;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *throttlingQueue;

- (void).cxx_destruct;
- (bool)delayInProgress;
- (void)executeWithThrottle:(id /* block */)arg1;
- (id)initWithThrottleDelay:(double)arg1;
- (id /* block */)lastExecutionBlock;
- (void)setDelayInProgress:(bool)arg1;
- (void)setLastExecutionBlock:(id /* block */)arg1;
- (void)setThrottleDelayInNanoseconds:(long long)arg1;
- (void)setThrottlingQueue:(id)arg1;
- (long long)throttleDelayInNanoseconds;
- (id)throttlingQueue;

@end
