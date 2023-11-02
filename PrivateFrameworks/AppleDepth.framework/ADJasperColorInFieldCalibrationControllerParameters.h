
@interface ADJasperColorInFieldCalibrationControllerParameters : NSObject {
    float  _allowedDriftFromSymmetricCrop;
    float  _allowedFrameCropHeightThreshold;
    float  _allowedFrameCropWidthThreshold;
    float  _allowedFrameRatio;
    float  _allowedFrameRatioThreshold;
    float  _minRotationBetweenFrames;
    unsigned int  _numberOfMinimalRangeSpots;
    unsigned int  _numberOfValidSpotsForValidFrame;
    unsigned short  _sceneDiversityMinChangedSpots;
    float  _sceneDiversityMinDepthDiff;
    float  _sensorHeightFromWidthAnd4By3Ratio;
    float  _thresholdDepthValue;
    float  _thresholdPrecOfValidDepth;
}

@property (nonatomic) float allowedDriftFromSymmetricCrop;
@property (nonatomic) float allowedFrameCropHeightThreshold;
@property (nonatomic) float allowedFrameCropWidthThreshold;
@property (nonatomic) float allowedFrameRatio;
@property (nonatomic) float allowedFrameRatioThreshold;
@property (nonatomic) float minRotationBetweenFrames;
@property (nonatomic) unsigned int numberOfMinimalRangeSpots;
@property (nonatomic) unsigned int numberOfValidSpotsForValidFrame;
@property (nonatomic) unsigned short sceneDiversityMinChangedSpots;
@property (nonatomic) float sceneDiversityMinDepthDiff;
@property (nonatomic) float sensorHeightFromWidthAnd4By3Ratio;
@property (nonatomic) float thresholdDepthValue;
@property (nonatomic) float thresholdPrecOfValidDepth;

- (float)allowedDriftFromSymmetricCrop;
- (float)allowedFrameCropHeightThreshold;
- (float)allowedFrameCropWidthThreshold;
- (float)allowedFrameRatio;
- (float)allowedFrameRatioThreshold;
- (id)init;
- (id)initWithFlowType:(int)arg1;
- (float)minRotationBetweenFrames;
- (unsigned int)numberOfMinimalRangeSpots;
- (unsigned int)numberOfValidSpotsForValidFrame;
- (unsigned short)sceneDiversityMinChangedSpots;
- (float)sceneDiversityMinDepthDiff;
- (float)sensorHeightFromWidthAnd4By3Ratio;
- (void)setAllowedDriftFromSymmetricCrop:(float)arg1;
- (void)setAllowedFrameCropHeightThreshold:(float)arg1;
- (void)setAllowedFrameCropWidthThreshold:(float)arg1;
- (void)setAllowedFrameRatio:(float)arg1;
- (void)setAllowedFrameRatioThreshold:(float)arg1;
- (void)setMinRotationBetweenFrames:(float)arg1;
- (void)setNumberOfMinimalRangeSpots:(unsigned int)arg1;
- (void)setNumberOfValidSpotsForValidFrame:(unsigned int)arg1;
- (void)setSceneDiversityMinChangedSpots:(unsigned short)arg1;
- (void)setSceneDiversityMinDepthDiff:(float)arg1;
- (void)setSensorHeightFromWidthAnd4By3Ratio:(float)arg1;
- (void)setThresholdDepthValue:(float)arg1;
- (void)setThresholdPrecOfValidDepth:(float)arg1;
- (float)thresholdDepthValue;
- (float)thresholdPrecOfValidDepth;

@end
