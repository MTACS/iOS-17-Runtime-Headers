
@interface MusicKit_SoftLinking_MPAVRoutingController : NSObject <MPAVRoutingControllerDelegate> {
    id /* block */  _routesDidUpdate;
    MPAVRoutingController * _underlyingRoutingController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ routesDidUpdate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleRoutesDidChange:(id)arg1;
- (void)beginRouteDiscovery;
- (void)endRouteDiscovery;
- (id)init;
- (id /* block */)routesDidUpdate;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setRoutesDidUpdate:(id /* block */)arg1;

@end
