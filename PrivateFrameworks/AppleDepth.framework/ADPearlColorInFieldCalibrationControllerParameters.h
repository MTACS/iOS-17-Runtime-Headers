
@interface ADPearlColorInFieldCalibrationControllerParameters : NSObject {
    float  _minRotationBetweenFrames;
    float  _thresholdPrecOfValidDepth;
}

@property (nonatomic) float minRotationBetweenFrames;
@property (nonatomic) float thresholdPrecOfValidDepth;

- (id)init;
- (float)minRotationBetweenFrames;
- (void)setMinRotationBetweenFrames:(float)arg1;
- (void)setThresholdPrecOfValidDepth:(float)arg1;
- (float)thresholdPrecOfValidDepth;

@end
