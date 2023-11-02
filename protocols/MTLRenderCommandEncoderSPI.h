
@protocol MTLRenderCommandEncoderSPI <MTLCommandEncoderSPI, MTLRenderCommandEncoder>

@required

- (void)addSplitHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLRenderCommandEncoderSPI> *, unsigned long long, void*
- (void)drawMeshThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id <MTLBuffer>)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4;
- (void)drawMeshThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (bool)isMemorylessRender;
- (void)setDepthClipModeSPI:(unsigned long long)arg1;
- (void)setFragmentTexture:(id <MTLTexture>)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id <MTLSamplerState>)arg3 atSamplerIndex:(unsigned long long)arg4;
- (void)setLineWidth:(float)arg1;
- (void)setMeshBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setMeshBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setMeshBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setMeshBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setMeshSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setMeshSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setMeshSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setMeshSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMeshTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setMeshTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMeshVisibleFunctionTable:(id <MTLVisibleFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setMeshVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setObjectBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setObjectBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setObjectSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setObjectSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setObjectTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectVisibleFunctionTable:(id <MTLVisibleFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setObjectVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVertexAmplificationMode:(unsigned long long)arg1 value:(unsigned long long)arg2;

@optional

- (void)dispatchThreadsPerTile:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 inRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 inRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 withRenderTargetArrayIndex:(unsigned int)arg3;
- (void)setAlphaTestReferenceValue:(float)arg1;
- (void)setClipPlane:(float)arg1 p2:(float)arg2 p3:(float)arg3 p4:(float)arg4 atIndex:(unsigned long long)arg5;
- (void)setColorResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5;
- (void)setColorResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(bool)arg5 atIndex:(unsigned long long)arg6;
- (void)setCommandDataCorruptModeSPI:(unsigned long long)arg1;
- (void)setDepthCleared;
- (void)setDepthResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;
- (void)setDepthResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(bool)arg5;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;
- (void)setMeshAccelerationStructure:(id <MTLAccelerationStructure>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setMeshIntersectionFunctionTable:(id <MTLIntersectionFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setMeshIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setObjectAccelerationStructure:(id <MTLAccelerationStructure>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setObjectIntersectionFunctionTable:(id <MTLIntersectionFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setObjectIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setPointSize:(float)arg1;
- (void)setPrimitiveRestartEnabled:(bool)arg1;
- (void)setPrimitiveRestartEnabled:(bool)arg1 index:(unsigned long long)arg2;
- (void)setProvokingVertexMode:(unsigned long long)arg1;
- (void)setStencilCleared;
- (void)setStencilResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;
- (void)setStencilResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(bool)arg5;
- (void)setTransformFeedbackState:(unsigned long long)arg1;
- (void)setTriangleFrontFillMode:(unsigned long long)arg1 backFillMode:(unsigned long long)arg2;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;
- (void)setViewportTransformEnabled:(bool)arg1;
- (void)useResourceGroup:(id <MTLResourceGroupSPI>)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;

@end
