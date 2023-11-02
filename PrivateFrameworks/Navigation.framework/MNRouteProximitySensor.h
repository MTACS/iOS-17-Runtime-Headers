
@interface MNRouteProximitySensor : NSObject {
    GEOLocation * _location;
    unsigned long long  _proximity;
    double  _proximityThreshold;
    GEORouteMatch * _routeMatch;
    GEORouteMatcher * _routeMatcher;
}

@property (nonatomic, readonly) GEOLocation *closestPointOnRoute;
@property (nonatomic, readonly) GEOComposedRouteStep *closestStepOnRoute;
@property (nonatomic, readonly) double courseOnRoute;
@property (nonatomic, readonly) double distanceFromDestination;
@property (nonatomic, readonly) double distanceFromOrigin;
@property (nonatomic, readonly) double distanceFromRoute;
@property (nonatomic, readonly) GEOLocation *location;
@property (nonatomic, readonly) unsigned long long proximity;
@property (nonatomic) double proximityThreshold;
@property (nonatomic, readonly) GEOComposedRoute *route;

- (void).cxx_destruct;
- (void)_updateProximity;
- (void)_updateRouteMatch;
- (id)closestPointOnRoute;
- (id)closestStepOnRoute;
- (double)courseOnRoute;
- (double)distanceFromDestination;
- (double)distanceFromOrigin;
- (double)distanceFromRoute;
- (id)init;
- (id)initWithRoute:(id)arg1;
- (id)location;
- (unsigned long long)proximity;
- (double)proximityThreshold;
- (id)route;
- (void)setProximityThreshold:(double)arg1;
- (void)updateForLocation:(id)arg1;

@end
