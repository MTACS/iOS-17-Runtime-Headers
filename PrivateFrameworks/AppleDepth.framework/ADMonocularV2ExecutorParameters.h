
@interface ADMonocularV2ExecutorParameters : ADExecutorParameters {
    ADMonocularV2PipelineParameters * _pipelineParameters;
}

@property (nonatomic, readonly, retain) ADMonocularV2PipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)init;
- (id)initForPipeline:(id)arg1;
- (id)pipelineParameters;

@end
