
@interface ADPCEDisparityColorPipeline : NSObject {
    ADEspressoPCEDisparityColorInferenceDescriptor * _inferenceDesc;
    <MTLDevice> * _metalDevice;
    ADNetworkProvider * _networkProvider;
    ADPCEDisparityColorPipelineParameters * _pipelineParameters;
    <MTLComputePipelineState> * _postprocessPipeline;
    <MTLComputePipelineState> * _preprocessPipelineForFloatPCE;
    <MTLComputePipelineState> * _preprocessPipelineForRawPCE;
}

@property (nonatomic, copy) ADPCEDisparityColorPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (long long)adjustForEngine:(unsigned long long)arg1;
- (float)disparityScaleForLayout:(unsigned long long)arg1;
- (long long)encodeDisparityPostprocessingToCommandBuffer:(id)arg1 input:(id)arg2 output:(id)arg3;
- (long long)encodeDisparityPreprocessingToCommandBuffer:(id)arg1 input:(id)arg2 normalizationMultiplier:(float)arg3 normalizationOffset:(float)arg4 invalidValue:(unsigned short)arg5 rotation:(long long)arg6 output:(id)arg7;
- (id)inferenceDescriptor;
- (id)init;
- (id)initForInputSource:(unsigned long long)arg1;
- (id)initForInputSource:(unsigned long long)arg1 metalDevice:(id)arg2;
- (id)initWithParameters:(id)arg1;
- (id)initWithParameters:(id)arg1 inputSource:(unsigned long long)arg2;
- (id)initWithParameters:(id)arg1 inputSource:(unsigned long long)arg2 metalDevice:(id)arg3;
- (id)pipelineParameters;
- (long long)rebuildMetalPreprocessingKernels;
- (void)setPipelineParameters:(id)arg1;

@end
