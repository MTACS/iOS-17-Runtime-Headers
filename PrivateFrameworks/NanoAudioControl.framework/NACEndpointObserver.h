
@interface NACEndpointObserver : NSObject {
    _NACAVRoutingDiscoverySession * _nacDiscoverySession;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)fetchRouteForOriginIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)invalidateDiscoverySession;

@end
