
@interface CWFXPCProxyConnection : NSObject <NSXPCProxyCreating> {
    CWFXPCProxy * _XPCProxy;
    id /* block */  _invalidationHandler;
    CWFXPCProxy * _synchronousXPCProxy;
}

@property (copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (id)initWithForwardingTarget:(id)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
