
@interface COObserverSet : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSOperationQueue * _queue;
    NSHashTable * _registrations;
}

@property (nonatomic, readonly) NSOperationQueue *queue;
@property (nonatomic, readonly) NSHashTable *registrations;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (id)addObserverForName:(id)arg1 observable:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)init;
- (void)postNotification:(id)arg1;
- (id)queue;
- (id)registeredNames;
- (id)registrations;
- (void)removeObserver:(id)arg1;

@end
