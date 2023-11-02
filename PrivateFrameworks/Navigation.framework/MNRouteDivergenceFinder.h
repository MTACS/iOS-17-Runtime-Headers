
@interface MNRouteDivergenceFinder : NSObject {
    double  _distancePaddingWhenAlternating;
    double  _minLengthMetersForConvergence;
    double  _toleranceMeters;
}

@property (nonatomic) double minLengthMetersForConvergence;
@property (nonatomic) double toleranceMeters;

- (struct PolylineCoordinate { unsigned int x1; float x2; })_closestRouteCoordinateOnRoute:(id)arg1 toLocationCoordinate:(struct { double x1; double x2; double x3; })arg2 inRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg3;
- (double)_distanceFromCoordinate:(struct { double x1; double x2; double x3; })arg1 toSegmentStart:(struct { double x1; double x2; double x3; })arg2 segmentEnd:(struct { double x1; double x2; double x3; })arg3;
- (void)_findFirstConvergenceBetweenRoute:(id)arg1 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 andRoute:(id)arg3 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg4 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg5 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6;
- (void)_findFirstConvergenceBetweenRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg2 andRoute:(id)arg3 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg4 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg5 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6;
- (void)_findFirstDivergenceBetweenRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg2 andRoute:(id)arg3 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg4 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg5 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6;
- (struct PolylineCoordinate { unsigned int x1; float x2; })_firstRouteCoordinateWithinToleranceOnRoute:(id)arg1 nearCoordinate:(struct { double x1; double x2; double x3; })arg2 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg3;
- (double)_offsetForCoordinate:(struct { double x1; double x2; double x3; })arg1 alongSegmentStart:(struct { double x1; double x2; double x3; })arg2 segmentEnd:(struct { double x1; double x2; double x3; })arg3;
- (bool)_pathsDivergeBetweenRoute:(id)arg1 from:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 andRoute:(id)arg3 from:(struct PolylineCoordinate { unsigned int x1; float x2; })arg4 withinDistance:(double)arg5;
- (bool)_pointMeetsConvergenceThreshold:(const struct _MNRouteConvergencePoint { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct PolylineCoordinate { unsigned int x_4_1_1; float x_4_1_2; } x4; struct PolylineCoordinate { unsigned int x_5_1_1; float x_5_1_2; } x5; bool x6; bool x7; }*)arg1 withOtherPoint:(const struct _MNRouteConvergencePoint { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct PolylineCoordinate { unsigned int x_4_1_1; float x_4_1_2; } x4; struct PolylineCoordinate { unsigned int x_5_1_1; float x_5_1_2; } x5; bool x6; bool x7; }*)arg2 outRouteCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3 outRouteCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg4 outDistance:(out double*)arg5;
- (void)_populateConvergencePoints:(void*)arg1 route:(id)arg2 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg3 isRouteA:(bool)arg4;
- (struct PolylineCoordinate { unsigned int x1; float x2; })_routeCoordinateForLocationCoordinate:(struct { double x1; double x2; double x3; })arg1 route:(id)arg2 startIndex:(unsigned long long)arg3;
- (id)_routesArrayIdentifierStrings:(id)arg1;
- (id)_stringForCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (id)findAllDivergenceConvergenceBetweenRoute:(id)arg1 andRoute:(id)arg2;
- (id)findAllOverlapRangesBetweenRoutes:(id)arg1;
- (id)findFirstConvergenceBetweenRoute:(id)arg1 andRoute:(id)arg2;
- (id)findFirstConvergenceBetweenRoute:(id)arg1 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 andRoute:(id)arg3 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg4;
- (id)findFirstDivergenceBetweenRoute:(id)arg1 andRoute:(id)arg2;
- (id)findFirstDivergenceBetweenRoute:(id)arg1 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 andRoute:(id)arg3 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg4;
- (id)findFirstUniqueRangeBetweenRoute:(id)arg1 andRoute:(id)arg2;
- (id)findOverlappingSectionsForRoutes:(id)arg1;
- (id)init;
- (double)minLengthMetersForConvergence;
- (void)setMinLengthMetersForConvergence:(double)arg1;
- (void)setToleranceMeters:(double)arg1;
- (double)toleranceMeters;

@end
