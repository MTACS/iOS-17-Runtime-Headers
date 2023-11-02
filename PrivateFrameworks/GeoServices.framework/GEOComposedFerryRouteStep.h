
@interface GEOComposedFerryRouteStep : GEOComposedRouteStep

- (id)initWithComposedRoute:(id)arg1 geoRouteLeg:(id)arg2 geoStep:(id)arg3 stepIndex:(unsigned long long)arg4 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 maneuverPointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)initWithComposedRoute:(id)arg1 geoRouteLeg:(id)arg2 geoStep:(id)arg3 stepIndex:(unsigned long long)arg4 startRouteCoordinate:(struct { unsigned int x1; float x2; })arg5 endRouteCoordinate:(struct { unsigned int x1; float x2; })arg6 maneuverStartRouteCoordinate:(struct { unsigned int x1; float x2; })arg7;

@end
