
@interface CVAFilterAlphaBlend : ImageSaverAndFileConfigRegistrator {
    <MTLComputePipelineState> * _alphaBlend_Kernel;
    <MTLCommandQueue> * _commandQueue;
    <MTLDeviceSPI> * _device;
    <MTLLibrary> * _library;
    <MTLPipelineLibrarySPI> * _pipelineLibrary;
    NSObject<OS_dispatch_semaphore> * _renderingCallbackSemaphore;
    NSObject<OS_dispatch_queue> * _synchronousRenderingCallbackQueue;
}

- (void).cxx_destruct;
- (void)alphaBlendPixelBuffer:(struct RetainPtr<__CVBuffer *> { void *x1; })arg1 inPixelBufferSecond:(struct RetainPtr<__CVBuffer *> { void *x1; })arg2 outPixelBuffer:(struct RetainPtr<__CVBuffer *> { void *x1; })arg3 alpha:(float)arg4 callbackQueue:(id)arg5 callback:(id /* block */)arg6;
- (void)encodeAlphaBlendToCommandBuffer:(id)arg1 inTexFirst:(id)arg2 inTexSecond:(id)arg3 outTex:(id)arg4 alpha:(float)arg5;
- (struct pair<id<MTLTexture>, id<MTLTexture>> { id x1; id x2; })getTexturePlanesFromPixelBuffer:(struct __CVBuffer { }*)arg1 usage:(unsigned long long)arg2;
- (id)initWithMetalContext:(void*)arg1;

@end
