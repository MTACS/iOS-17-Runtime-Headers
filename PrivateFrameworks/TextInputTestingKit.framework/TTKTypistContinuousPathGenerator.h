
@interface TTKTypistContinuousPathGenerator : TTKDefaultContinuousPathGenerator {
    double  _alpha;
    double  _currentTimestamp;
}

@property (nonatomic) double alpha;

- (id)_generateControlPoints:(id)arg1 alpha:(double)arg2;
- (id)_generateTouchPointsOnPath:(id)arg1 withSegmentTiming:(id)arg2;
- (struct CGPoint { double x1; double x2; })_pointOnCurve:(id)arg1 atTime:(double)arg2;
- (double)alpha;
- (id)generatePathFromInflectionPoints:(id)arg1 segmentTiming:(id)arg2 keys:(id)arg3 string:(id)arg4 layout:(id)arg5;
- (id)generatePathFromInflectionPoints:(id)arg1 timestamp:(double)arg2 segmentTiming:(id)arg3 keys:(id)arg4 string:(id)arg5 layout:(id)arg6;
- (id)initWithParams:(id)arg1;
- (void)setAlpha:(double)arg1;

@end
