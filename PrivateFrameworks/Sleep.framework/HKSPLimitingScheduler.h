
@interface HKSPLimitingScheduler : NSObject {
    NSMutableSet * _identifiers;
    bool  _ignoreDelays;
    <HKSPMutexProvider> * _mutexProvider;
    <NAScheduler> * _orderPreservingScheduler;
}

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (id)initWithScheduler:(id)arg1;
- (id)initWithScheduler:(id)arg1 mutexGenerator:(id /* block */)arg2;
- (id)initWithScheduler:(id)arg1 mutexGenerator:(id /* block */)arg2 ignoreDelays:(bool)arg3;
- (void)scheduleTask:(id)arg1;

@end
