
@interface CVAFilterInfimumConvolution : ImageSaverRegistrator {
    <MTLDeviceSPI> * _device;
    unsigned long long  _height;
    <MTLComputePipelineState> * _infimumConvolutionKernel;
    <MTLComputePipelineState> * _infimumKernel;
    <MTLLibrary> * _library;
    <MTLPipelineLibrarySPI> * _pipelineLibrary;
    <MTLTexture> * _tmpBlurHalf;
    <MTLTexture> * _tmpOutHalf;
    <MTLResourceGroupSPI> * _tmpTextureGroup;
    unsigned long long  _width;
}

- (void).cxx_destruct;
- (void)encodeInfimumToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 smallSourceTexture:(id)arg3 destinationTexture:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 smallSourceTexture:(id)arg3 destinationTexture:(id)arg4 orientation:(float)arg5 majorRadius:(float)arg6 minorRadius:(float)arg7 iterations:(unsigned int)arg8;
- (void)encodeToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 config:(struct InfimumConvolutionConfig { })arg4;
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 bufferWidth:(unsigned long long)arg4 bufferHeight:(unsigned long long)arg5 error:(id*)arg6;

@end
