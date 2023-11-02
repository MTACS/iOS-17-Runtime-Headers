
@interface _EMRemoteInterfaceDistantObject : NSObject <EMXPCProxyCreating> {
    <EMRemoteProxyGenerator> * _proxyGenerator;
    id /* block */  _reattemptHandler;
    EMRemoteConnection * _remoteInterface;
    bool  _synchronous;
}

@property (nonatomic, retain) <EMRemoteProxyGenerator> *proxyGenerator;
@property (nonatomic, readonly, copy) id /* block */ reattemptHandler;
@property (nonatomic, readonly) EMRemoteConnection *remoteInterface;
@property (getter=isSynchronous, nonatomic, readonly) bool synchronous;

- (void).cxx_destruct;
- (void)_forwardStackInvocation:(id)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithRemoteInterface:(id)arg1 proxyGenerator:(id)arg2 synchronous:(bool)arg3 reattemptHandler:(id /* block */)arg4;
- (bool)isSynchronous;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)proxyGenerator;
- (id /* block */)reattemptHandler;
- (id)reattemptingRemoteObjectProxy;
- (id)reattemptingRemoteObjectProxyWithReattemptHandler:(id /* block */)arg1;
- (id)remoteInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setProxyGenerator:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
