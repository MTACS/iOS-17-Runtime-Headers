
@interface MTObserverStore : NSObject {
    <NAScheduler> * _callbackScheduler;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
}

@property (nonatomic, retain) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } observersLock;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 wasFirst:(bool*)arg2;
- (id)callbackScheduler;
- (bool)containsObserver:(id)arg1;
- (unsigned long long)count;
- (id)currentObservers;
- (void)enumerateObserversWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCallbackScheduler:(id)arg1;
- (id)observers;
- (struct os_unfair_lock_s { unsigned int x1; })observersLock;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 wasLast:(bool*)arg2;
- (void)setCallbackScheduler:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setObserversLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end
