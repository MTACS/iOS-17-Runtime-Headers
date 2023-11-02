
@interface PPXPCClientHelper : NSObject {
    NSXPCInterface * _allowedClientInterface;
    NSXPCInterface * _allowedServerInterface;
    id  _clientExportedObject;
    NSXPCConnection * _conn;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _connLock;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSString * _serviceName;
}

- (void).cxx_destruct;
- (void)_locked_establishConnection;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 allowedServerInterface:(id)arg2 allowedClientInterface:(id)arg3 clientExportedObject:(id)arg4 interruptionHandler:(id /* block */)arg5 invalidationHandler:(id /* block */)arg6;
- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
