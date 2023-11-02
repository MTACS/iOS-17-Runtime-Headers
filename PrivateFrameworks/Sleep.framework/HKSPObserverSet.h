
@interface HKSPObserverSet : NSObject {
    <NAScheduler> * _callbackScheduler;
    NSMapTable * _observerRecords;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSMapTable *observerRecords;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } observersLock;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 callbackScheduler:(id)arg2;
- (void)addObserver:(id)arg1 callbackScheduler:(id)arg2 wasFirst:(bool*)arg3;
- (void)addObserver:(id)arg1 wasFirst:(bool*)arg2;
- (id)callbackScheduler;
- (bool)containsObserver:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateObserversWithBlock:(id /* block */)arg1;
- (id)enumerateObserversWithFutureBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCallbackScheduler:(id)arg1;
- (id)observerRecords;
- (struct os_unfair_lock_s { unsigned int x1; })observersLock;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 wasLast:(bool*)arg2;

@end
