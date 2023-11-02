
@interface FPService : NSObject <FPDLifetimeServicing> {
    NSXPCConnection * _connection;
    <FPDLifetimeServicing> * _extender;
    NSXPCInterface * _interface;
    <NSXPCProxyCreating> * _proxy;
}

@property (readonly) id remoteObjectProxy;
@property (readonly) id synchronousRemoteObjectProxy;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4;
- (id)initWithProxy:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4;
- (void)invalidate;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyCreating;
- (void)stopExtendingLifetime;
- (id)synchronousRemoteObjectProxy;

@end
