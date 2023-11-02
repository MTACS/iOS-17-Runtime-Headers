
@interface GEOObserverHashTable : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _observerQueues;
    NSHashTable * _observers;
    Protocol * _protocol;
}

@property (nonatomic, readonly) NSArray *allObservers;
@property (nonatomic, readonly) bool hasObservers;

- (void).cxx_destruct;
- (id)allObservers;
- (id)description;
- (void)enumerateObserversWithGroup:(id)arg1 visitor:(id /* block */)arg2;
- (void)forwardInvocation:(id)arg1;
- (bool)hasObservers;
- (id)init;
- (id)initWithProtocol:(id)arg1 queue:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)registerObserver:(id)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)unregisterObserver:(id)arg1;

@end
