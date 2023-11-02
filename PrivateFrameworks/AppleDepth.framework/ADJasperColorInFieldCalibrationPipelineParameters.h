
@interface ADJasperColorInFieldCalibrationPipelineParameters : ADPipelineParameters {
    float  _coeffX;
    float  _coeffY;
    float  _coeffZ;
    float  _colorCameraNominalEfl;
    unsigned int  _featuresVectorAggregationSize;
    float  _maxStdForValidResult;
    ADAggregationParameters * _pcAggregationParameters;
    ADJasperPointCloudFilterParameters * _pointCloudFilterParameters;
}

@property (nonatomic, readonly) float coeffX;
@property (nonatomic, readonly) float coeffY;
@property (nonatomic, readonly) float coeffZ;
@property (nonatomic, readonly) float colorCameraNominalEfl;
@property (nonatomic) unsigned int featuresVectorAggregationSize;
@property (nonatomic, readonly) float maxStdForValidResult;
@property (nonatomic, retain) ADAggregationParameters *pcAggregationParameters;
@property (nonatomic, retain) ADJasperPointCloudFilterParameters *pointCloudFilterParameters;

- (void).cxx_destruct;
- (float)coeffX;
- (float)coeffY;
- (float)coeffZ;
- (float)colorCameraNominalEfl;
- (unsigned int)featuresVectorAggregationSize;
- (id)initForDevice:(id)arg1;
- (float)maxStdForValidResult;
- (id)pcAggregationParameters;
- (id)pointCloudFilterParameters;
- (void)setFeaturesVectorAggregationSize:(unsigned int)arg1;
- (void)setPcAggregationParameters:(id)arg1;
- (void)setPointCloudFilterParameters:(id)arg1;

@end
