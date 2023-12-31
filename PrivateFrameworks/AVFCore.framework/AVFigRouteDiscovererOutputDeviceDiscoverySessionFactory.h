
@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory : NSObject <AVOutputDeviceDiscoverySessionFactory> {
    <AVFigRouteDiscovererFactory> * _routeDiscovererFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVFigRouteDiscovererFactory> *routeDiscovererFactory;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (id)initWithRouteDiscovererFactory:(id)arg1;
- (id)outputDeviceDiscoverySessionOfClass:(Class)arg1 withDeviceFeatures:(unsigned long long)arg2;
- (id)routeDiscovererFactory;

@end
