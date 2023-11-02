
@interface QPInProcessECRClient : QPECRClient {
    GDEntityResolutionInProcessTextClient * _client;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientLock;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (bool)coolDownECRClientSyncWithError:(id*)arg1;
- (id)ecrClientWithError:(id*)arg1;
- (id)init;
- (id)resolveEntitiesWithRequest:(id)arg1 error:(id*)arg2;
- (bool)warmUpECRClientSyncWithError:(id*)arg1;

@end
