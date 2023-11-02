
@interface VKPolylinePath : NSObject {
    bool  _distanceSnapping;
    struct GradientTraffic { 
        float blend; 
        unsigned char start; 
        unsigned char end; 
    }  _gradientTraffic;
    NSArray * _matchedPathSegments;
    VKPolylineOverlay * _overlay;
    struct vector<gm::Matrix<float, 3, 1>, std::allocator<gm::Matrix<float, 3, 1>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<gm::Matrix<float, 3, 1> *, std::allocator<gm::Matrix<float, 3, 1>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _points;
    struct vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> { 
        struct PolylineCoordinate {} *__begin_; 
        struct PolylineCoordinate {} *__end_; 
        struct __compressed_pair<geo::PolylineCoordinate *, std::allocator<geo::PolylineCoordinate>> { 
            struct PolylineCoordinate {} *__value_; 
        } __end_cap_; 
    }  _polylineCoordinates;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeEnd;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeStart;
    GEOComposedRouteSection * _section;
    double  _sectionLengthScaleFactor;
    double  _startDistance;
    unsigned char  _trafficSpeed;
}

@property (readonly) bool hasCompletedMapMatching;
@property (readonly) bool isMapMatched;
@property (nonatomic, readonly) NSArray *matchedPathSegments;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) void*points;
@property (nonatomic, readonly) const void*polylineCoordinates;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeEnd;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeStart;
@property (nonatomic, readonly) GEOComposedRouteSection *section;
@property (nonatomic) double startDistance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Matrix<float, 3, 1> { float x1[3]; })convertCoordinateToTile:(const struct { double x1; double x2; double x3; }*)arg1;
- (id)description;
- (const struct GradientTraffic { float x1; unsigned char x2; unsigned char x3; }*)gradientTrafficAtIndex:(unsigned int)arg1;
- (bool)hasCompletedMapMatching;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 matchedPathSegments:(id)arg3;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4 matchedPathSegments:(id)arg5;
- (bool)isMapMatched;
- (float)laneHalfWidthAtIndex:(unsigned int)arg1;
- (id)matchedPathSegments;
- (unsigned int)pointCount;
- (void*)points;
- (const void*)polylineCoordinates;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeEnd;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeStart;
- (id)section;
- (void)setRouteEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setRouteStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setStartDistance:(double)arg1;
- (double)startDistance;

@end
