
@interface GEOSnappedRouteEdge : NSObject {
    bool  _clippedBack;
    bool  _clippedFront;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _localBounds;
    struct shared_ptr<geo::MapEdgeRoad> { 
        struct MapEdgeRoad {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _mapEdge;
    unsigned long long  _mapEdgeOffset;
    struct vector<GeoCodecsVectorTilePoint, std::allocator<GeoCodecsVectorTilePoint>> { 
        struct GeoCodecsVectorTilePoint {} *__begin_; 
        struct GeoCodecsVectorTilePoint {} *__end_; 
        struct __compressed_pair<GeoCodecsVectorTilePoint *, std::allocator<GeoCodecsVectorTilePoint>> { 
            struct GeoCodecsVectorTilePoint {} *__value_; 
        } __end_cap_; 
    }  _points;
    struct vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> { 
        struct PolylineCoordinate {} *__begin_; 
        struct PolylineCoordinate {} *__end_; 
        struct __compressed_pair<geo::PolylineCoordinate *, std::allocator<geo::PolylineCoordinate>> { 
            struct PolylineCoordinate {} *__value_; 
        } __end_cap_; 
    }  _routeOffsets;
}

@property (nonatomic, readonly) bool clippedBack;
@property (nonatomic, readonly) bool clippedFront;
@property (nonatomic, readonly) GEOMultiSectionFeature *feature;
@property (nonatomic, readonly) struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad {} *x1; struct __shared_weak_count {} *x2; } mapEdge;
@property (nonatomic, readonly) unsigned long long mapEdgeOffset;
@property (nonatomic, readonly) unsigned long long pointCount;
@property (nonatomic, readonly) struct GeoCodecsVectorTilePoint { float x1; float x2; }*points;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffsetA;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffsetB;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; }*routeOffsets;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)calculateRouteOffsetsBetweenA:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 andB:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 overLength:(float)arg3 onRoute:(id)arg4;
- (bool)clippedBack;
- (bool)clippedFront;
- (id)description;
- (id)feature;
- (id)initWithRoadPath:(const void*)arg1 sectionRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad {} *x1; struct __shared_weak_count {} *x2; })mapEdge;
- (unsigned long long)mapEdgeOffset;
- (unsigned long long)pointCount;
- (struct GeoCodecsVectorTilePoint { float x1; float x2; }*)points;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffsetA;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffsetB;
- (struct PolylineCoordinate { unsigned int x1; float x2; }*)routeOffsets;

@end
