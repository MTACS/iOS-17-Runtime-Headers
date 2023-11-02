
@interface ADJasperColorStillsExecutorParameters : ADExecutorParameters {
    bool  _performJasperToColorTransformCorrection;
    ADJasperColorStillsPipelineParameters * _pipelineParameters;
}

@property (nonatomic) bool performJasperToColorTransformCorrection;
@property (nonatomic, readonly, retain) ADJasperColorStillsPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)initForDevice:(id)arg1;
- (bool)performJasperToColorTransformCorrection;
- (id)pipelineParameters;
- (void)setPerformJasperToColorTransformCorrection:(bool)arg1;

@end
