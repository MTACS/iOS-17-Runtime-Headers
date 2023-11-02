
@interface HDKeyValueDomainManager : NSObject {
    bool  _hasAddedTransactionOnCommitBlock;
    _HKWeakObserversMap * _observers;
    NSMutableSet * _pendingNotificationKeys;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingNotificationLock;
    HDProfile * _profile;
}

@property (nonatomic) HDProfile *profile;

- (void).cxx_destruct;
- (void)_notifyObserversFor:(id)arg1;
- (id)_observerKeyForDomain:(id)arg1;
- (id)_observerKeyForDomainName:(id)arg1 category:(long long)arg2;
- (void)batchNotificationForDomain:(id)arg1 category:(long long)arg2 forTransaction:(id)arg3;
- (id)initWithProfile:(id)arg1;
- (id)profile;
- (void)setProfile:(id)arg1;
- (void)startObservationForDomain:(id)arg1;
- (void)stopObservationForDomain:(id)arg1;

@end
