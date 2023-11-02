
@interface AACXPCClient : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSXPCConnection * _endpointConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSXPCConnection * _mainDaemonConnection;
    NSObject<OS_dispatch_queue> * _serverQueue;
}

- (void).cxx_destruct;
- (void)_discardEndpointConnection:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)_remoteProxy:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_remoteSynchronousProxy:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_resetEndpointConnection;
- (void)_serverQueue_initializeDaemonConnection;
- (void)dealloc;
- (id)init;
- (void)sendRequest:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)sendRequest:(unsigned long long)arg1 payload:(id)arg2 completion:(id /* block */)arg3;
- (void)sendRequest:(unsigned long long)arg1 payloadData:(id)arg2 completion:(id /* block */)arg3;
- (void)sendSynchronousRequest:(unsigned long long)arg1 payload:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)sendSynchronousRequest:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;

@end
