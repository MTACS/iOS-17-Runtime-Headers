
@interface _PASXPCClientHelper : NSObject {
    bool  _allowSystemToUserConnection;
    NSXPCInterface * _allowlistedClientInterface;
    NSXPCInterface * _allowlistedServerInterface;
    NSXPCConnection * _conn;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _connLock;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSObject<OS_os_log> * _logHandle;
    id  _serverInitiatedRequestHandler;
    NSString * _serviceName;
}

- (void).cxx_destruct;
- (void)_locked_establishConnection;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 allowlistedServerInterface:(id)arg2 allowlistedClientInterface:(id)arg3 serverInitiatedRequestHandler:(id)arg4 allowSystemToUserConnection:(bool)arg5 interruptionHandler:(id /* block */)arg6 invalidationHandler:(id /* block */)arg7 logHandle:(id)arg8;
- (id)initWithServiceName:(id)arg1 allowlistedServerInterface:(id)arg2 allowlistedClientInterface:(id)arg3 serverInitiatedRequestHandler:(id)arg4 interruptionHandler:(id /* block */)arg5 invalidationHandler:(id /* block */)arg6 logHandle:(id)arg7;
- (id)initWithServiceName:(id)arg1 whitelistedServerInterface:(id)arg2 whitelistedClientInterface:(id)arg3 serverInitiatedRequestHandler:(id)arg4 interruptionHandler:(id /* block */)arg5 invalidationHandler:(id /* block */)arg6 logHandle:(id)arg7;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
