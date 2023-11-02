
@interface CMISharpnessScore : NSObject {
    <MTLComputePipelineState> * _applyConvolutionShaderFloat;
    <MTLComputePipelineState> * _applyConvolutionShaderUInt;
    <MTLComputePipelineState> * _computeClipValueWithHistogramShader;
    SSCHistogram * _histogram;
    float  _kernelWeight;
    FigMetalContext * _metal;
    CMIStatistics * _statistics;
}

@property (nonatomic, retain) FigMetalAllocator *allocator;

+ (unsigned long long)bytesRequiredForProcessingImageWith:(int)arg1 height:(int)arg2;
+ (id)externalMemoryDescriptorForConfiguration:(id)arg1;

- (void).cxx_destruct;
- (int)_blurImage:(id)arg1 toImage:(id)arg2 sourceComponent:(int)arg3 binning:(int)arg4 firstPixel:(int)arg5 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (int)_calculateFromTexture:(id)arg1 andFromRoi:(id)arg2 sourceComponent:(int)arg3 binning:(int)arg4 firstPixel:(int)arg5 toResult:(id*)arg6;
- (int)_computeClipValueWithHistogram:(id)arg1 andRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toClipValue:(id)arg3;
- (int)_computeSharpnessScore:(id)arg1 outputTexture:(id)arg2 sourceComponent:(int)arg3 binning:(int)arg4 firstPixel:(int)arg5 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 clipValueMetalBuffer:(id)arg7;
- (void)_getDefaultConvolutionWeights:(float*)arg1;
- (id)allocator;
- (int)calculateFromPixelBuffer:(struct __CVBuffer { }*)arg1 andFromRoi:(id)arg2 sourceComponent:(int)arg3 toResult:(id*)arg4;
- (int)calculateFromRawTexture:(id)arg1 andFromRoi:(id)arg2 sourceComponent:(int)arg3 isQuadra:(bool)arg4 firstPixel:(int)arg5 toResult:(id*)arg6;
- (int)calculateFromTexture:(id)arg1 andFromRoi:(id)arg2 sourceComponent:(int)arg3 toResult:(id*)arg4;
- (id)computePipelineFor:(unsigned long long)arg1 sourceComponent:(int)arg2;
- (id)initWithOptionalCommandQueue:(id)arg1 externalMemoryResource:(id)arg2 kernelWeights:(id)arg3;
- (id)initWithOptionalCommandQueue:(id)arg1 kernelWeights:(id)arg2;
- (void)setAllocator:(id)arg1;

@end
