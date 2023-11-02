
@interface ARSceneReconstructionOptions : NSObject <NSCopying> {
    long long  _bucketsCount;
    bool  _deterministicMode;
    bool  _enableOccupancyMapping;
    bool  _lowQosSchedulingEnabled;
    float  _minDepthUncertaintyThreshold;
    long long  _preset;
    long long  _voxelSize;
}

@property (nonatomic) long long bucketsCount;
@property (nonatomic) bool deterministicMode;
@property (nonatomic) bool enableOccupancyMapping;
@property (nonatomic) bool lowQosSchedulingEnabled;
@property (nonatomic) float minDepthUncertaintyThreshold;
@property (nonatomic) long long preset;
@property (nonatomic) long long voxelSize;

- (long long)bucketsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deterministicMode;
- (bool)enableOccupancyMapping;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)lowQosSchedulingEnabled;
- (float)minDepthUncertaintyThreshold;
- (long long)preset;
- (void)setBucketsCount:(long long)arg1;
- (void)setDeterministicMode:(bool)arg1;
- (void)setEnableOccupancyMapping:(bool)arg1;
- (void)setLowQosSchedulingEnabled:(bool)arg1;
- (void)setMinDepthUncertaintyThreshold:(float)arg1;
- (void)setPreset:(long long)arg1;
- (void)setVoxelSize:(long long)arg1;
- (long long)voxelSize;

@end
