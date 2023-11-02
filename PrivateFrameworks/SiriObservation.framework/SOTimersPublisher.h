
@interface SOTimersPublisher : NSObject {
    NSHashTable * _subscribers;
    MTTimerManager * _timerManager;
    SOTimersSnapshot * _timerSnapshot;
    NSObject<OS_dispatch_group> * _timersPublisherDispatchGroup;
    NSObject<OS_dispatch_queue> * _timersPublisherQueue;
    NSString * _typeName;
}

@property (nonatomic, readonly) NSString *typeName;

- (void).cxx_destruct;
- (void)_createNewSnapshotWithCompletion:(id /* block */)arg1;
- (void)_notifySubscribersOfEvent:(long long)arg1;
- (void)_startObserving;
- (void)addSubscriber:(id)arg1;
- (void)dealloc;
- (void)firingTimerChanged:(id)arg1;
- (void)firingTimerDismissed:(id)arg1;
- (void)getCurrentSnapshotWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)removeSubscriber:(id)arg1;
- (void)stateReset:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)timersAdded:(id)arg1;
- (void)timersRemoved:(id)arg1;
- (void)timersUpdated:(id)arg1;
- (id)typeName;

@end
