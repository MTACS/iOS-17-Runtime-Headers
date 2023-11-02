
@interface _GEORouteMatchingSegment : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    }  _endCoordinate;
    float  _endRouteCoordinateOffset;
    struct { 
        double latitude; 
        double longitude; 
    }  _startCoordinate;
    unsigned int  _startPointIndex;
    float  _startRouteCoordinateOffset;
    GEOComposedRouteStep * _step;
}

@property (nonatomic) struct { double x1; double x2; } endCoordinate;
@property (nonatomic) float endRouteCoordinateOffset;
@property (nonatomic) struct { double x1; double x2; } startCoordinate;
@property (nonatomic) unsigned int startPointIndex;
@property (nonatomic) float startRouteCoordinateOffset;
@property (nonatomic, retain) GEOComposedRouteStep *step;

- (void).cxx_destruct;
- (id)description;
- (double)distanceFromCoordinate:(struct { double x1; double x2; })arg1 outCoordinateOnSegment:(struct { double x1; double x2; }*)arg2 outRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3;
- (struct { double x1; double x2; })endCoordinate;
- (float)endRouteCoordinateOffset;
- (void)setEndCoordinate:(struct { double x1; double x2; })arg1;
- (void)setEndRouteCoordinateOffset:(float)arg1;
- (void)setStartCoordinate:(struct { double x1; double x2; })arg1;
- (void)setStartPointIndex:(unsigned int)arg1;
- (void)setStartRouteCoordinateOffset:(float)arg1;
- (void)setStep:(id)arg1;
- (struct { double x1; double x2; })startCoordinate;
- (unsigned int)startPointIndex;
- (float)startRouteCoordinateOffset;
- (id)step;

@end
