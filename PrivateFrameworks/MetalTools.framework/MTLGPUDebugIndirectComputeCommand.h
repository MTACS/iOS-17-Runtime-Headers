
@interface MTLGPUDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand {
    unsigned long long  _commandIndex;
}

- (void)clearBarrier;
- (void)concurrentDispatchThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)concurrentDispatchThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)dealloc;
- (id)initWithIndirectComputeCommand:(id)arg1 commandIndex:(unsigned long long)arg2 indirectCommandBuffer:(id)arg3;
- (void)reset;
- (void)setBarrier;
- (void)setComputePipelineState:(id)arg1;
- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setStageInRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;

@end
