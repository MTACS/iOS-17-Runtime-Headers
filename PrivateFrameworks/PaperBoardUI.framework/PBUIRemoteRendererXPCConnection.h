
@interface PBUIRemoteRendererXPCConnection : NSObject <PBUIRemoteRendererConnection> {
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _connectionLock;
    NSXPCListenerEndpoint * _endpoint;
    NSXPCConnection * _lock_connection;
    NSString * _serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultConnection;

- (void).cxx_destruct;
- (id)connectionActivateIfNeededWithError:(out id*)arg1;
- (void)dealloc;
- (id)initToEndpoint:(id)arg1;
- (id)initToServiceName:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
