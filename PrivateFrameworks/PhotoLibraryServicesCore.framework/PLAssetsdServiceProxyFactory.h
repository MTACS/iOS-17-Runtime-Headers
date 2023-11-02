
@interface PLAssetsdServiceProxyFactory : NSObject <PLXPCAsyncProxyCreating, PLXPCProxyCreating> {
    <PLXPCProxyCreating> * _proxyCreating;
    SEL  _proxyGetterSelector;
    NSObject<OS_dispatch_queue> * _queue;
    <PLXPCProxyCreating> * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_inq_createServiceProxyWithCallStackSymbols:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)_inq_createServiceProxyWithErrorHandler:(id /* block */)arg1;
- (void)_logReplyError:(id)arg1 withCallStackSymbols:(id)arg2;
- (id)_unboostingRemoteObjectProxy;
- (void)addBarrierBlock:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3;
- (id)queue;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)remoteObjectProxyWithErrorHandler:(id /* block */)arg1 handler:(id /* block */)arg2;
- (id)serviceProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
