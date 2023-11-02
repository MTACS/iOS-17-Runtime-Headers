
@interface FigMetalHistogram : NSObject {
    FigMetalContext * _metalContext;
    <MTLComputePipelineState> * _pipelineStates;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1;
- (int)singleComponentCPUAverageInputPixelBuffer:(struct __CVBuffer { }*)arg1 validRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputAverage:(float*)arg3;
- (int)singleComponentCPUHistogramInputPixelBuffer:(struct __CVBuffer { }*)arg1 validRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputHistogram:(struct { unsigned int x1[256]; }*)arg3;
- (int)singleComponentCPUHistogramInputPixelBuffer:(struct __CVBuffer { }*)arg1 validRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 subSampleX:(unsigned int)arg3 subSampleY:(unsigned int)arg4 outputHistogram:(struct { unsigned int x1[256]; }*)arg5;
- (int)singleComponentGPUAverageInputPixelBuffer:(struct __CVBuffer { }*)arg1 validRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputAverage:(float*)arg3;
- (int)singleComponentGPUHistogramInputPixelBuffer:(struct __CVBuffer { }*)arg1 validRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputHistogram:(struct { unsigned int x1[256]; }*)arg3;

@end
