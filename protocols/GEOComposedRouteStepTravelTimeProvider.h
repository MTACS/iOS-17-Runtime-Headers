
@protocol GEOComposedRouteStepTravelTimeProvider <NSObject>

@required

- (double)distance;
- (struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })routeCoordinateRange;
- (GEOTimeCheckpoints *)timeCheckpoints;
- (double)travelTime;

@end
