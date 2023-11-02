
@interface HKSPAccumulator : NSObject {
    NSMutableSet * _accumulatedValues;
    <NAScheduler> * _scheduler;
    HKSPThrottler * _throttler;
}

- (void).cxx_destruct;
- (void)accumulateValue:(id)arg1;
- (void)accumulateValues:(id)arg1;
- (id)initWithInterval:(double)arg1 updateBlock:(id /* block */)arg2;
- (id)initWithInterval:(double)arg1 updateBlock:(id /* block */)arg2 scheduler:(id)arg3;
- (id)initWithInterval:(double)arg1 updateBlock:(id /* block */)arg2 scheduler:(id)arg3 mutexGenerator:(id /* block */)arg4;

@end
