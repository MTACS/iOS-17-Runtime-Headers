
@interface ARDualGuidedFilter : NSObject {
    <MTLTexture> * _blurIntermediate;
    <MTLComputePipelineState> * _boxblurHPSO;
    <MTLComputePipelineState> * _boxblurVPSO;
    <MTLComputePipelineState> * _combineFGBGStencil;
    <MTLTexture> * _combinedFGBG;
    <MTLTexture> * _confidenceMap;
    <MTLDevice> * _device;
    bool  _enableDoubleMLResolutionMatting;
    double  _epsilon;
    <MTLComputePipelineState> * _erodeHPSO;
    <MTLTexture> * _erodeIntermediate;
    unsigned long long  _erodeRadius;
    <MTLComputePipelineState> * _erodeVPSO;
    <MTLComputePipelineState> * _getConfidence;
    MPSImageGuidedFilter * _guidedFilter;
    unsigned int  _height;
    <MTLComputePipelineState> * _invertPSO;
    <MTLLibrary> * _mattingLibrary;
    <MTLTexture> * _overlayCoefficentsNonBlurred;
    <MTLTexture> * _overlayCoefficentsNonBlurredBG;
    <MTLTexture> * _overlayStencilDownsampled;
    <MTLTexture> * _overlayStencilDownsampledBG;
    <MTLComputePipelineState> * _smoothCoeficients;
    <MTLTexture> * _smoothedCoefficientsTextureBG;
    <MTLTexture> * _smoothedCoefficientsTextureFG;
    unsigned long long  _uncertaintyRadius;
    bool  _useSoftGuidedFilter;
    bool  _usingSmoothing;
    unsigned int  _width;
}

@property (nonatomic) double epsilon;
@property (nonatomic) unsigned long long erosionRadius;
@property (nonatomic) unsigned long long uncertaintyRadius;

- (void).cxx_destruct;
- (id)encodeBoxBlurToCommandBuffer:(id)arg1 input:(id)arg2 intermediate:(id)arg3 output:(id)arg4;
- (void)encodeDualCoefficients:(id)arg1 guide:(id)arg2 stencil:(id)arg3 coefficientsTextureFG:(id)arg4 coefficientsTextureBG:(id)arg5;
- (double)epsilon;
- (unsigned long long)erosionRadius;
- (id)initWithDevice:(id)arg1 useSmoothing:(bool)arg2;
- (void)setEpsilon:(double)arg1;
- (void)setErosionRadius:(unsigned long long)arg1;
- (void)setUncertaintyRadius:(unsigned long long)arg1;
- (void)setupBuffersWithWidth:(unsigned int)arg1 andHeight:(unsigned int)arg2;
- (unsigned long long)uncertaintyRadius;

@end
