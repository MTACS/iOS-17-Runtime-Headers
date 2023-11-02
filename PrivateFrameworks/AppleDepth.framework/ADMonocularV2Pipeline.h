
@interface ADMonocularV2Pipeline : NSObject {
    ADEspressoMonocularV2InferenceDescriptor * _inferenceDesc;
    ADNetworkProvider * _networkProvider;
    ADMonocularV2PipelineParameters * _pipelineParameters;
}

@property (nonatomic, copy) ADMonocularV2PipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (long long)adjustForEngine:(unsigned long long)arg1;
- (id)inferenceDescriptor;
- (id)initWithInputPrioritization:(long long)arg1;
- (id)initWithInputPrioritization:(long long)arg1 andParameters:(id)arg2;
- (id)pipelineParameters;
- (long long)postProcessDisparity:(struct __CVBuffer { }*)arg1 output:(struct __CVBuffer { }*)arg2;
- (void)setPipelineParameters:(id)arg1;

@end
