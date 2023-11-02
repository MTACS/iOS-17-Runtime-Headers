
@interface VCPImageMotionFlowAnalyzer : VCPImageAnalyzer {
    MPSImageBilinearScale * _bilinearScale;
    int  _cnnInputHeight;
    int  _cnnInputWidth;
    int  _cnnOutputHeight;
    int  _cnnOutputWidth;
    <MTLCommandQueue> * _commandQueue;
    unsigned int  _computationAccuracy;
    <MTLDeviceSPI> * _device;
    MPSImageSpatioTemporalGuidedFilter * _guidedFilter;
}

@property (nonatomic, readonly) int cnnOutputHeight;
@property (nonatomic, readonly) int cnnOutputWidth;

+ (id)analyzeWithLightweightOption:(bool)arg1 aspectRatio:(id)arg2 computationAccuracy:(unsigned int)arg3 forceCPU:(bool)arg4 sharedModel:(bool)arg5 flushModel:(bool)arg6 cancel:(id /* block */)arg7;

- (void).cxx_destruct;
- (int)analyzeImages:(struct __CVBuffer { }*)arg1 secondImage:(struct __CVBuffer { }*)arg2 cancel:(id /* block */)arg3;
- (int)cnnOutputHeight;
- (int)cnnOutputWidth;
- (int)combineBufferTo:(struct __CVBuffer { }*)arg1 flowX:(struct __CVBuffer { }*)arg2 flowY:(struct __CVBuffer { }*)arg3;
- (int)configForAspectRatio:(id)arg1;
- (int)flowScalingTo:(struct __CVBuffer { }*)arg1 flowBufferY:(struct __CVBuffer { }*)arg2 scalerX:(float)arg3 scalerY:(float)arg4;
- (int)flowScalingTo:(struct __CVBuffer { }*)arg1 scalerX:(float)arg2 scalerY:(float)arg3;
- (int)getFlowToBuffer:(struct __CVBuffer { }*)arg1;
- (float*)getFlowWithHeight:(int*)arg1 andWidth:(int*)arg2;
- (int)guidedUpsampling:(struct __CVBuffer { }*)arg1 inBGRA:(struct __CVBuffer { }*)arg2;
- (id)init;
- (id)initWithLightweightOption:(bool)arg1 aspectRatio:(id)arg2 computationAccuracy:(unsigned int)arg3 forceCPU:(bool)arg4 sharedModel:(bool)arg5 flushModel:(bool)arg6 cancel:(id /* block */)arg7;
- (int)preferredInputFormat:(int*)arg1 height:(int*)arg2 format:(unsigned int*)arg3;
- (int)prepareWithLightweightOption:(bool)arg1 aspectRatio:(id)arg2 forceCPU:(bool)arg3 sharedModel:(bool)arg4 flushModel:(bool)arg5;
- (int)prepareWithLightweightOption:(bool)arg1 aspectRatio:(id)arg2 numLevels:(int)arg3 startLevel:(int)arg4 cancel:(id /* block */)arg5;
- (int)reInitModel;
- (int)scaleFlowTo:(struct __CVBuffer { }*)arg1;
- (int)updateModelForAspectRatio:(id)arg1 computationAccuracy:(unsigned int)arg2;

@end
