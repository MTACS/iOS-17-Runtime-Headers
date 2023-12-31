
@interface PUObserverRegistry : NSObject {
    NSObject<OS_dispatch_queue> * __observerQueue;
    NSPointerArray * __observers;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_observerQueue;
@property (nonatomic, readonly) NSPointerArray *_observers;

- (void).cxx_destruct;
- (id)_observerQueue;
- (id)_observers;
- (void)enumerateObserversWithBlock:(id /* block */)arg1;
- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
