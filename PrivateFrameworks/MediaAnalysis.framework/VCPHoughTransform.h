
@interface VCPHoughTransform : NSObject {
    int  _accHalfHeight;
    int  _accHeight;
    int  _accWidth;
    int * _accumulator;
    float  _angleStep;
    float * _edgeMap;
    int  _mapHeight;
    int  _mapWidth;
    bool  _verbose;
}

- (int)DetectLinesWithThreshold:(int)arg1 output:(id)arg2;
- (void)Transform;
- (void)dealloc;
- (id)initWithEdgeMap:(float*)arg1 mapWidth:(int)arg2 mapHeight:(int)arg3 angleStep:(float)arg4;

@end