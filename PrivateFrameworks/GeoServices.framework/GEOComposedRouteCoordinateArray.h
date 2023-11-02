
@interface GEOComposedRouteCoordinateArray : NSObject <NSSecureCoding> {
    unsigned long long  _coordinateCount;
    GEOPolylineCoordinateRangeArray * _noMatchRanges;
    NSArray * _paths;
    bool  _usesRoutingPathPoints;
    bool  _usesZilch;
}

@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) GEOPolylineCoordinateRangeArray *noMatchRanges;
@property (nonatomic, readonly) unsigned long long pathsCount;
@property (nonatomic, readonly) bool usesRoutingPathPoints;
@property (nonatomic, readonly) bool usesZilch;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void*)_addPointToRoutingPath:(void*)arg1 coordinate:(struct { double x1; double x2; double x3; })arg2 supportPoint:(id)arg3 distanceFromStart:(double)arg4;
- (void)_populateRoutingPathWithCoordinate:(void*)arg1 pathIndex:(unsigned long long)arg2 startIndex:(unsigned long long)arg3 endIndex:(unsigned long long)arg4 distanceFromStartOffset:(double)arg5 supportPointsOnly:(bool)arg6 convertEndpointsToSupportPoints:(bool)arg7;
- (id)compressedDataForRoutingPath:(const void*)arg1;
- (id)compressedZilchDataToEndOfPathFromIndex:(unsigned long long)arg1;
- (unsigned long long)coordinateCount;
- (unsigned long long)coordinateCountForPathAtIndex:(unsigned long long)arg1;
- (struct { double x1; double x2; double x3; })coordinateForRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (struct { double x1; double x2; double x3; })coordinateOnPath:(unsigned long long)arg1 coordinateIndex:(unsigned long long)arg2;
- (struct { double x1; double x2; double x3; })coordinateOnRouteAt:(unsigned long long)arg1;
- (id)description;
- (double)distanceBetweenIndex:(unsigned long long)arg1 andIndex:(unsigned long long)arg2;
- (double)distanceBetweenRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 andRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (double)distanceFromStartToEndOfPathIndex:(unsigned long long)arg1;
- (double)distanceFromStartToIndex:(unsigned long long)arg1;
- (double)distanceFromStartToRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (double)distanceFromStartToStartOfPathIndex:(unsigned long long)arg1;
- (double)distanceToEndFromIndex:(unsigned long long)arg1;
- (double)distanceToEndFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoRoutingPathsData:(id)arg1;
- (id)initWithGeoRoutingPathsData:(id)arg1 geoPathMapMatcherInstructions:(id)arg2;
- (id)initWithPointData:(id)arg1 lengthMarkers:(id)arg2 usesZilch:(bool)arg3;
- (struct PolylineCoordinate { unsigned int x1; float x2; })nearestSupportPointAfterRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })nearestSupportPointBeforeRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned long long)nearestSupportPointIndexForRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 beforeCoordinate:(bool)arg2;
- (id)noMatchRanges;
- (unsigned long long)pathIndexForRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned long long)pathIndexForRouteIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinateForDistance:(double)arg1 afterRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinateForDistance:(double)arg1 beforeRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinateForDistanceAfterStart:(double)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinateForDistanceBeforeEnd:(double)arg1;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })routeCoordinateRangeForPathIndex:(unsigned long long)arg1;
- (unsigned long long)routeIndexForLocalIndex:(unsigned long long)arg1 onPath:(unsigned long long)arg2;
- (id)routingPathDataFromStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 supportPointsOnly:(bool)arg3;
- (id)routingPathDataWithSupportPointFromStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 supportPointsOnly:(bool)arg3 startPathSegment:(id)arg4;
- (struct RoutingPathLeg { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; struct HasBits<1UL> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *x_1_2_1; } x_6_1_1; } x6; })routingPathDataWithinSupportPoints:(id)arg1 supportPointsOnly:(bool)arg2;
- (struct RoutingPathLeg { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; struct HasBits<1UL> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *x_1_2_1; } x_6_1_1; } x6; })routingPathFromStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 supportPointsOnly:(bool)arg3 convertEndpointsToSupportPoints:(bool)arg4;
- (struct RoutingPathLeg { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; struct HasBits<1UL> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *x_1_2_1; } x_6_1_1; } x6; })routingPathWithSupportPointFromStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 supportPointsOnly:(bool)arg3 startPathSegment:(id)arg4;
- (id)supportPointAtRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (id)supportPointsEncompassingRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)supportPointsForPathAtIndex:(unsigned long long)arg1;
- (id)supportPointsWithinRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;
- (bool)usesRoutingPathPoints;
- (bool)usesZilch;
- (struct ControlPoint { int x1; struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_2_1_1; struct Latitude { unsigned int x_2_2_1; } x_2_1_2; int x_2_1_3; } x2; struct Angle { unsigned short x_3_1_1; } x3; struct FormOfWay { int x_4_1_1; } x4; struct FunctionalClass { int x_5_1_1; } x5; int x6; })zilchControlPointAt:(unsigned long long)arg1;

@end
