
@interface CVAFilterDiffusion : ImageSaverRegistrator {
    <MTLComputePipelineState> * _createDiffusionMapLaplacianKernel;
    <MTLComputePipelineState> * _createEdgeLaplacianKernel;
    <MTLBuffer> * _davidConfigImmutable;
    <MTLDeviceSPI> * _device;
    <MTLBuffer> * _edgeLaplacianConfigImmutable;
    float  _edgeVariance;
    unsigned long long  _height;
    <MTLBuffer> * _jacobiConfigImmutable;
    <MTLTexture> * _laplacian;
    <MTLComputePipelineState> * _laplacianDavidKernel;
    <MTLComputePipelineState> * _laplacianJacobiKernel;
    <MTLLibrary> * _library;
    <MTLPipelineLibrarySPI> * _pipelineLibrary;
    <MTLResourceGroupSPI> * _temporaryTextureGroup;
    <MTLTexture> * _tmpOut16_0;
    <MTLTexture> * _tmpOut16_1;
    <MTLTexture> * _tmpOut32_0;
    <MTLTexture> * _tmpOut32_1;
    unsigned long long  _width;
}

- (void).cxx_destruct;
- (void)encodeDavidIterationToCommandBufferInternal:(id)arg1 priorTexture:(id)arg2 confidenceTexture:(id)arg3 sourceTexture:(id)arg4 destinationTexture:(id)arg5;
- (void)encodeDiffusionMapLaplacianToCommandBuffer:(id)arg1 diffusionMapTexture:(id)arg2 outputLaplacian:(id)arg3;
- (void)encodeEdgeLaplacianToCommandBuffer:(id)arg1 colorTexture:(id)arg2 outputLaplacian:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 priorTexture:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 diffusionMapTexture:(id)arg5 confidenceTexture:(id)arg6 iterations:(unsigned int)arg7;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 colorTexture:(id)arg4 iterations:(unsigned int)arg5;
- (void)encodeToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 bufferWidth:(unsigned long long)arg4 bufferHeight:(unsigned long long)arg5 edgeVariance:(float)arg6 stepSize:(float)arg7 error:(id*)arg8;

@end
