
@protocol MTLIndirectRenderCommandSPI <MTLIndirectRenderCommand>

@required

- (void)clearBarrier;
- (_MTLIndirectDrawArguments *)drawArguments;
- (_MTLIndirectDrawIndexedArguments *)drawIndexedArguments;
- (_MTLIndirectDrawIndexedPatchesArguments *)drawIndexedPatchesArguments;
- (void)drawMeshThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (_MTLIndirectDrawMeshThreadgroupsArguments *)drawMeshThreadgroupsArguments;
- (void)drawMeshThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (_MTLIndirectDrawMeshThreadsArguments *)drawMeshThreadsArguments;
- (_MTLIndirectDrawPatchesArguments *)drawPatchesArguments;
- (unsigned long long)getCommandType;
- (unsigned long long)getFragmentBufferAddressAtIndex:(unsigned long long)arg1;
- (void*)getFragmentBufferAtIndex:(unsigned long long)arg1;
- (unsigned long long)getMeshBufferAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)getObjectBufferAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)getObjectThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
- (unsigned long long)getOptimizedStatus;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (_MTLIndirectTessellationFactorArguments *)getTessellationFactorArguments;
- (unsigned long long)getVertexAttributeStrideAtIndex:(unsigned long long)arg1;
- (unsigned long long)getVertexBufferAddressAtIndex:(unsigned long long)arg1;
- (void*)getVertexBufferAtIndex:(unsigned long long)arg1;
- (bool)hasBarrier;
- (void)setBarrier;
- (void)setMeshBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;

@end
