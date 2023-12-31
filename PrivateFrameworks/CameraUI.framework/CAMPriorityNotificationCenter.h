
@interface CAMPriorityNotificationCenter : NSObject {
    NSObject<OS_dispatch_queue> * __mutexQueue;
    NSNotificationCenter * __notificationCenter;
    NSMutableDictionary * __observersByNameHighPriority;
    NSMutableDictionary * __observersByNameNormalPriority;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_mutexQueue;
@property (nonatomic, readonly, retain) NSNotificationCenter *_notificationCenter;
@property (nonatomic, readonly, retain) NSMutableDictionary *_observersByNameHighPriority;
@property (nonatomic, readonly, retain) NSMutableDictionary *_observersByNameNormalPriority;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)_allSubscriptions;
- (id)_entriesByName:(id)arg1 forPriority:(unsigned long long)arg2 creatingEmptyIfNeeded:(bool)arg3;
- (id)_mutexQueue;
- (void)_mutexQueue_addObserver:(id)arg1 priority:(unsigned long long)arg2 selector:(SEL)arg3 name:(id)arg4 object:(id)arg5;
- (void)_mutexQueue_removeObserver:(id)arg1;
- (id)_notificationCenter;
- (void)_notificationReceiver:(id)arg1;
- (id)_observersByNameHighPriority;
- (id)_observersByNameNormalPriority;
- (id)_observersForPriority:(unsigned long long)arg1;
- (void)_postNotification:(id)arg1 forEntries:(id)arg2;
- (void)_removeObserver:(id)arg1 fromObserversByName:(id)arg2;
- (void)addObserver:(id)arg1 priority:(unsigned long long)arg2 selector:(SEL)arg3 name:(id)arg4 object:(id)arg5;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
