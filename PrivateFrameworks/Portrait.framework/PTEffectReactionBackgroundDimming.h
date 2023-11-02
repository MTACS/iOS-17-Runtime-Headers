
@interface PTEffectReactionBackgroundDimming : NSObject {
    <MTLComputePipelineState> * _backgroundDimAndConvertYUVtoRGB;
    PTMetalContext * _metalContext;
}

- (void).cxx_destruct;
- (int)backgroundDimAndConvertRGBLinearFromPTTexture:(id)arg1 inPTTexture:(id)arg2 inCenteredDisparity:(id)arg3 outRGBA:(id)arg4 dimmingFactor:(float)arg5;
- (id)initWithMetalContext:(id)arg1;

@end
