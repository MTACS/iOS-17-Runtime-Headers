
@interface ARMatteGenerator : NSObject {
    <MTLTexture> * _alphaTexture;
    <MTLTexture> * _cameraImageTexture;
    <MTLComputePipelineState> * _depthDilation;
    float  _depthScale;
    <MTLDevice> * _device;
    unsigned long long  _dilationRadius;
    ARDualGuidedFilter * _dualGuidedFilter;
    bool  _enableDoubleMLResolutionMatting;
    unsigned long long  _erodeRadius;
    long long  _matteResolution;
    <MTLComputePipelineState> * _mattingDual;
    <MTLLibrary> * _mattingLibrary;
    <MTLTexture> * _occluderDepthDilatedTexture;
    <MTLTexture> * _overlayCoefficientsBG;
    <MTLTexture> * _overlayCoefficientsFG;
    <MTLComputePipelineState> * _resampleAlpha;
    <MTLTexture> * _stencilTexture;
    unsigned long long  _uncertaintyRadius;
}

@property (nonatomic) unsigned long long dilationRadius;
@property (nonatomic) unsigned long long erosionRadius;
@property (nonatomic) unsigned long long uncertaintyRadius;

- (void).cxx_destruct;
- (void)_commonInitWithDevice:(id)arg1 matteResolution:(long long)arg2 useSmoothing:(bool)arg3;
- (unsigned long long)dilationRadius;
- (void)encodeCoefficients:(id)arg1 frame:(id)arg2 coefficientsForeground:(id)arg3 coefficientsBackground:(id)arg4;
- (unsigned long long)erosionRadius;
- (id)generateDilatedDepthFromFrame:(id)arg1 commandBuffer:(id)arg2;
- (id)generateMatteFromFrame:(id)arg1 commandBuffer:(id)arg2;
- (id)initWithDevice:(id)arg1 matteResolution:(long long)arg2;
- (id)initWithDevice:(id)arg1 matteResolution:(long long)arg2 useSmoothing:(bool)arg3;
- (void)setDilationRadius:(unsigned long long)arg1;
- (void)setErosionRadius:(unsigned long long)arg1;
- (void)setUncertaintyRadius:(unsigned long long)arg1;
- (void)setupAlphaBufferForFrame:(id)arg1;
- (void)setupBuffersForFrame:(id)arg1;
- (void)setupDepthBufferForFrame:(id)arg1;
- (unsigned long long)uncertaintyRadius;

@end
