
@interface PPNotificationManager : NSObject {
    _PASLock * _lockedData;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (bool)_changePotentiallyAffectsCache:(id)arg1;
+ (id)addCalendarVisibilityObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addContactsObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addEventKitObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addMeCardObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addPortraitChangeObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addPortraitInvalidationObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (void)addSuggestionsObserverForLifetimeOfObject:(id)arg1 block:(id /* block */)arg2;
+ (id)new;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_registerForEventKitChangeTrackingWithGuardedData:(id)arg1;
- (id)addCalendarVisibilityChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addContactsChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addEventKitChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addMeCardChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addPortraitChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addPortraitInvalidationBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)addSuggestionsChangeBlock:(id /* block */)arg1 forLifetimeOfObject:(id)arg2;
- (void)dealloc;
- (void)fetchObjectChangesFromStore:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithQueueName:(const char *)arg1 notificationCenter:(id)arg2;
- (void)setEKStore:(id)arg1;
- (void)simulatePortraitChange;
- (void)simulatePortraitInvalidation;
- (void)stopListening;
- (void)waitOnQueueToDrain;

@end
