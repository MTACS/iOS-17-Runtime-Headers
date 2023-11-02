
@interface CNReplaySubject : CNObservable <CNObserver> {
    CNObservableContractEnforcement * _enforcement;
    NSMutableArray * _observers;
    _CNObservableEventBufferingStrategy * _recentEventStrategy;
    <CNScheduler> * _resourceLock;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNObservableContractEnforcement *enforcement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *observers;
@property (nonatomic, retain) _CNObservableEventBufferingStrategy *recentEventStrategy;
@property (nonatomic, readonly) <CNScheduler> *resourceLock;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeObserver:(id)arg1;
- (id)enforcement;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1 schedulerProvider:(id)arg2;
- (id)initWithQueue:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithSchedulerProvider:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)observers;
- (void)performWithResourceLock:(id /* block */)arg1;
- (id)recentEventStrategy;
- (id)resourceLock;
- (id)resourceLock_removeAllObservers;
- (void)resourceLock_scheduleReplayToObserver:(id)arg1;
- (void)resourceLock_swapBufferingStrategiesGivenNewTerminatingEvent:(id)arg1;
- (id)resourceLock_upToDateObserverFromObserver:(id)arg1;
- (id)resultWithResourceLock:(id /* block */)arg1;
- (id)schedulerProvider;
- (void)setRecentEventStrategy:(id)arg1;
- (id)subscribe:(id)arg1;

@end
