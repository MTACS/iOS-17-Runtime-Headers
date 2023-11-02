
@interface SADaemonXPC : NSObject {
    NSXPCInterface * remoteInterface;
    NSXPCConnection * xpcConnection;
}

@property (retain) NSXPCInterface *remoteInterface;
@property (retain) NSXPCConnection *xpcConnection;

+ (id)newWithInvalidationHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInvalidationHandler:(id /* block */)arg1;
- (void)invalidate;
- (id)remoteInterface;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRemoteInterface:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
