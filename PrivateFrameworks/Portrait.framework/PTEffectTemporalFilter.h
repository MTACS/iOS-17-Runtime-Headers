
@interface PTEffectTemporalFilter : NSObject {
    PTDisparityFilterEMA_LKT * _disparityFilter;
    bool  _enableNormalsFiltering;
    int  _indexIn;
    int  _indexOut;
    PTMetalContext * _metalContext;
    PTOpticalFlow * _opticalFlow;
    <MTLTexture> * _temporalDisparity;
    <MTLTexture> * _temporalNormal;
}

- (void).cxx_destruct;
- (id)disparityFiltered;
- (id)displacementFWD;
- (unsigned int)emaFilterDisparityNormal:(id)arg1 inDisparity:(id)arg2 inNormal:(id)arg3 frameIndex:(int)arg4 scale:(float)arg5;
- (unsigned int)gaussEMAFilterDisparityNormal:(id)arg1 inDisparity:(id)arg2 inNormal:(id)arg3 frameIndex:(int)arg4 scale:(float)arg5;
- (id)initWithMetalContext:(id)arg1 disparitySize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 enableNormalsFiltering:(bool)arg3;
- (id)normalFiltered;
- (unsigned int)prepareFilter:(id)arg1 opticalFlowRGB:(id)arg2 frameIndex:(int)arg3;
- (unsigned int)reset;

@end
