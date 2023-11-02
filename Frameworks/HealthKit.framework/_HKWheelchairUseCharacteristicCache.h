
@interface _HKWheelchairUseCharacteristicCache : NSObject {
    int  _characteristicUpdateToken;
    HKHealthStore * _healthStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
    long long  _queryRetries;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
    HKWheelchairUseObject * _wheelchairUseObject;
}

- (void).cxx_destruct;
- (void)_alertObservers:(id)arg1 didUpdateToWheelchairUser:(bool)arg2;
- (void)_handleFetchError:(id)arg1;
- (void)_handleFetchSuccess:(id)arg1;
- (void)_lock_fetchWheelchairUse;
- (void)_lock_fetchWheelchairUseIfNecessary;
- (bool)_lock_isWheelchairUser;
- (bool)_lock_needsFetch;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (bool)hasFetchedWheelchairUse;
- (id)initWithHealthStore:(id)arg1;
- (bool)isWheelchairUser;
- (void)removeObserver:(id)arg1;

@end
