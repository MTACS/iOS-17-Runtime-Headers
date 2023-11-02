
@interface AFNetworkAvailability : NSObject {
    int  _notifyToken;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    struct AvailabilityState { 
        unsigned int availabilityIsKnown : 1; 
        unsigned int isAvailable : 1; 
    }  _state;
}

+ (id)sharedAvailability;

- (void).cxx_destruct;
- (void)_availabilityChanged;
- (void)_clearState;
- (void)_notifyObservers;
- (void)_startObservingAvailability;
- (void)_stopObservingAvailability;
- (void)_updateState;
- (void)addObserver:(id)arg1;
- (id)init;
- (bool)isAvailable;
- (void)removeObserver:(id)arg1;

@end
