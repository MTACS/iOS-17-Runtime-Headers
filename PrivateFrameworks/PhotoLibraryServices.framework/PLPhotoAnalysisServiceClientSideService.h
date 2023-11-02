
@interface PLPhotoAnalysisServiceClientSideService : NSObject <NSXPCProxyCreating> {
    NSXPCConnection * _connection;
    id /* block */  _instantiationBlock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSXPCInterface * _remoteInterface;
    <NSXPCProxyCreating> * _service;
}

- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1 remoteInterface:(id)arg2 instantiationBlock:(id /* block */)arg3;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)remoteServiceProxyWithErrorHandler:(id /* block */)arg1 reply:(id /* block */)arg2;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteServiceProxyWithErrorHandler:(id /* block */)arg1;

@end
