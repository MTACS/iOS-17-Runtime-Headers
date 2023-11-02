
@interface ADDensifiedLiDARFocusAssistPipeline : NSObject {
    ADEspressoDensifiedLiDARFocusAssistInferenceDescriptor * _inferenceDesc;
    ADNetworkProvider * _networkProvider;
    ADDensifiedLiDARFocusAssistPipelineParameters * _pipelineParameters;
}

@property (nonatomic, copy) ADDensifiedLiDARFocusAssistPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (long long)changePointCloudPOV:(id)arg1 targetCamera:(id)arg2 lidarToCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 outputPointCloud:(id)arg4;
- (id)inferenceDescriptor;
- (id)init;
- (id)initWithEspressoEngine:(unsigned long long)arg1;
- (id)initWithEspressoEngine:(unsigned long long)arg1 andParameters:(id)arg2;
- (id)pipelineParameters;
- (long long)postProcessUncertainty:(struct __CVBuffer { }*)arg1 outputConfidence:(struct __CVBuffer { }*)arg2 confidenceUnits:(unsigned long long)arg3;
- (long long)projectLidarPoints:(id)arg1 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 projectedPointsBuffer:(struct __CVBuffer { }*)arg3;
- (void)setPipelineParameters:(id)arg1;

@end
