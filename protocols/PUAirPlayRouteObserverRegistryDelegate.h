
@protocol PUAirPlayRouteObserverRegistryDelegate <NSObject>

@required

- (void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(PUAirPlayRouteObserverRegistry *)arg1 forRouteObserver:(id <PHAirPlayControllerRouteObserver>)arg2;

@end
