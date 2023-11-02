
@interface ARDepthBasedPersonDetectionResult : ARPersonDetectionResult {
    double  _initialBoundingBoxAvg;
    long long  _numberDepthPixels;
    long long  _numberDepthPixelsWithHighConfidence;
    float  _sumDepthValues;
    float  _sumDepthValuesWithHighConfidence;
}

@property (nonatomic) double initialBoundingBoxAvg;
@property (nonatomic, readonly) unsigned long long numberOfSamples;

- (void)addSampleValue:(float)arg1;
- (void)addSampleValueWithHighConfidence:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (double)initialBoundingBoxAvg;
- (float)meanValue;
- (unsigned long long)numberOfSamples;
- (void)setInitialBoundingBoxAvg:(double)arg1;

@end
