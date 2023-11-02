
@interface ARGPUSphericalBlur : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLComputePipelineState> * _cubemapBlurPipelineState;
    <MTLDevice> * _device;
    bool  _gpuFamilyAtleast4;
}

- (void).cxx_destruct;
- (id)blurCubemapTexture:(id)arg1 roughness:(id)arg2 rotation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3;
- (id)init;

@end
