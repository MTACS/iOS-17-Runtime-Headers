
@protocol GEORoutePreloadStrategy <NSObject>

@required

- (void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)performTearDown;
- (GEORoutePreloader *)preloader;
- (GEOComposedRoute *)route;
- (void)setPreloader:(GEORoutePreloader *)arg1;
- (void)setRoute:(GEOComposedRoute *)arg1;
- (void)start;
- (void)stop;
- (void)updateWithRoute:(GEOComposedRoute *)arg1 routeMatch:(GEORouteMatch *)arg2;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg1;

@end
