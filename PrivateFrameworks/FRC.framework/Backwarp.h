
@interface Backwarp : NSObject {
    <MTLComputePipelineState> * _backwarpKernel;
    <MTLComputePipelineState> * _backwarpLossKernel;
    <MTLComputePipelineState> * _backwarpLossWithFlowMagnitudeKernel;
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLComputePipelineState> * _flowReshuffleKernel;
    <MTLComputePipelineState> * _flowSplattingWarpKernel;
    <MTLComputePipelineState> * _flowUpscaleKernel;
    bool  _interleaved;
    <MTLLibrary> * _mtlLibrary;
    <MTLComputePipelineState> * _padTextureKernel;
    <MTLComputePipelineState> * _reverseFlowKernel;
    <MTLComputePipelineState> * _subsampleErrorKernel;
    <MTLComputePipelineState> * _subsampleFlowKernel;
    <MTLComputePipelineState> * _subsampleInputKernel;
    <MTLComputePipelineState> * _upscaleErrorKernel;
}

- (void).cxx_destruct;
- (void)calcBackwarpLoss:(id)arg1 second:(id)arg2 flow:(id)arg3 timeScale:(float)arg4 destination:(id)arg5;
- (void)copyTextureWithPaddingSource:(id)arg1 destination:(id)arg2;
- (void)dealloc;
- (void)encodeBackwarpLossToCommandBuffer:(id)arg1 first:(id)arg2 second:(id)arg3 flow:(id)arg4 timeScale:(float)arg5 destination:(id)arg6;
- (void)encodeBackwarpLossWithFlowMagnitudeToCommandBuffer:(id)arg1 first:(id)arg2 second:(id)arg3 flow:(id)arg4 timeScale:(float)arg5 gamma:(float)arg6 protectionThreshold:(float)arg7 destination:(id)arg8;
- (void)encodeFlowSplattingWarpToCommandBuffer:(id)arg1 source:(id)arg2 flow:(id)arg3 timeScale:(float)arg4 destination:(id)arg5;
- (void)encodePaddingTextureToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeReShuffleFlowToCommandBuffer:(id)arg1 shuffledFlow:(id)arg2 previousFlow:(id)arg3 destination:(id)arg4;
- (void)encodeReverseFlowToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeSubsampleErrorToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeSubsampleFlowToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeSubsampleInputToCommandBufferr:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeSubsampleToCommandBufferr:(id)arg1 source:(id)arg2 destination:(id)arg3 kernel:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 source:(id)arg2 flow:(id)arg3 destination:(id)arg4 upscaledFlow:(id)arg5;
- (void)encodeUpscaleErrorToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeUpscaleFlowToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (id)initWithDevice:(id)arg1 interleaved:(bool)arg2;
- (void)reverseFlowWithSource:(id)arg1 destination:(id)arg2;
- (void)setupMetal;
- (void)upscaleFlow:(id)arg1 destination:(id)arg2;
- (void)warpImage:(id)arg1 to:(id)arg2 withFlow:(id)arg3 upscaledFlow:(id)arg4;

@end
