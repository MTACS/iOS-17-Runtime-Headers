
@interface ADJasperColorPipelineParameters : ADPipelineParameters {
    ADAggregationParameters * _aggregationParameters;
    float  _confidenceBucketingHighThreshold;
    float  _confidenceBucketingLowThreshold;
    ADConfidenceLevelRanges * _confidenceLevelRanges;
    unsigned long long  _confidenceUnits;
    float  _defaultAlphaForDepthWarping;
    ADJasperPointCloudFilterParameters * _pointCloudFilter;
}

@property (nonatomic, retain) ADAggregationParameters *aggregationParameters;
@property (nonatomic) float confidenceBucketingHighThreshold;
@property (nonatomic) float confidenceBucketingLowThreshold;
@property (nonatomic, retain) ADConfidenceLevelRanges *confidenceLevelRanges;
@property (nonatomic) unsigned long long confidenceUnits;
@property (nonatomic) float defaultAlphaForDepthWarping;
@property (nonatomic, retain) ADJasperPointCloudFilterParameters *pointCloudFilter;

- (void).cxx_destruct;
- (id)aggregationParameters;
- (float)confidenceBucketingHighThreshold;
- (float)confidenceBucketingLowThreshold;
- (id)confidenceLevelRanges;
- (unsigned long long)confidenceUnits;
- (float)defaultAlphaForDepthWarping;
- (id)initForDevice:(id)arg1;
- (id)pointCloudFilter;
- (void)setAggregationParameters:(id)arg1;
- (void)setConfidenceBucketingHighThreshold:(float)arg1;
- (void)setConfidenceBucketingLowThreshold:(float)arg1;
- (void)setConfidenceLevelRanges:(id)arg1;
- (void)setConfidenceUnits:(unsigned long long)arg1;
- (void)setDefaultAlphaForDepthWarping:(float)arg1;
- (void)setPointCloudFilter:(id)arg1;

@end
