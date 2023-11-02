
@interface CMIStatistics : NSObject {
    FigMetalContext * _metal;
    <MTLComputePipelineState> * _reduceStep1Shader;
    <MTLComputePipelineState> * _reduceStep2Shader;
}

- (void).cxx_destruct;
- (int)getStatisticsFromPixelBuffer:(struct __CVBuffer { }*)arg1 withRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toResult:(id*)arg3 withOptionalChannelConfig:(struct { int x1; float x2; }*)arg4;
- (int)getStatisticsFromTexture:(id)arg1 withRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toResult:(id*)arg3 withOptionalChannelConfig:(struct { int x1; float x2; }*)arg4;
- (id)initWithOptionalCommandQueue:(id)arg1;

@end
