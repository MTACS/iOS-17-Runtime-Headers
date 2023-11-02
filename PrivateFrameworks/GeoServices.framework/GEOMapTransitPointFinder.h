
@interface GEOMapTransitPointFinder : GEOMapRequest {
    struct { 
        double x; 
        double y; 
    }  _centerPoint;
    double  _mapRadius;
    unsigned long long  _parentID;
    unsigned long long  _pointID;
    GEOMapTileFinder * _tileFinder;
}

@property (nonatomic, readonly) GEOMapAccess *map;

- (void).cxx_destruct;
- (void)_validatePoint:(void*)arg1 rect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 localSearch:(struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })arg3 validPointHandler:(id /* block */)arg4;
- (void)cancel;
- (void)findTransitPointsOfType:(unsigned long long)arg1 nodeHandler:(id /* block */)arg2 accessPointHandler:(id /* block */)arg3;
- (id)initWithMap:(id)arg1 approxLocation:(struct { double x1; double x2; })arg2 parentID:(unsigned long long)arg3;
- (id)initWithMap:(id)arg1 approxLocation:(struct { double x1; double x2; })arg2 pointID:(unsigned long long)arg3;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (id)map;

@end
