
@interface ADJasperColorV2ExecutorParameters : ADExecutorParameters {
    ADJasperColorV2PipelineParameters * _pipelineParameters;
}

@property (nonatomic) bool outputHighConfidencePixelsOnly;
@property (nonatomic, readonly, retain) ADJasperColorV2PipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)initForDevice:(id)arg1;
- (bool)outputHighConfidencePixelsOnly;
- (id)pipelineParameters;
- (void)setOutputHighConfidencePixelsOnly:(bool)arg1;

@end
