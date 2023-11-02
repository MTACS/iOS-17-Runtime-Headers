
@interface CHXPCClientHelper : NSObject {
    id  _clientExportedObject;
    NSXPCConnection * _conn;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _connLock;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSString * _serviceName;
    NSXPCInterface * _whitelistedServerInterface;
}

- (void).cxx_destruct;
- (void)_locked_establishConnection;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 whitelistedServerInterface:(id)arg2 clientExportedObject:(id)arg3 interruptionHandler:(id /* block */)arg4 invalidationHandler:(id /* block */)arg5;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
