
@interface _MTLCommandEncoder : _MTLObjectWithLabel {
    _MTLCommandBuffer<MTLCommandBuffer> * _commandBuffer;
    NSMutableArray * _debugSignposts;
    <MTLDevice> * _device;
    unsigned long long  _globalTraceObjectID;
    bool  _isProgressTrackingEncoder;
    unsigned long long  _labelTraceID;
    bool  _needsFrameworkAssistedErrorTracking;
    unsigned long long  _numThisEncoder;
    <MTLFence> * _progressFence;
}

@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long dispatchType;
@property (nonatomic, readonly) unsigned long long globalTraceObjectID;
@property (copy) NSString *label;
@property (nonatomic) unsigned long long numThisEncoder;
@property (getter=getType, nonatomic, readonly) unsigned long long type;

// Image: /System/Library/Frameworks/Metal.framework/Metal

- (id)commandBuffer;
- (void)dealloc;
- (id)description;
- (id)device;
- (unsigned long long)dispatchType;
- (void)drawMeshThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4;
- (void)drawMeshThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getDriverUniqueID;
- (unsigned long long)getType;
- (unsigned long long)globalTraceObjectID;
- (id)initWithCommandBuffer:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)invalidateCompressedTexture:(id)arg1;
- (void)invalidateCompressedTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)memoryBarrierNotificationWithResources:(const id*)arg1 count:(unsigned long long)arg2;
- (void)memoryBarrierNotificationWithScope:(unsigned long long)arg1;
- (unsigned long long)numThisEncoder;
- (void)popDebugGroup;
- (void)preEndEncoding;
- (void)pushDebugGroup:(id)arg1;
- (void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setBufferOffset:(unsigned long long)arg1 attributeStride:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 attributeStrides:(const unsigned long long*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setMeshAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setMeshBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setMeshBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setMeshBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setMeshBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setMeshIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setMeshIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMeshSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setMeshSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setMeshSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setMeshSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMeshTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setMeshTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMeshVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setMeshVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setNumThisEncoder:(unsigned long long)arg1;
- (void)setObjectAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setObjectBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setObjectBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setObjectIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setObjectSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setObjectSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setObjectSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setObjectTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setObjectVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setThreadgroupDistributionMode:(long long)arg1;
- (void)setThreadgroupDistributionModeWithClusterGroupIndex:(unsigned int)arg1;
- (void)setThreadgroupPackingDisabled:(bool)arg1;
- (void)setTileAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVertexAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexBufferOffset:(unsigned long long)arg1 attributeStride:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 attributeStrides:(const unsigned long long*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;

// Image: /System/Library/PrivateFrameworks/GPUToolsDiagnostics.framework/GPUToolsDiagnostics

- (void)endEncoding;

@end
