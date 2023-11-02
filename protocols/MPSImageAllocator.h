
@protocol MPSImageAllocator <NSObject, NSSecureCoding>

@required

- (MPSImage *)imageForCommandBuffer:(id <MTLCommandBuffer>)arg1 imageDescriptor:(MPSImageDescriptor *)arg2 kernel:(MPSKernel *)arg3;

@optional

- (NSArray *)imageBatchForCommandBuffer:(id <MTLCommandBuffer>)arg1 imageDescriptor:(MPSImageDescriptor *)arg2 kernel:(MPSKernel *)arg3 count:(unsigned long long)arg4;

@end
