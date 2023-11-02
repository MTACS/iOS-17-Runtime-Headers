
@interface SSCHistogram : NSObject {
    FigMetalContext * _metalContext;
    <MTLComputePipelineState> * _pipelineStates;
}

- (void).cxx_destruct;
- (id)initWithOptionalCommandQueue:(id)arg1;
- (int)singleComponentCPUAverageInputPixelBuffer:(struct __CVBuffer { }*)arg1 validRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputAverage:(float*)arg3;
- (int)singleComponentCPUHistogramInputPixelBuffer:(struct __CVBuffer { }*)arg1 validRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputHistogram:(id*)arg3;
- (int)singleComponentCPUHistogramInputPixelBuffer:(struct __CVBuffer { }*)arg1 validRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 subSampleX:(unsigned int)arg3 subSampleY:(unsigned int)arg4 outputHistogram:(id*)arg5;
- (int)singleComponentGPUAverageInputPixelBuffer:(struct __CVBuffer { }*)arg1 validRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputAverage:(float*)arg3;
- (int)singleComponentGPUHistogramInputPixelBuffer:(struct __CVBuffer { }*)arg1 validRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputHistogram:(id*)arg3 optionalChannelConfig:(struct { int x1; float x2; }*)arg4;
- (int)singleComponentGPUHistogramInputTexture:(id)arg1 validRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputHistogram:(id*)arg3 optionalChannelConfig:(struct { int x1; float x2; }*)arg4;

@end
