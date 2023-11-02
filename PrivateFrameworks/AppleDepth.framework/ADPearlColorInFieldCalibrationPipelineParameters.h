
@interface ADPearlColorInFieldCalibrationPipelineParameters : ADPipelineParameters {
    float  _coeffX;
    float  _coeffY;
    float  _coeffZ;
    float  _colorCameraNominalEfl;
    unsigned int  _featuresVectorAggregationSize;
    float  _maxStdForValidResult;
}

@property (nonatomic, readonly) float coeffX;
@property (nonatomic, readonly) float coeffY;
@property (nonatomic, readonly) float coeffZ;
@property (nonatomic, readonly) float colorCameraNominalEfl;
@property (nonatomic) unsigned int featuresVectorAggregationSize;
@property (nonatomic, readonly) float maxStdForValidResult;

- (float)coeffX;
- (float)coeffY;
- (float)coeffZ;
- (float)colorCameraNominalEfl;
- (unsigned int)featuresVectorAggregationSize;
- (id)init;
- (id)initWithDeviceName:(id)arg1;
- (float)maxStdForValidResult;
- (void)setFeaturesVectorAggregationSize:(unsigned int)arg1;

@end
