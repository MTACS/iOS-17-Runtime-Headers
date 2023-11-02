
@interface ADStereoPipeline : NSObject {
    ADEspressoStereoInferenceDescriptor * _inferenceDesc;
    ADNetworkProvider * _networkProvider;
    ADStereoPipelineParameters * _pipelineParameters;
    long long  _prioritization;
    bool  _shouldPreProcessColorInputs;
    unsigned long long  _stereoImagesAlignment;
}

@property (nonatomic, copy) ADStereoPipelineParameters *pipelineParameters;
@property (nonatomic, readonly) bool shouldPreProcessColorInputs;
@property (nonatomic, readonly) unsigned long long stereoImagesAlignment;

- (void).cxx_destruct;
- (long long)adjustForEngine:(unsigned long long)arg1;
- (id)inferenceDescriptor;
- (id)initWithInputAlignment:(unsigned long long)arg1 andPrioritization:(long long)arg2;
- (id)initWithInputAlignment:(unsigned long long)arg1 prioritization:(long long)arg2 andParameters:(id)arg3;
- (id)pipelineParameters;
- (long long)preProcessColorInput:(struct __CVBuffer { }*)arg1 toBuffer:(struct __CVBuffer { }*)arg2;
- (void)setPipelineParameters:(id)arg1;
- (bool)shouldPreProcessColorInputs;
- (unsigned long long)stereoImagesAlignment;

@end
