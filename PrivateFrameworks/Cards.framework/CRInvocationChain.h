
@interface CRInvocationChain : NSObject {
    NSPointerArray * _chainedObjects;
    NSObject<OS_dispatch_queue> * _chainedObjectsAccessQueue;
    <CRInvocationChainDelegate> * _delegate;
}

@property (getter=_chainedObjects, setter=_setChainedObjects:, nonatomic, retain) NSPointerArray *chainedObjects;
@property (nonatomic) <CRInvocationChainDelegate> *delegate;

- (void).cxx_destruct;
- (void)_accessChainedObjectsSafely:(id /* block */)arg1;
- (void)_addChainedObject:(id)arg1;
- (id)_chainedObjects;
- (void)_enumerateChainedObjectsUsingBlock:(id /* block */)arg1;
- (void)_forwardInvocation:(id)arg1;
- (bool)_isEligibleForSelector:(SEL)arg1;
- (id)_methodSignatureForSelector:(SEL)arg1;
- (bool)_respondsToSelector:(SEL)arg1;
- (void)_setChainedObjects:(id)arg1;
- (void)addChainedObject:(id)arg1;
- (id)delegate;
- (void)enumerateChainedObjectsUsingBlock:(id /* block */)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (bool)isEligibleForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;

@end
