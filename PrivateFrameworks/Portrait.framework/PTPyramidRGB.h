
@interface PTPyramidRGB : NSObject {
    bool  _bicubic;
    bool  _doFirstLevelGaussianDownsample;
    <MTLComputePipelineState> * _downscaleGaussian3x3;
    PTMTLDropHints * _dropHints;
    PTMetalContext * _metalContext;
    <MTLTexture> * _rgbaPyramid;
    NSArray * _rgbaPyramidArray;
    bool  _skipFullSizeLayer;
    <MTLComputePipelineState> * _updateLevel0Box2x2FromRGBA;
    <MTLComputePipelineState> * _updateLevel0Box2x2FromYUV;
    <MTLComputePipelineState> * _updateLevel0Gaussian3x3FromRGBA;
    <MTLComputePipelineState> * _updateLevel0Gaussian3x3FromYUV;
    <MTLComputePipelineState> * _updateLevel0and1Gaussian3x3FromRGBA;
    <MTLComputePipelineState> * _updateLevel0and1Gaussian3x3FromYUV;
}

@property (nonatomic) bool bicubic;
@property (nonatomic, retain) PTMTLDropHints *dropHints;
@property (nonatomic, retain) <MTLTexture> *rgbaPyramid;
@property (nonatomic, retain) NSArray *rgbaPyramidArray;

- (void).cxx_destruct;
- (bool)bicubic;
- (id)dropHints;
- (id)initWithMetalContext:(id)arg1 colorSize:(struct CGSize { double x1; double x2; })arg2 pixelFormat:(unsigned long long)arg3 skipFullSizeLayer:(bool)arg4 doFirstLevelGaussianDownsample:(bool)arg5 mipmapLevelCount:(int)arg6 dropHintsEnabled:(bool)arg7;
- (id)rgbaPyramid;
- (id)rgbaPyramidArray;
- (void)setBicubic:(bool)arg1;
- (void)setDropHints:(id)arg1;
- (void)setRgbaPyramid:(id)arg1;
- (void)setRgbaPyramidArray:(id)arg1;
- (int)updateLevel0FromPTTextureRGBA:(id)arg1 inPTTextureRGBA:(id)arg2 doFirstLevelGaussianDownsample:(bool)arg3;
- (int)updateLevel0FromPTTextureYUV:(id)arg1 inPTTextureYUV:(id)arg2 doFirstLevelGaussianDownsample:(bool)arg3;
- (int)updateLevel0and1FromPTTextureRGBA:(id)arg1 inPTTextureRGBA:(id)arg2;
- (int)updateLevel0and1FromPTTextureYUV:(id)arg1 inPTTextureYUV:(id)arg2;
- (int)updatePyramid:(id)arg1 offset:(int)arg2;
- (int)updatePyramidFromPTTexture:(id)arg1 inPTTexture:(id)arg2;

@end
