
@interface ADStereoExecutorParameters : ADExecutorParameters {
    ADStereoPipelineParameters * _pipelineParameters;
}

@property (nonatomic, readonly, retain) ADStereoPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)init;
- (id)initForPipeline:(id)arg1;
- (id)pipelineParameters;

@end
