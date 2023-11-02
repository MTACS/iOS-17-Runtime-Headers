
@interface _NSObserverList : NSObject {
    _Atomic unsigned int  _observerCount;
    id  _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    id  _owner;
}

- (void).cxx_destruct;
- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)finishObserving;
- (id)init;
- (void)removeObservation:(id)arg1;

@end
