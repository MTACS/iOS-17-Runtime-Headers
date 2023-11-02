
@interface JDCloudColorCalibrationController : NSObject {
    float  _allowedDriftFromSymmetricCrop;
    float  _allowedFrameCropHeightThreshold;
    float  _allowedFrameCropWidthThreshold;
    float  _allowedFrameRatio;
    float  _allowedFrameRatioThreshold;
    bool  _debugOutputEnabled;
    unsigned int  _numberOfValidSpotsForValidFrame;
    float  _sensorHeightFromWidthAnd4By3RatioAssumption;
    float  _thresholdConfidenceValue;
    float  _thresholdDepthValue;
    float  _thresholdPrecOfValidSpot;
}

@property (nonatomic) float allowedDriftFromSymmetricCrop;
@property (nonatomic) float allowedFrameCropHeightThreshold;
@property (nonatomic) float allowedFrameCropWidthThreshold;
@property (nonatomic) float allowedFrameRatio;
@property (nonatomic) float allowedFrameRatioThreshold;
@property (nonatomic) bool debugOutputEnabled;
@property (nonatomic) unsigned int numberOfValidSpotsForValidFrame;
@property (nonatomic) float sensorHeightFromWidthAnd4By3RatioAssumption;
@property (nonatomic) float thresholdConfidenceValue;
@property (nonatomic) float thresholdDepthValue;
@property (nonatomic) float thresholdPrecOfValidSpot;

- (float)allowedDriftFromSymmetricCrop;
- (float)allowedFrameCropHeightThreshold;
- (float)allowedFrameCropWidthThreshold;
- (float)allowedFrameRatio;
- (float)allowedFrameRatioThreshold;
- (bool)controllerLogic:(struct __CVBuffer { }*)arg1 jdpc:(id)arg2 rate:(unsigned int)arg3;
- (bool)debugOutputEnabled;
- (id)init;
- (bool)is:(double)arg1 around:(double)arg2 withPercentage:(float)arg3;
- (bool)is:(double)arg1 distanceFromSymmetricCroppingPoint:(double)arg2 normalizedBySensorDimention:(double)arg3;
- (bool)isFrameValidForCalibration:(struct __CVBuffer { }*)arg1 imageMetadata:(id)arg2 pointCloud:(id)arg3;
- (bool)isInSupportedFormat:(struct __CVBuffer { }*)arg1;
- (bool)isJasperFrameValid:(id)arg1;
- (bool)isPixBufFrameValid:(struct __CVBuffer { }*)arg1 withMetadata:(id)arg2;
- (unsigned int)numberOfValidSpotsForValidFrame;
- (void)rgbj_controller_log:(id)arg1 isErrorMessage:(bool)arg2;
- (float)sensorHeightFromWidthAnd4By3RatioAssumption;
- (void)setAllowedDriftFromSymmetricCrop:(float)arg1;
- (void)setAllowedFrameCropHeightThreshold:(float)arg1;
- (void)setAllowedFrameCropWidthThreshold:(float)arg1;
- (void)setAllowedFrameRatio:(float)arg1;
- (void)setAllowedFrameRatioThreshold:(float)arg1;
- (void)setDebugOutputEnabled:(bool)arg1;
- (void)setNumberOfValidSpotsForValidFrame:(unsigned int)arg1;
- (void)setSensorHeightFromWidthAnd4By3RatioAssumption:(float)arg1;
- (void)setThresholdConfidenceValue:(float)arg1;
- (void)setThresholdDepthValue:(float)arg1;
- (void)setThresholdPrecOfValidSpot:(float)arg1;
- (float)thresholdConfidenceValue;
- (float)thresholdDepthValue;
- (float)thresholdPrecOfValidSpot;

@end
