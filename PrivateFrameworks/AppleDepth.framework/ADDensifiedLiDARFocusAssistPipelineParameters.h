
@interface ADDensifiedLiDARFocusAssistPipelineParameters : ADPipelineParameters {
    ADJasperPointCloudFilterParameters * _pointCloudFilter;
}

@property (nonatomic, retain) ADJasperPointCloudFilterParameters *pointCloudFilter;

- (void).cxx_destruct;
- (id)init;
- (id)pointCloudFilter;
- (void)setPointCloudFilter:(id)arg1;

@end
