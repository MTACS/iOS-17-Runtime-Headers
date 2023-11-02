
@interface SUAutoUpdatePasscodePolicy : NSObject {
    NSObject<OS_dispatch_queue> * _observerCalloutQueue;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _queue_currentPolicyType;
    NSHashTable * _queue_observers;
    int  _stateChangedNotifyToken;
}

@property (nonatomic, readonly) unsigned long long currentPolicyType;

+ (id)sharedInstance;

- (id)_init;
- (bool)_isValidPasscodePolicyType:(unsigned long long)arg1;
- (void)addObserver:(id)arg1;
- (unsigned long long)currentPolicyType;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)setCurrentPolicyType:(unsigned long long)arg1;
- (id)stringForCurrentPolicy;

@end
