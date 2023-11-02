
@interface VNDetectTrajectoriesRequestConfiguration : VNStatefulRequestConfiguration {
    float  _objectMaximumNormalizedRadius;
    float  _objectMinimumNormalizedRadius;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetFrameTime;
    long long  _trajectoryLength;
}

@property (nonatomic) float objectMaximumNormalizedRadius;
@property (nonatomic) float objectMinimumNormalizedRadius;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } targetFrameTime;
@property (nonatomic) long long trajectoryLength;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (float)objectMaximumNormalizedRadius;
- (float)objectMinimumNormalizedRadius;
- (void)setObjectMaximumNormalizedRadius:(float)arg1;
- (void)setObjectMinimumNormalizedRadius:(float)arg1;
- (void)setTargetFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTrajectoryLength:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetFrameTime;
- (long long)trajectoryLength;

@end
