
@interface GEOComposedGeometryRoute : GEOComposedRoute

- (id)initSingleLegRouteWithCoordinates:(struct { double x1; double x2; double x3; }*)arg1 count:(unsigned long long)arg2;
- (id)initWithRoutingPathData:(id)arg1;
- (id)initWithRoutingPathData:(id)arg1 trafficColors:(id)arg2 destination:(id)arg3;
- (id)initWithRoutingPathData:(id)arg1 trafficColors:(id)arg2 destinations:(id)arg3;
- (id)initWithRoutingPathData:(id)arg1 trafficColors:(id)arg2 destinations:(id)arg3 isOriginCurrentLocation:(bool)arg4;

@end
