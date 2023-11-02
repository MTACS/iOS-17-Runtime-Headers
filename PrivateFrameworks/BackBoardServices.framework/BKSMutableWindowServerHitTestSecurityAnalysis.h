
@interface BKSMutableWindowServerHitTestSecurityAnalysis : BKSWindowServerHitTestSecurityAnalysis

@property (nonatomic) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } cumulativeLayerTransform;
@property (nonatomic) float cumulativeOpacity;
@property (nonatomic) bool hasInsecureFilter;
@property (nonatomic) unsigned int occlusionMask;
@property (nonatomic) float occlusionPercentage;
@property (nonatomic) long long occlusionType;
@property (nonatomic) bool parentsHaveInsecureLayerProperties;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCumulativeLayerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setCumulativeOpacity:(float)arg1;
- (void)setHasInsecureFilter:(bool)arg1;
- (void)setOcclusionMask:(unsigned int)arg1;
- (void)setOcclusionPercentage:(float)arg1;
- (void)setOcclusionType:(long long)arg1;
- (void)setParentsHaveInsecureLayerProperties:(bool)arg1;

@end
