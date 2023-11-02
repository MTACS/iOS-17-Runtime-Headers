
@interface CVAFilterDistanceTransform : NSObject {
    <MTLTexture> * _closestSites;
    <MTLComputePipelineState> * _closestSitesKernel;
    <MTLDeviceSPI> * _device;
    <MTLComputePipelineState> * _distanceTransformKernel;
    <MTLResourceGroupSPI> * _intermediateTexturesResourceGroup;
    NSString * _label;
    <MTLLibrary> * _library;
    <MTLPipelineLibrarySPI> * _pipelineLibrary;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 textureSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 error:(id*)arg5;
- (id)label;

@end
