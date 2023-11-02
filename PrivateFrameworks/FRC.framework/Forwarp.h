
@interface Forwarp : FRCMetalBase {
    <MTLComputePipelineState> * _blendDCTexturesWithMasks;
    <MTLComputePipelineState> * _blendWarpedImages;
    <MTLComputePipelineState> * _blendWarpedImagesWithMaskTextures;
    <MTLComputePipelineState> * _blendWarpedImagesWithSubsampledMaskTextures;
    <MTLComputePipelineState> * _convert2Texture;
    <MTLComputePipelineState> * _convert2TextureWithMask;
    bool  _createOcclusionMask;
    <MTLComputePipelineState> * _errorMapDilation;
    <MTLComputePipelineState> * _errorMapDownsampleKernel;
    float  _errorTolerance;
    bool  _filterErrorMapByGaussian;
    <MTLBuffer> * _gaussian3x3CoefficientBuffer;
    <MTLComputePipelineState> * _gaussian3x3FilterKernel;
    <MTLComputePipelineState> * _gaussian3x3FilterSIMDKernel;
    <MTLComputePipelineState> * _initializeBest;
    bool  _isLiteSynthesis;
    bool  _limitBilinearInterpolation;
    bool  _linearSplatting;
    <MTLComputePipelineState> * _splattingKernel;
    <MTLComputePipelineState> * _splattingNormalizationKernel;
    bool  _supportsSIMDShuffle;
    <MTLComputePipelineState> * _updateBest;
    <MTLComputePipelineState> * _updateOutputFullWarp;
    <MTLComputePipelineState> * _updateOutputFullWarpMinErrorOffset;
    <MTLComputePipelineState> * _updateOutputLiteWarp;
}

@property (nonatomic) bool createOcclusionMask;
@property (nonatomic) float errorTolerance;
@property (nonatomic, readonly) bool filterErrorMapByGaussian;
@property (nonatomic) bool isLiteSynthesis;
@property (nonatomic) bool limitBilinearInterpolation;
@property (nonatomic) bool linearSplatting;

- (void).cxx_destruct;
- (void)allocateBuffersWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 channels:(unsigned long long)arg3 bestBuffer:(id*)arg4 outputBuffer:(id*)arg5;
- (id)createBestBufferWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (bool)createOcclusionMask;
- (id)createOutputBufferWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 channels:(unsigned long long)arg3;
- (void)dealloc;
- (void)encodeBlendTexturesToCommandBuffer:(id)arg1 firstWarpedTexture:(id)arg2 secondWarpedTexture:(id)arg3 forwardErrorMap:(id)arg4 backwardErrorMap:(id)arg5 synthesizedTexture:(id)arg6 timeScale:(float)arg7 synthesizedImageWeight:(float)arg8 destination:(id)arg9;
- (void)encodeBlendWarpedFeaturesWithErrorMaskToCommandBuffer:(id)arg1 first:(id)arg2 second:(id)arg3 forwardErrorMap:(id)arg4 backwardErrorMap:(id)arg5 timeScale:(float)arg6 destination:(id)arg7;
- (void)encodeBlendWarpedFeaturesWithErrorMaskToCommandBuffer:(id)arg1 first:(id)arg2 second:(id)arg3 timeScale:(float)arg4 destination:(id)arg5;
- (void)encodeErrorDownsampleToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeErrorMapDilationToCommandBuffer:(id)arg1 forwardSource:(id)arg2 backwardSource:(id)arg3 forwardDestination:(id)arg4 backwardDestination:(id)arg5 minimumAdjacentHoleCount:(unsigned int)arg6 maximumHoleValue:(float)arg7;
- (void)encodeErrorMapFilteringToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeErrorMapFilteringWithGaussianToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeInitialieBestToCommandBuffer:(id)arg1 bestError:(id)arg2;
- (void)encodeLinearSplattingToCommandBuffer:(id)arg1 input:(id)arg2 flow:(id)arg3 error:(id)arg4 splatBuffer:(id)arg5 outputTexture:(id)arg6 timeScale:(float)arg7;
- (void)encodeNormalizationToCommandBuffer:(id)arg1 fromBuffer:(id)arg2 toTexture:(id)arg3 inputSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4;
- (void)encodeSplattingNormalizationToCommandBuffer:(id)arg1 splattingBuffer:(id)arg2 outputTexture:(id)arg3;
- (void)encodeSplattingToCommandBuffer:(id)arg1 input:(id)arg2 flow:(id)arg3 error:(id)arg4 outputBuffer:(id)arg5 timeScale:(float)arg6;
- (void)encodeToCommandBuffer:(id)arg1 input:(id)arg2 flow:(id)arg3 error:(id)arg4 timeScale:(float)arg5 fullWarp:(bool)arg6 bestError:(id)arg7 output:(id)arg8 destination:(id)arg9;
- (void)encodeToCommandBuffer:(id)arg1 input:(id)arg2 flow:(id)arg3 error:(id)arg4 timeScale:(float)arg5 fullWarp:(bool)arg6 bestError:(id)arg7 outputBuffer:(id)arg8;
- (void)encodeUpdateBestToCommandBuffer:(id)arg1 flow:(id)arg2 error:(id)arg3 timeScale:(float)arg4 bestError:(id)arg5;
- (void)encodeUpdateOutputToCommandBuffer:(id)arg1 input:(id)arg2 flow:(id)arg3 error:(id)arg4 timeScale:(float)arg5 fullWarp:(bool)arg6 bestError:(id)arg7 output:(id)arg8;
- (float)errorTolerance;
- (bool)filterErrorMapByGaussian;
- (id)initWithDevice:(id)arg1 commmandQueue:(id)arg2 isLiteSynthesis:(bool)arg3;
- (bool)isLiteSynthesis;
- (bool)limitBilinearInterpolation;
- (bool)linearSplatting;
- (void)setCreateOcclusionMask:(bool)arg1;
- (void)setErrorTolerance:(float)arg1;
- (void)setIsLiteSynthesis:(bool)arg1;
- (void)setLimitBilinearInterpolation:(bool)arg1;
- (void)setLinearSplatting:(bool)arg1;
- (bool)setupMetal;
- (void)updateBest:(id)arg1 error:(id)arg2 timeScale:(float)arg3 best:(id)arg4;
- (void)updateOutput:(id)arg1 flow:(id)arg2 error:(id)arg3 timeScale:(float)arg4 fullWarp:(bool)arg5 bestError:(id)arg6 output:(id)arg7;

@end
