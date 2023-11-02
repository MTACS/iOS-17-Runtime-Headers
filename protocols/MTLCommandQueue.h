
@protocol MTLCommandQueue <NSObject>

@required

- (<MTLCommandBuffer> *)commandBuffer;
- (<MTLCommandBuffer> *)commandBufferWithDescriptor:(MTLCommandBufferDescriptor *)arg1;
- (<MTLCommandBuffer> *)commandBufferWithUnretainedReferences;
- (<MTLDevice> *)device;
- (void)insertDebugCaptureBoundary;
- (NSString *)label;
- (void)setLabel:(NSString *)arg1;

@end
