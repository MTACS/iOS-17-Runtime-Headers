
@interface MRDestinationResolverDependencies : NSObject

+ (id)defaultDependencies;

- (id)addPlayerPathInvalidationHandler:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (id)createEndpointObserverWithUID:(id)arg1;
- (void)createPlayerPathForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)removePlayerPathInvalidationHandler:(id)arg1;
- (void)resolvePlayerPath:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)retrieveEndpointForContextUID:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)retrieveEndpointForUID:(id)arg1 endpointGroupUID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)retrieveOutputDeviceUIDForOrigin:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;

@end
