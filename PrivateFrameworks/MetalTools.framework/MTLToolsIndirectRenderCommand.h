
@interface MTLToolsIndirectRenderCommand : MTLToolsObject <MTLIndirectRenderCommandSPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)clearBarrier;
- (id)drawArguments;
- (id)drawIndexedArguments;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 tessellationFactorBuffer:(id)arg10 tessellationFactorBufferOffset:(unsigned long long)arg11 tessellationFactorBufferInstanceStride:(unsigned long long)arg12;
- (id)drawIndexedPatchesArguments;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawMeshThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (id)drawMeshThreadgroupsArguments;
- (void)drawMeshThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (id)drawMeshThreadsArguments;
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 tessellationFactorBuffer:(id)arg8 tessellationFactorBufferOffset:(unsigned long long)arg9 tessellationFactorBufferInstanceStride:(unsigned long long)arg10;
- (id)drawPatchesArguments;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (unsigned long long)getCommandType;
- (unsigned long long)getFragmentBufferAddressAtIndex:(unsigned long long)arg1;
- (void*)getFragmentBufferAtIndex:(unsigned long long)arg1;
- (unsigned long long)getMeshBufferAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)getObjectBufferAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)getObjectThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
- (unsigned long long)getOptimizedStatus;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (id)getTessellationFactorArguments;
- (unsigned long long)getVertexAttributeStrideAtIndex:(unsigned long long)arg1;
- (unsigned long long)getVertexBufferAddressAtIndex:(unsigned long long)arg1;
- (void*)getVertexBufferAtIndex:(unsigned long long)arg1;
- (bool)hasBarrier;
- (void)reset;
- (void)setBarrier;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setMeshBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineState:(id)arg1;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;

@end
