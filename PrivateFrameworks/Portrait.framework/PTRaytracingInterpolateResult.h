
@interface PTRaytracingInterpolateResult : NSObject {
    <MTLComputePipelineState> * _interpolateRGBWeightRGBALinearDestRGBA;
    <MTLComputePipelineState> * _interpolateRGBWeightRGBALinearDestYUV;
    <MTLComputePipelineState> * _interpolateRGBWeightSourceRGBADestRGBA;
    <MTLComputePipelineState> * _interpolateRGBWeightSourceYUVDestRGBA;
    <MTLComputePipelineState> * _interpolateRGBWeightSourceYUVDestYUV;
    PTMetalContext * _metalContext;
    <MTLTexture> * _precomputedGaussian;
    <MTLComputePipelineState> * _studioLightInterpolateRGBWeightSourceYUVDestRGBA;
    <MTLComputePipelineState> * _studioLightInterpolateRGBWeightSourceYUVDestYUV;
}

+ (struct PTNoiseValues { float x1; float x2; })calculateVarReadNoise:(id)arg1;
+ (void)updatePrecomputedGaussianOffset:(id)arg1;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 useExportQualityNoise:(bool)arg2;
- (void)interpolateRGBWeightUsingRGBALinearToDest:(id)arg1 renderRequest:(id)arg2 inRGBWeight:(id)arg3 inRGBA:(id)arg4;
- (void)interpolateRGBWeightUsingSourceToDest:(id)arg1 renderRequest:(id)arg2 inRGBWeight:(id)arg3;
- (void)interpolateRGBWeightUsingSourceToDest:(id)arg1 renderRequest:(id)arg2 inRGBWeight:(id)arg3 inGainMap:(id)arg4 inColorCube:(id)arg5;
- (void)precomputeGaussianFromNumberOfSamples:(int)arg1 seed:(unsigned int)arg2 sizePrecomputedGaussian:(int)arg3;
- (id)randomGaussNoise;

@end
