
@interface ARGPUCubemapConverter : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLComputePipelineState> * _cubemapToLatLongPipelineState;
    <MTLDevice> * _device;
    bool  _gpuFamilyAtleast4;
    <MTLComputePipelineState> * _latLongToCubemapPipelineState;
}

- (void).cxx_destruct;
- (id)cubemapTextureFromEquirectangularTexture:(id)arg1 rotation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 size:(unsigned long long)arg3;
- (id)equirectangularTextureFromCubemapTexture:(id)arg1 rotation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)init;

@end
