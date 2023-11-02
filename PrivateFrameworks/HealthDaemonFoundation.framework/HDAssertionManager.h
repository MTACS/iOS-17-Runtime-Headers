
@interface HDAssertionManager : NSObject {
    NSMutableDictionary * _assertionRecordsByIdentifier;
    NSObject<OS_dispatch_source> * _budgetConsumptionTimer;
    NSObject<OS_dispatch_queue> * _budgetTimerQueue;
    bool  _consumeBudgets;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableDictionary * _observerSetsByAssertionIdentifier;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *budgetTimerQueue;

- (void).cxx_destruct;
- (void)_releaseAssertion:(id)arg1;
- (id)activeAssertionsForIdentifier:(id)arg1;
- (void)addObserver:(id)arg1 forAssertionIdentifier:(id)arg2 queue:(id)arg3;
- (id)allAssertionsForIdentifier:(id)arg1;
- (id)budgetTimerQueue;
- (void)dealloc;
- (bool)hasActiveAssertion:(id)arg1;
- (bool)hasActiveAssertionForIdentifier:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)ownerIdentifiersForAssertionIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forAssertionIdentifier:(id)arg2;
- (void)resumeBudgetConsumption;
- (void)suspendBudgetConsumption;
- (bool)takeAssertion:(id)arg1;

@end
