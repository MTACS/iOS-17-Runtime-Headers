
@interface CARObserverHashTable : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    Protocol * _protocol;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) bool hasObservers;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)callbackQueue;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (bool)hasObservers;
- (id)initWithProtocol:(id)arg1;
- (id)initWithProtocol:(id)arg1 callbackQueue:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeObserver:(id)arg1;

@end
