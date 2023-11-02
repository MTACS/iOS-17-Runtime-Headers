
@interface PTGuidedFilter : NSObject {
    <MTLComputePipelineState> * _applyUpsamplingCoefficients;
    <MTLComputePipelineState> * _averageUpsamplingCoefficients;
    <MTLTexture> * _coeffAveragedTexture;
    <MTLTexture> * _coeffTexture;
    <MTLComputePipelineState> * _computeUpsamplingCoefficients;
    <MTLComputePipelineState> * _computeWeightedUpsamplingCoefficients;
    float  _edgeTolerance;
    <MTLTexture> * _edges;
    bool  _skipBoxFilter;
    PTMTLDropHints * _textureDropHints;
    PTUtil * _u;
    <MTLTexture> * _upscaledTexture;
    bool  _useHighresGuideForComputingCoefficients;
    bool  _useWeightedSampling;
    PTRaytracingUtils * _utils;
}

- (void).cxx_destruct;
- (void)applyUpsamplingCoefficients:(id)arg1 guideTexture:(id)arg2 coeffTexture:(id)arg3 upscaledImages:(id)arg4 guideMultiplier:(float)arg5 postModifiers:(id)arg6;
- (void)averageUpsamplingCoefficients:(id)arg1 coeffTexture:(id)arg2 coeffAveragedTexture:(id)arg3;
- (void)computeUpsamplingCoefficients:(id)arg1 guideTexture:(id)arg2 imageTexture:(id)arg3 coeffTexture:(id)arg4 weights:(id)arg5 guideMultiplier:(float)arg6;
- (id)edges;
- (int)guidedFilter:(id)arg1 image:(id)arg2 guideRGBACoefficients:(id)arg3 guideRGBAUpscale:(id)arg4 sourceColorBitDepth:(int)arg5;
- (int)guidedFilter:(id)arg1 image:(id)arg2 guideRGBACoefficients:(id)arg3 guideRGBAUpscale:(id)arg4 upscaledImage:(id)arg5 sourceColorBitDepth:(int)arg6;
- (int)guidedFilter:(id)arg1 image:(id)arg2 guideRGBACoefficients:(id)arg3 guideRGBAUpscale:(id)arg4 upscaledImages:(id)arg5 sourceColorBitDepth:(int)arg6 postModifiers:(id)arg7;
- (id)initWithMetalContext:(id)arg1 imageSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 scale:(float)arg3 epsilon:(float)arg4;
- (id)upscaledTexture;

@end
