
@interface ARGPUCubemapHistogram : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLComputePipelineState> * _cubemapHistogramPipelineState;
    <MTLDevice> * _device;
    bool  _gpuFamilyAtleast4;
}

- (void).cxx_destruct;
- (struct ARLabHistogram { float x1; float x2[4][8][8]; })colorHistogramForCubemap:(id)arg1;
- (id)init;

@end
