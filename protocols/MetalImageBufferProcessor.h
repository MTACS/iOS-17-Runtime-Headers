
@protocol MetalImageBufferProcessor <ImageBufferProcessor>

@required

- (<MTLCommandQueue> *)metalCommandQueue;
- (void)setMetalCommandQueue:(id <MTLCommandQueue>)arg1;

@optional

- (CMIExternalMemoryDescriptor *)externalMemoryDescriptorForConfiguration:(CMIExternalMemoryConfiguration *)arg1;
- (CMIExternalMemoryResource *)externalMemoryResource;
- (void)setExternalMemoryResource:(CMIExternalMemoryResource *)arg1;
- (bool)supportsExternalMemoryResource;

@end
