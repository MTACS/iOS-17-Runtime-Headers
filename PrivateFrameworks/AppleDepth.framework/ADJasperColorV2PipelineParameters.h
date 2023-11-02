
@interface ADJasperColorV2PipelineParameters : ADPipelineParameters {
    float  _maxDepthThresholdForInvalidUncertainty;
    float  _minDepthThresholdForInvalidUncertainty;
    unsigned int  _minRequiredJasperPoints;
    bool  _outputHighConfidencePixelsOnly;
    ADJasperPointCloudFilterParameters * _pointCloudFilter;
    float  _uncertaintyThreshold;
}

@property (nonatomic) float maxDepthThresholdForInvalidUncertainty;
@property (nonatomic) float minDepthThresholdForInvalidUncertainty;
@property (nonatomic) unsigned int minRequiredJasperPoints;
@property (nonatomic) bool outputHighConfidencePixelsOnly;
@property (nonatomic, retain) ADJasperPointCloudFilterParameters *pointCloudFilter;
@property (nonatomic) float uncertaintyThreshold;

- (void).cxx_destruct;
- (id)initForDevice:(id)arg1;
- (float)maxDepthThresholdForInvalidUncertainty;
- (float)minDepthThresholdForInvalidUncertainty;
- (unsigned int)minRequiredJasperPoints;
- (bool)outputHighConfidencePixelsOnly;
- (id)pointCloudFilter;
- (void)setMaxDepthThresholdForInvalidUncertainty:(float)arg1;
- (void)setMinDepthThresholdForInvalidUncertainty:(float)arg1;
- (void)setMinRequiredJasperPoints:(unsigned int)arg1;
- (void)setOutputHighConfidencePixelsOnly:(bool)arg1;
- (void)setPointCloudFilter:(id)arg1;
- (void)setUncertaintyThreshold:(float)arg1;
- (float)uncertaintyThreshold;

@end
