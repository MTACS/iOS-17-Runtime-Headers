
@interface SiriTimeTimerManager : NSObject <MTTimerManagerIntentSupport> {
    NSObject<MTTimerManagerIntentSupport> * _timerManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<MTTimerManagerIntentSupport> *timerManager;

+ (id)timerManagerWithEndpointUUIDString:(id)arg1;

- (void).cxx_destruct;
- (id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)addTimer:(id)arg1;
- (id)dismissTimerWithIdentifier:(id)arg1;
- (id)initWithEndpointUUID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)removeTimer:(id)arg1;
- (void)setTimerManager:(id)arg1;
- (id)timerManager;
- (id)timers;
- (id)updateTimer:(id)arg1;

@end
