
@protocol MPSNDArrayAllocator <NSObject, NSSecureCoding, NSCopying>

@required

- (MPSNDArray *)arrayForCommandBuffer:(id <MTLCommandBuffer>)arg1 arrayDescriptor:(MPSNDArrayDescriptor *)arg2 kernel:(MPSKernel *)arg3;

@end
