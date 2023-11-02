
@interface ADDensifiedLiDARFocusAssistExecutorParameters : ADExecutorParameters {
    ADDensifiedLiDARFocusAssistPipelineParameters * _pipelineParameters;
}

@property (nonatomic, readonly, retain) ADDensifiedLiDARFocusAssistPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)initForPipeline:(id)arg1;
- (id)pipelineParameters;

@end
