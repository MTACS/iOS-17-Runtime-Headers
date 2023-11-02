
@interface XFocalPlane : NSObject {
    <MTLComputePipelineState> * _calc_kernel;
    struct { 
        float left; 
        float top; 
        float width; 
        float height; 
        float zeroShiftPercentile; 
    }  _config;
    <MTLDevice> * _device;
    <MTLComputePipelineState> * _disparityRefinementPreprocessingKernel;
    <MTLLibrary> * _library;
    <MTLComputePipelineState> * _minMax0_kernel;
    <MTLComputePipelineState> * _minMax1_kernel;
    <MTLComputePipelineState> * _minMax2_kernel;
    <MTLBuffer> * _minMaxAtomic_buf;
    <MTLBuffer> * _minMaxResult_buf;
    <MTLBuffer> * _zeroShiftResult_buf;
}

@property struct { float x1; float x2; float x3; float x4; float x5; } config;
@property (readonly) <MTLBuffer> *minMaxAtomic_buf;
@property (readonly) <MTLBuffer> *minMaxResult_buf;
@property (readonly) <MTLBuffer> *zeroShiftResult_buf;

- (void).cxx_destruct;
- (int)_compileShadersWithLibrary:(id)arg1;
- (int)allocateResources;
- (struct { float x1; float x2; float x3; float x4; float x5; })config;
- (void)dealloc;
- (int)encodeDisparityRefinementPreprocessingOn:(id)arg1 alphaTexture:(id)arg2 inputDisparityTexture:(id)arg3 outputDisparityTexture:(id)arg4 configuration:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; unsigned int x11; })arg5;
- (int)encodeFocalPlaneCalcOn:(id)arg1 disparityTexture:(id)arg2;
- (int)encodeMinMaxOn:(id)arg1 inputTexture:(id)arg2;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (id)minMaxAtomic_buf;
- (id)minMaxResult_buf;
- (void)releaseResources;
- (void)setConfig:(struct { float x1; float x2; float x3; float x4; float x5; })arg1;
- (id)zeroShiftResult_buf;

@end
