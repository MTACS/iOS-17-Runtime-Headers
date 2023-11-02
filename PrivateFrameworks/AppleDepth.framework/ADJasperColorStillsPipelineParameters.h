
@interface ADJasperColorStillsPipelineParameters : ADPipelineParameters {
    ADJasperPointCloudFilterParameters * _pointCloudFilter;
    ADJasperPointCloudFilterParameters * _pointCloudFilterForTransformCorrection;
}

@property (nonatomic, retain) ADJasperPointCloudFilterParameters *pointCloudFilter;
@property (nonatomic, retain) ADJasperPointCloudFilterParameters *pointCloudFilterForTransformCorrection;

- (void).cxx_destruct;
- (id)init;
- (id)initForDevice:(id)arg1;
- (id)pointCloudFilter;
- (id)pointCloudFilterForTransformCorrection;
- (void)setPointCloudFilter:(id)arg1;
- (void)setPointCloudFilterForTransformCorrection:(id)arg1;

@end
