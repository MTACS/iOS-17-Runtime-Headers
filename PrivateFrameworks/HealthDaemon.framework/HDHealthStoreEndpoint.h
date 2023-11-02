
@interface HDHealthStoreEndpoint : NSObject <HDProfileReadyObserver, HKHealthStoreEndpointInterface, _HKXPCExportable> {
    HDXPCClient * _client;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    HDDaemon * _daemon;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDHealthStoreServer * _server;
    NSMutableArray * _serverCompletionsAwaitingProfileReady;
}

@property (nonatomic, readonly) HDXPCClient *client;
@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKProfileIdentifier *profileIdentifier;
@property (nonatomic, readonly) HDHealthStoreServer *server;
@property (readonly) Class superclass;

+ (id)endpointWithClient:(id)arg1 healthDaemon:(id)arg2;

- (void).cxx_destruct;
- (id)client;
- (void)connectionConfigured;
- (void)connectionInvalidated;
- (id)daemon;
- (id)exportedInterface;
- (id)initWithClient:(id)arg1 daemon:(id)arg2;
- (void)invalidate;
- (void)profileDidBecomeReady:(id)arg1;
- (id)profileIdentifier;
- (id)remoteInterface;
- (void)remote_serverForConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)server;

@end
