
@interface BKSMutableHIDEventHitTestLayerInformation : BKSHIDEventHitTestLayerInformation {
    bool  _backgroundStatisticsValid;
}

@property (nonatomic) float backgroundAverage;
@property (nonatomic) float backgroundAverageContrastThreshold;
@property (nonatomic) float backgroundStandardDeviation;
@property (nonatomic) bool backgroundStatisticsValid;
@property (nonatomic) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } cumulativeContentsTransform;
@property (nonatomic) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } cumulativeLayerTransform;
@property (nonatomic) float cumulativeOpacity;
@property (nonatomic) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } cumulativeTransform;
@property (nonatomic) bool detectedOcclusion;
@property (nonatomic) bool hasInsecureFilter;
@property (nonatomic, copy) NSArray *maximumBackgroundColor;
@property (nonatomic, copy) NSArray *minimumBackgroundColor;
@property (nonatomic) unsigned long long validMask;

- (bool)backgroundStatisticsValid;
- (void)setBackgroundAverage:(float)arg1;
- (void)setBackgroundAverageContrastThreshold:(float)arg1;
- (void)setBackgroundStandardDeviation:(float)arg1;
- (void)setBackgroundStatisticsValid:(bool)arg1;
- (void)setCumulativeContentsTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setCumulativeLayerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setCumulativeOpacity:(float)arg1;
- (void)setCumulativeTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setDetectedOcclusion:(bool)arg1;
- (void)setHasInsecureFilter:(bool)arg1;
- (void)setMaximumBackgroundColor:(id)arg1;
- (void)setMinimumBackgroundColor:(id)arg1;
- (void)setValidMask:(unsigned long long)arg1;

@end
