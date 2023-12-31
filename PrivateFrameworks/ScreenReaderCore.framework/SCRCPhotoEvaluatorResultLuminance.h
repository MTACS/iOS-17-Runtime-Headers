
@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult {
    double  _averageLevel;
    double  _brightnessLevel;
    double  _darknessLevel;
}

@property (nonatomic, readonly) double averageLevel;
@property (nonatomic, readonly) double brightnessLevel;
@property (nonatomic, readonly) double darknessLevel;

- (double)averageLevel;
- (double)brightnessLevel;
- (double)darknessLevel;
- (id)humanReadableResult;
- (id)initWithDarknessLevel:(double)arg1 brightnessLevel:(double)arg2 averageLevel:(double)arg3;

@end
