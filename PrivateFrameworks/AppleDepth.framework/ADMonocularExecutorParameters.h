
@interface ADMonocularExecutorParameters : ADExecutorParameters {
    ADMonocularPipelineParameters * _pipelineParameters;
}

@property (nonatomic, readonly, retain) ADMonocularPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)initForPipeline:(id)arg1;
- (id)pipelineParameters;

@end
