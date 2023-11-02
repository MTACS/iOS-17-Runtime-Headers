
@interface GEOMatchedPathSegment : NSObject {
    struct vector<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>, std::allocator<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate> *, std::allocator<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _coordinates;
    bool  _isDivergentSegment;
    bool  _isFailedSegment;
    bool  _isPartialEnd;
    bool  _isPartialStart;
    GEOMapFeatureRoad * _road;
    struct GEOPolylineCoordinateRange { 
        struct PolylineCoordinate { 
            unsigned int index; 
            float offset; 
        } start; 
        struct PolylineCoordinate { 
            unsigned int index; 
            float offset; 
        } end; 
    }  _roadRange;
    GEOComposedRoute * _route;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; } endLocationCoordinate;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } endRouteCoordinate;
@property (nonatomic) bool isDivergentSegment;
@property (nonatomic, readonly) bool isFailedSegment;
@property (nonatomic, readonly) bool isPartialEnd;
@property (nonatomic, readonly) bool isPartialStart;
@property (nonatomic, readonly) unsigned long long pointCount;
@property (nonatomic, readonly) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; } range;
@property (nonatomic, readonly) GEOMapFeatureRoad *road;
@property (nonatomic, readonly) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; } roadRange;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } startLocationCoordinate;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } startRouteCoordinate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct pair<GEOLocationCoordinate3D, geo::PolylineCoordinate> { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })_interpolatedCoordinateFrom:(const void*)arg1 to:(const void*)arg2 routeCoordinate:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3;
- (struct PolylineCoordinate { unsigned int x1; float x2; })_roadPolylineCoordinateForCoordinate:(struct { double x1; double x2; double x3; })arg1 segmentCoordinateIndex:(unsigned long long)arg2 trimRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)debugDescription;
- (id)description;
- (struct { double x1; double x2; double x3; })endLocationCoordinate;
- (struct PolylineCoordinate { unsigned int x1; float x2; })endRouteCoordinate;
- (id)init;
- (id)initUnmatchedSegmentWithRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg2 isFailedSegment:(bool)arg3;
- (id)initWithRoute:(id)arg1 road:(id)arg2 coordinates:(const void*)arg3 roadRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg4;
- (bool)isDivergentSegment;
- (bool)isFailedSegment;
- (bool)isPartialEnd;
- (bool)isPartialStart;
- (struct { double x1; double x2; double x3; })locationCoordinateAt:(unsigned long long)arg1;
- (struct { double x1; double x2; double x3; })locationCoordinateForRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned long long)pointCount;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })range;
- (id)road;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })roadRange;
- (id)route;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinateAt:(unsigned long long)arg1;
- (void)setIsDivergentSegment:(bool)arg1;
- (struct { double x1; double x2; double x3; })startLocationCoordinate;
- (struct PolylineCoordinate { unsigned int x1; float x2; })startRouteCoordinate;
- (id)trimmedSegmentWithinRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
