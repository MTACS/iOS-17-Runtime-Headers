
@interface HDQueryControlServer : NSObject <HDQueryServerDelegate, HDTaskServerEndpointDelegate> {
    HDHealthStoreClient * _client;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDProfile * _profile;
    NSMutableDictionary * _queryServerEndpointsByUUID;
    NSMutableDictionary * _queryServersByUUID;
    HDHealthStoreServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createQueryServerEndpointForIdentifier:(id)arg1 queryUUID:(id)arg2 configuration:(id)arg3 forceReactivation:(bool)arg4 error:(id*)arg5;
- (bool)hasActiveQueries;
- (id)initWithParentServer:(id)arg1 connectionQueue:(id)arg2;
- (void)invalidate;
- (void)queryServer:(id)arg1 requestsAuthorizationWithContext:(id)arg2 completion:(id /* block */)arg3;
- (void)queryServer:(id)arg1 requestsAuthorizationWithContext:(id)arg2 promptIfNeeded:(bool)arg3 completion:(id /* block */)arg4;
- (void)queryServer:(id)arg1 shouldStartWithCompletion:(id /* block */)arg2;
- (void)queryServerDidFinish:(id)arg1;
- (void)taskServerDidFailToInitializeForUUID:(id)arg1;
- (void)taskServerDidFinishInitialization:(id)arg1;
- (void)taskServerDidInvalidate:(id)arg1;

@end
