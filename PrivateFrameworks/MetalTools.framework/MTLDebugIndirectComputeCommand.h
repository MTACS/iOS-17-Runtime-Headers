
@interface MTLDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand {
    MTLIndirectCommandBufferDescriptor * _desc;
    <MTLIndirectCommandBufferSPI> * _iCB;
    unsigned long long  _index;
}

@property (readonly) unsigned long long index;
@property (readonly) <MTLIndirectCommandBuffer> *indirectCommandBuffer;

- (void)concurrentDispatchThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)concurrentDispatchThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)dealloc;
- (unsigned long long)index;
- (id)indirectCommandBuffer;
- (id)initWithBaseObject:(id)arg1 descriptor:(id)arg2 indexCount:(unsigned long long)arg3 indirectCommandBuffer:(id)arg4;
- (void)setComputePipelineState:(id)arg1;
- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;

@end
