
@interface ADJasperColorStillsPipeline : NSObject {
    float  _STDThreshold;
    void _STDWeights;
    ADEspressoJasperToColorTransformCorrectionBackendInfrerenceDescriptor * _correctionBackendInferenceDesc;
    ADNetworkProvider * _correctionBackendNetworkProvider;
    ADEspressoJasperToColorTransformCorrectionFrontendInfrerenceDescriptor * _correctionFrontendInferenceDesc;
    ADNetworkProvider * _correctionFrontendNetworkProvider;
    ADEspressoStillImageInferenceDescriptor * _inferenceDesc;
    bool  _isDisparity;
    ADNetworkProvider * _networkProvider;
    ADJasperColorStillsPipelineParameters * _pipelineParameters;
    ADImageDescriptor * _processedDepthDesc;
    float  _scaledEFL;
}

@property (nonatomic, copy) ADJasperColorStillsPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)correctionBackendInferenceDescriptor;
- (id)correctionFrontendInferenceDescriptor;
- (id)inferenceDescriptor;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)pipelineParameters;
- (long long)postProcessDepth:(struct __CVBuffer { }*)arg1 depthOutput:(struct __CVBuffer { }*)arg2 depthUnits:(unsigned long long)arg3;
- (long long)postProcessJasperToColorCorrectionWithAngles:(float*)arg1 errors:(float*)arg2 originalTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 correctedTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg4 colorCameraCalibration:(id)arg5 colorImageScale:(float)arg6 transformCorrectionResults:(id*)arg7;
- (long long)postProcessJasperToColorTransformCorrection:(id)arg1 originalTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 correctedTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg3;
- (long long)postProcessWithDepth:(struct __CVBuffer { }*)arg1 depthOutput:(struct __CVBuffer { }*)arg2;
- (long long)processJasperToColorCorrectionIntermediateResultWithBackendEspressoFeaturesOutput:(const float*)arg1 frontendEspressoFeaturesInput:(float*)arg2 featuresDimensions:(id)arg3;
- (id)processedDepthOutputDescriptor;
- (long long)projectJasperPoints:(id)arg1 cropTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotateBy:(long long)arg3 projectedPointsBuffer:(struct __CVBuffer { }*)arg4;
- (long long)projectJasperPointsForJasperToColorTransformCorrection:(id)arg1 cropTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotateBy:(long long)arg3 projectedPointsBuffer:(struct __CVBuffer { }*)arg4;
- (void)setPipelineParameters:(id)arg1;

@end
