
@protocol MTLIOCommandQueue <NSObject>

@required

- (<MTLIOCommandBuffer> *)commandBuffer;
- (<MTLIOCommandBuffer> *)commandBufferWithUnretainedReferences;
- (void)enqueueBarrier;
- (NSString *)label;
- (void)setLabel:(NSString *)arg1;

@end
