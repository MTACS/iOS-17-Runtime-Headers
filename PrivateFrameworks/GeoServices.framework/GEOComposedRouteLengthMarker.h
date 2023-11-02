
@interface GEOComposedRouteLengthMarker : NSObject {
    double  _length;
    unsigned long long  _pathIndex;
    unsigned long long  _pointIndex;
}

@property (nonatomic) double length;
@property (nonatomic) unsigned long long pathIndex;
@property (nonatomic) unsigned long long pointIndex;

- (long long)compare:(id)arg1;
- (id)description;
- (double)length;
- (unsigned long long)pathIndex;
- (unsigned long long)pointIndex;
- (void)setLength:(double)arg1;
- (void)setPathIndex:(unsigned long long)arg1;
- (void)setPointIndex:(unsigned long long)arg1;

@end
