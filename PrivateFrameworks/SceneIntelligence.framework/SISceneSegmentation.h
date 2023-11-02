
@interface SISceneSegmentation : SIModel <SITraceable> {
    SISceneSegmentationNetworkConfiguration * _configuration;
    char * _modelToGlobalMapping;
    float * _probabilityThresholds;
    bool  _supportUncertainty;
    float * _uncertaintyThresholds;
}

@property (nonatomic, readonly) NSDictionary *tracingEntry;

+ (id)tracingEntryFormat;

- (void).cxx_destruct;
- (void)_initializeUncertaintyThresholds:(float)arg1;
- (void)dealloc;
- (id)description;
- (long long)evaluateSemanticForImage:(struct __CVBuffer { }*)arg1 depthInput:(struct __CVBuffer { }*)arg2 semanticOutput:(struct __IOSurface { }*)arg3 confidenceOutput:(struct __IOSurface { }*)arg4 uncertaintyOutput:(struct __IOSurface { }*)arg5;
- (long long)evaluateSemanticForImageData:(id)arg1 output:(id)arg2;
- (struct CGSize { double x1; double x2; })getInputResolution;
- (struct CGSize { double x1; double x2; })getOutputResolution;
- (id)initWithNetworkConfiguration:(id)arg1;
- (long long)postprocessingIOSSemanticOutput:(struct __IOSurface { }*)arg1 confidenceOutput:(struct __IOSurface { }*)arg2 uncertaintyOutput:(struct __IOSurface { }*)arg3;
- (long long)postprocessingOutput:(id)arg1;
- (long long)postprocessingSemanticOutput:(struct __IOSurface { }*)arg1 confidenceOutput:(struct __IOSurface { }*)arg2;
- (long long)postprocessingSemanticOutput:(struct __IOSurface { }*)arg1 confidenceOutput:(struct __IOSurface { }*)arg2 uncertaintyOutput:(struct __IOSurface { }*)arg3;
- (bool)supportUncertainty;
- (id)tracingEntry;

@end
