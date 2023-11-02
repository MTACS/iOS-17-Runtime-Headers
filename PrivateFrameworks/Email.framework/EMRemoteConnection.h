
@interface EMRemoteConnection : NSObject <EFLoggable, EMRemoteConnectionRecoveryAssertionDelegate, EMXPCProxyCreating> {
    _Atomic unsigned int  _activeVouchers;
    <NSXPCProxyCreating> * _currentProxy;
    <EMRemoteProxyGenerator> * _generator;
    struct __CFDictionary { } * _knownSelectors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingReattempts;
    Protocol * _protocol;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _proxyLock;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _recoveryHandlers;
    NSMutableArray * _resetHandlers;
    bool  _waitingForRecovery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <EMRemoteProxyGenerator> *generator;
@property (readonly) unsigned long long hash;
@property (readonly) bool prefersImmediateActivity;
@property (readonly) Protocol *protocol;
@property (readonly) id reattemptingRemoteObjectProxy;
@property (readonly) id remoteObjectProxy;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)_methodSignatureForRemoteSelector:(SEL)arg1;
- (void)_reattemptInvocation:(id)arg1 withProxy:(id)arg2 originalError:(id)arg3;
- (bool)_respondsToRemoteSelector:(SEL)arg1;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2;
- (void)addRecoveryHandler:(id /* block */)arg1;
- (void)addResetHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)generator;
- (id)initWithProtocol:(id)arg1 proxyGenerator:(id)arg2;
- (bool)prefersImmediateActivity;
- (id)protocol;
- (id)proxy;
- (id)proxyCreator:(id*)arg1;
- (id)reattemptingRemoteObjectProxy;
- (id)reattemptingRemoteObjectProxyWithReattemptHandler:(id /* block */)arg1;
- (void)recover;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)requestRecoveryAssertion;
- (void)reset;
- (void)setGenerator:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)voucherInitialized;
- (void)voucherInvalidated;

@end
