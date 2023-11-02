
@interface ADJasperColorV2Pipeline : NSObject {
    ADEspressoJasperColorV2InferenceDescriptor * _inferenceDesc;
    ADNetworkProvider * _networkProvider;
    ADJasperColorV2PipelineParameters * _pipelineParameters;
}

@property (nonatomic, copy) ADJasperColorV2PipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (long long)changePointCloudPOV:(id)arg1 targetCamera:(id)arg2 jasperToCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 outputPointCloud:(id)arg4;
- (id)inferenceDescriptor;
- (id)initWithInputPrioritization:(long long)arg1 espressoEngine:(unsigned long long)arg2;
- (id)initWithInputPrioritization:(long long)arg1 espressoEngine:(unsigned long long)arg2 andParameters:(id)arg3;
- (id)pipelineParameters;
- (long long)postProcessDepth:(struct __CVBuffer { }*)arg1 output:(struct __CVBuffer { }*)arg2;
- (long long)postProcessDepth:(struct __CVBuffer { }*)arg1 output:(struct __CVBuffer { }*)arg2 depthRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)postProcessDepth:(struct __CVBuffer { }*)arg1 uncertainty:(struct __CVBuffer { }*)arg2 filteredPointCloud:(id)arg3 outputDepth:(struct __CVBuffer { }*)arg4 outputUncertainty:(struct __CVBuffer { }*)arg5 depthRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (long long)postProcessUncertainty:(struct __CVBuffer { }*)arg1 outputConfidence:(struct __CVBuffer { }*)arg2 confidenceUnits:(unsigned long long)arg3;
- (long long)projectJasperPoints:(id)arg1 cropTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotateBy:(long long)arg3 projectedPointsBuffer:(struct __CVBuffer { }*)arg4 filteredPoints:(id*)arg5;
- (void)setPipelineParameters:(id)arg1;

@end
