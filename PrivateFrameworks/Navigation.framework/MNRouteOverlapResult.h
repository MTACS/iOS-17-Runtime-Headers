
@interface MNRouteOverlapResult : NSObject {
    GEOPolylineCoordinateRangeArray * _overlapRanges;
    NSUUID * _routeID;
    struct GEOPolylineCoordinateRange { 
        struct PolylineCoordinate { 
            unsigned int index; 
            float offset; 
        } start; 
        struct PolylineCoordinate { 
            unsigned int index; 
            float offset; 
        } end; 
    }  _routeRange;
    GEOPolylineCoordinateRangeArray * _uniqueRanges;
}

@property (nonatomic, retain) GEOPolylineCoordinateRangeArray *overlapRanges;
@property (nonatomic, retain) NSUUID *routeID;
@property (nonatomic) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; } routeRange;
@property (nonatomic, retain) GEOPolylineCoordinateRangeArray *uniqueRanges;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)overlapRanges;
- (id)routeID;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })routeRange;
- (void)setOverlapRanges:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUniqueRanges:(id)arg1;
- (id)uniqueRanges;

@end
