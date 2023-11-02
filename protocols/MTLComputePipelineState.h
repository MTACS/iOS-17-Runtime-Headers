
@protocol MTLComputePipelineState <NSObject>

@required

- (<MTLDevice> *)device;
- (<MTLFunctionHandle> *)functionHandleWithFunction:(id <MTLFunction>)arg1;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (NSString *)label;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (<MTLComputePipelineState> *)newComputePipelineStateWithAdditionalBinaryFunctions:(NSArray *)arg1 error:(id*)arg2;
- (<MTLIntersectionFunctionTable> *)newIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1;
- (<MTLVisibleFunctionTable> *)newVisibleFunctionTableWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1;
- (unsigned long long)staticThreadgroupMemoryLength;
- (bool)supportIndirectCommandBuffers;
- (unsigned long long)threadExecutionWidth;

@end
