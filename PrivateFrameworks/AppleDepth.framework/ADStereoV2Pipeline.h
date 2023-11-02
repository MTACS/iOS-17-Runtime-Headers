
@interface ADStereoV2Pipeline : NSObject {
    ADEspressoStereoV2InferenceDescriptor * _inferenceDesc;
    ADNetworkProvider * _networkProvider;
    ADStereoV2PipelineParameters * _pipelineParameters;
    bool  _shouldPreProcessColorInputs;
}

@property (nonatomic, copy) ADStereoV2PipelineParameters *pipelineParameters;
@property (nonatomic, readonly) bool shouldPreProcessColorInputs;

- (void).cxx_destruct;
- (long long)adjustForEngine:(unsigned long long)arg1;
- (id)inferenceDescriptor;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)pipelineParameters;
- (long long)preProcessColorInput:(struct __CVBuffer { }*)arg1 toBuffer:(struct __CVBuffer { }*)arg2;
- (void)setPipelineParameters:(id)arg1;
- (bool)shouldPreProcessColorInputs;

@end
