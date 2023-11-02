
@interface SOClockTimerManager : NSObject {
    AFInstanceContext * _instanceContext;
    MTTimerManager * _mtTimerManager;
    NSMutableDictionary * _registeredObservations;
}

+ (void)warmUp;

- (void).cxx_destruct;
- (id)_registeredObservations;
- (void)addHandler:(id /* block */)arg1 forEvent:(long long)arg2;
- (id)addTimer:(id)arg1;
- (void)checkIn;
- (void)dealloc;
- (id)dismissTimerWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithInstanceContext:(id)arg1;
- (void)removeHandlerForEvent:(long long)arg1;
- (id)removeTimer:(id)arg1;
- (id)timers;
- (id)updateTimer:(id)arg1;

@end
