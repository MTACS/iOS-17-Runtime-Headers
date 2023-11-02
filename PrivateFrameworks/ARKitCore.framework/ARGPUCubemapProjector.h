
@interface ARGPUCubemapProjector : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDepthStencilState> * _cubemapDepthState;
    <MTLRenderPipelineState> * _cubemapPipelineStateHDR;
    <MTLRenderPipelineState> * _cubemapPipelineStateSRGB_BGRA;
    <MTLRenderPipelineState> * _cubemapPipelineStateSRGB_RGBA;
    <MTLDevice> * _device;
}

+ (id)createCubemap:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)projectToCube:(id)arg1 transformWorldFromCube:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 meshes:(id)arg3 blend:(bool)arg4;

@end
