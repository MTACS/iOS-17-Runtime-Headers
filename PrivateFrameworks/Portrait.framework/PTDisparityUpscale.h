
@interface PTDisparityUpscale : NSObject {
    NSArray * _coefficientsTextureArray;
    <MTLTexture> * _disparityUpscaled;
    NSMutableArray * _dropHintsTextures;
    <MTLTexture> * _guideConversionTexture;
    MPSImageSpatioTemporalGuidedFilter * _guidedFilter;
    unsigned long long  _height;
    bool  _isShaderHarvesting;
    PTMetalContext * _metalContext;
    PTUtil * _portraitUtil;
    PTMTLDropHints * _textureDropHints;
    float  _upscaleFactor;
    unsigned long long  _width;
}

- (void).cxx_destruct;
- (id)guidedUpsampling:(id)arg1 inDisparity:(id)arg2 inRGBA:(id)arg3 colorDepth:(long long)arg4;
- (unsigned long long)height;
- (id)initWithMetalContext:(id)arg1 colorSize:(struct CGSize { double x1; double x2; })arg2 disparitySize:(struct CGSize { double x1; double x2; })arg3 config:(id)arg4;
- (id)upscaledTexture;
- (unsigned long long)width;

@end
