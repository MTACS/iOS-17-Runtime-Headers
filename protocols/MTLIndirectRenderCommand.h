
@protocol MTLIndirectRenderCommand <NSObject>

@required

- (void)clearBarrier;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id <MTLBuffer>)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 tessellationFactorBuffer:(id <MTLBuffer>)arg10 tessellationFactorBufferOffset:(unsigned long long)arg11 tessellationFactorBufferInstanceStride:(unsigned long long)arg12;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawMeshThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)drawMeshThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 tessellationFactorBuffer:(id <MTLBuffer>)arg8 tessellationFactorBufferOffset:(unsigned long long)arg9 tessellationFactorBufferInstanceStride:(unsigned long long)arg10;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (void)reset;
- (void)setBarrier;
- (void)setFragmentBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setMeshBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1;
- (void)setVertexBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;

@end
