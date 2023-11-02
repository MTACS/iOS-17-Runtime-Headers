
@interface VNDetectScreenGazeRequestConfiguration : VNStatefulRequestConfiguration {
    long long  _temporalSmoothingFrameCount;
}

@property (nonatomic) long long temporalSmoothingFrameCount;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (void)setTemporalSmoothingFrameCount:(long long)arg1;
- (long long)temporalSmoothingFrameCount;

@end
