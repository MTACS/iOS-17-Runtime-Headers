
@interface GEOComposedRouteETAUPosition : NSObject {
    struct { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
    double  _timeSinceLastUpdate;
}

@property (nonatomic, readonly) struct { unsigned int x1; float x2; } routeCoordinate;
@property (nonatomic, readonly) double timeSinceLastUpdate;

- (long long)compare:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 andUpdateLocation:(id)arg2 offset:(double)arg3;
- (struct { unsigned int x1; float x2; })routeCoordinate;
- (double)timeSinceLastUpdate;

@end
