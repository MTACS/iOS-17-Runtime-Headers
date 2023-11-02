
@interface NUTimeTransformSlowMo : NUGeometryTransform {
    bool  _isInverse;
    <NUSlowMotionTimeRangeMapper> * _timeMapper;
}

@property (nonatomic, readonly) bool isInverse;
@property (nonatomic, readonly) <NUSlowMotionTimeRangeMapper> *timeMapper;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSlowMoBeginTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 rate:(float)arg3 assetDuration:(double)arg4;
- (id)initWithSlowMoTimeMapper:(id)arg1 isInverse:(bool)arg2;
- (id)inverseTransform;
- (bool)isEqual:(id)arg1;
- (bool)isInverse;
- (id)timeMapper;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })transformTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
