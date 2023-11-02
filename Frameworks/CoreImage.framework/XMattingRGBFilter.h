
@interface XMattingRGBFilter : NSObject <MattingFilter> {
    <MTLTexture> * _alphaStack;
    <MTLTexture> * _alphaStackTexture2DView;
    <MTLComputePipelineState> * _applyCoefficientsKernel;
    <MTLComputePipelineState> * _applyCoefficientsSamplingKernel;
    <MTLTexture> * _coefficients;
    <MTLTexture> * _coefficientsTexture2DView;
    <MTLComputePipelineState> * _compute3DCoefficientsKernel;
    <MTLComputePipelineState> * _computeInverted3DGuideCovarianceMatrixKernel;
    <MTLTexture> * _constraints;
    <MTLTexture> * _constraintsTexture2DView;
    <MTLDevice> * _device;
    <MTLTexture> * _guideStack;
    <MTLTexture> * _guideStackTexture2DView;
    <MTLLibrary> * _library;
    <MTLTexture> * _mean_I;
    <MTLTexture> * _mean_alpha;
    <MTLComputePipelineState> * _nearestNeighborDownsamplingKernel;
    NSArray * _var_I;
    XMattingBoxTensorFilter * boxTensorFilter;
    bool  coefficientsComputed;
    struct { 
        unsigned int internalWidth; 
        unsigned int internalHeight; 
        unsigned int spatialRadius; 
        unsigned int temporalRadius; 
        unsigned int arrayLength; 
        float epsilon; 
        bool disableForSameResolution; 
    }  config;
    bool  stateComputed;
}

@property (retain) XMattingBoxTensorFilter *boxTensorFilter;
@property (readonly) bool coefficientsComputed;
@property struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; bool x7; } config;
@property (readonly) bool stateComputed;

- (void).cxx_destruct;
- (int)_compileShadersWithLibrary:(id)arg1;
- (int)allocateResources:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; bool x7; })arg1;
- (id)boxTensorFilter;
- (bool)coefficientsComputed;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; bool x7; })config;
- (void)dealloc;
- (int)encodeApplyCoefficientsOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 constraints:(id)arg4 destinationAlphaTexture:(id)arg5;
- (int)encodeCoefficientsOn:(id)arg1 guideStack:(id)arg2 alphaStack:(id)arg3 mean_I:(id)arg4 var_I:(id)arg5 coefficients:(id)arg6;
- (void)encodeNearestNeighborDownSamplingOn:(id)arg1 inputTexture:(id)arg2 outputTexture:(id)arg3;
- (int)encodeStateOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 initialSegmentation:(id)arg4 constraints:(id)arg5;
- (int)encodeStepOn:(id)arg1;
- (int)encodeUpsampleOn:(id)arg1 segmentation:(id)arg2 colorGuide:(id)arg3 disparityGuide:(id)arg4 outputMatte:(id)arg5;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (void)releaseResources;
- (void)setBoxTensorFilter:(id)arg1;
- (void)setConfig:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; bool x7; })arg1;
- (bool)stateComputed;

@end
