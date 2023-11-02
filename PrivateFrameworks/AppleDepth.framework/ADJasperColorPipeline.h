
@interface ADJasperColorPipeline : NSObject {
    ADReprojection * _depthReprojector;
    ADEspressoJasperColorInferenceDescriptor * _inferenceDesc;
    ADNetworkProvider * _networkProvider;
    ADJasperColorPipelineParameters * _pipelineParameters;
    long long  _prioritization;
    ADImageDescriptor * _processedConfDesc;
    ADImageDescriptor * _processedDepthDesc;
    ADImageDescriptor * _processedNormalsDesc;
}

@property (nonatomic, copy) ADJasperColorPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)LKTTexturesDescriptor;
- (long long)fuseCurrentDepth:(struct __CVBuffer { }*)arg1 previousDepth:(struct __CVBuffer { }*)arg2 intoOutputDepth:(struct __CVBuffer { }*)arg3 currentConfidence:(struct __CVBuffer { }*)arg4 previousConfidence:(struct __CVBuffer { }*)arg5 intoOutputConfidence:(struct __CVBuffer { }*)arg6 currentNormals:(struct __CVBuffer { }*)arg7 previousNormals:(struct __CVBuffer { }*)arg8 intoOutputNormals:(struct __CVBuffer { }*)arg9 usingAlpha:(struct __CVBuffer { }*)arg10;
- (id)inferenceDescriptor;
- (id)initWithInputPrioritization:(long long)arg1;
- (id)initWithInputPrioritization:(long long)arg1 andParameters:(id)arg2;
- (id)pipelineParameters;
- (long long)postProcessConfidence:(struct __CVBuffer { }*)arg1 confidenceOutput:(struct __CVBuffer { }*)arg2 confidenceUnits:(unsigned long long)arg3;
- (long long)postProcessConfidence:(struct __CVBuffer { }*)arg1 confidenceOutput:(struct __CVBuffer { }*)arg2 confidenceUnits:(unsigned long long)arg3 depthUnits:(unsigned long long)arg4;
- (long long)postProcessDepth:(struct __CVBuffer { }*)arg1 depthOutput:(struct __CVBuffer { }*)arg2;
- (long long)postProcessDepth:(struct __CVBuffer { }*)arg1 depthOutput:(struct __CVBuffer { }*)arg2 depthUnits:(unsigned long long)arg3;
- (long long)postProcessWithDepth:(struct __CVBuffer { }*)arg1 confidence:(struct __CVBuffer { }*)arg2 depthOutput:(struct __CVBuffer { }*)arg3 confidenceOutput:(struct __CVBuffer { }*)arg4;
- (long long)postProcessWithDepth:(struct __CVBuffer { }*)arg1 confidence:(struct __CVBuffer { }*)arg2 normals:(struct __CVBuffer { }*)arg3 depthOutput:(struct __CVBuffer { }*)arg4 confidenceOutput:(struct __CVBuffer { }*)arg5 normalsOutput:(struct __CVBuffer { }*)arg6 normalsRequiredRotation:(long long)arg7;
- (id)processedConfidenceOutputDescriptor;
- (id)processedDepthOutputDescriptor;
- (id)processedNormalsOutputDescriptor;
- (long long)projectJasperPoints:(id)arg1 cropTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotateBy:(long long)arg3 projectedPointsBuffer:(struct __CVBuffer { }*)arg4;
- (void)setPipelineParameters:(id)arg1;
- (long long)warpAndFuseWithCurrDepth:(struct __CVBuffer { }*)arg1 prevDepth:(struct __CVBuffer { }*)arg2 currNormals:(struct __CVBuffer { }*)arg3 prevNormals:(struct __CVBuffer { }*)arg4 opticalFlow:(struct __CVBuffer { }*)arg5 alphaMap:(struct __CVBuffer { }*)arg6 depthOutput:(struct __CVBuffer { }*)arg7 normalsOutput:(struct __CVBuffer { }*)arg8;
- (long long)warpAndFuseWithCurrDepth:(struct __CVBuffer { }*)arg1 prevDepth:(struct __CVBuffer { }*)arg2 opticalFlow:(struct __CVBuffer { }*)arg3 alphaMap:(struct __CVBuffer { }*)arg4 depthOutput:(struct __CVBuffer { }*)arg5;
- (long long)warpPreviousDepth:(struct __CVBuffer { }*)arg1 intoCurrentDepth:(struct __CVBuffer { }*)arg2 previousConfidence:(struct __CVBuffer { }*)arg3 intoCurrentConfidence:(struct __CVBuffer { }*)arg4 previousNormals:(struct __CVBuffer { }*)arg5 intoCurrentNormals:(struct __CVBuffer { }*)arg6 usingOpticalFlow:(struct __CVBuffer { }*)arg7;
- (long long)warpPreviousDepth:(struct __CVBuffer { }*)arg1 intoCurrentDepth:(struct __CVBuffer { }*)arg2 previousConfidence:(struct __CVBuffer { }*)arg3 intoCurrentConfidence:(struct __CVBuffer { }*)arg4 previousNormals:(struct __CVBuffer { }*)arg5 intoCurrentNormals:(struct __CVBuffer { }*)arg6 usingPoseDelta:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg7 previousCalibration:(id)arg8 currentCalibration:(id)arg9;

@end
