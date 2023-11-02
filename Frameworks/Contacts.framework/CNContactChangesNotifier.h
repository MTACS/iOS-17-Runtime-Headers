
@interface CNContactChangesNotifier : NSObject <CNCoalescingTimerDelegate> {
    CNContactStore * _contactStore;
    <CNScheduler> * _downstream;
    CNCoalescingTimer * _entryCompactionTimer;
    bool  _observingNotification;
    CNMutableMultiDictionary * _registeredObservers;
    <CNScheduler> * _resourceLock;
    <CNScheduler> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedNotifier;
+ (id)workQueue_createFetchersFromRegisteredObservers:(id)arg1;

- (void).cxx_destruct;
- (void)contactStoreDidChange:(id)arg1;
- (id)init;
- (id)initWithContactStore:(id)arg1 downstreamScheduler:(id)arg2 schedulerProvider:(id)arg3;
- (void)registerObserver:(id)arg1 forContact:(id)arg2;
- (void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3;
- (void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)removeEntriesWithoutObservers;
- (void)timerDidEmitEvent:(id)arg1;
- (void)unregisterObserver:(id)arg1 forContact:(id)arg2;
- (void)unregisterObserver:(id)arg1 forContact:(id)arg2 completionHandler:(id /* block */)arg3;

@end
