
@interface PTDisparityFilterColorSimilarity : NSObject <PTAbstractDisparityFilter> {
    int  _frameIndex;
    <MTLTexture> * _inputRGB;
    <MTLComputePipelineState> * _temporalFilterExponentialMovingAverageColorSimilarities;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1;
- (int)prepareFilter:(id)arg1 inRGBA:(id)arg2 outDisplacement:(id)arg3;
- (void)reset;
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inDisparityPrev:(id)arg3 inDisparity:(id)arg4 outDisparity:(id)arg5 disparityBias:(float)arg6;
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inStatePrev:(id)arg3 inDisparity:(id)arg4 outDisparity:(id)arg5 outState:(id)arg6;

@end
