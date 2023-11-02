
@interface QPXPCECRClient : QPECRClient {
    GDEntityResolutionTextClient * _client;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (bool)coolDownECRClientSyncWithError:(id*)arg1;
- (id)init;
- (id)resolveEntitiesWithRequest:(id)arg1 error:(id*)arg2;
- (bool)warmUpECRClientSyncWithError:(id*)arg1;

@end
