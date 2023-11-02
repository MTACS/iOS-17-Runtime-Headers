
@interface CATConcreteTimerSource : NSObject <CATTimerSource> {
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

- (void).cxx_destruct;
- (id)init;
- (id)scheduleInfiniteTimerWithIdentifier:(id)arg1 timeInterval:(double)arg2 queue:(id)arg3 fireHandler:(id /* block */)arg4;
- (id)scheduleOneShotTimerWithIdentifier:(id)arg1 timeInterval:(double)arg2 queue:(id)arg3 fireHandler:(id /* block */)arg4;
- (id)scheduleRepeatTimerWithIdentifier:(id)arg1 timeInterval:(double)arg2 queue:(id)arg3 totalFires:(unsigned long long)arg4 fireHandler:(id /* block */)arg5;

@end
