
@interface MTLGPUDebugRenderCommandEncoder : MTLToolsRenderCommandEncoder <MTLGPUDebugCommandEncoder> {
    MTLGPUDebugCommandBuffer * _commandBuffer;
    MTLToolsDepthStencilState * _currentDepthStencil;
    MTLGPUDebugRenderPipelineState * _currentPipeline;
    struct GPUDebugEventUUIDPacket { 
        unsigned long long pipelineStateID; 
        unsigned long long entryPointImageID; 
        unsigned int encoderID; 
        unsigned int eventID; 
    }  _drawID;
    bool  _enableUseResourceValidation;
    unsigned long long  _encoderType;
    <MTLBuffer> * _fragmentBufferUsageTable;
    struct MTLGPUDebugStageBufferHandles { 
        unsigned long long handles[31]; 
        <MTLGPUDebugResource> *resources[31]; 
        unsigned long long offsets[31]; 
        unsigned long long strides[31]; 
        unsigned int lengths[31]; 
        unsigned long long gpu_address[31][2]; 
        bool needsFlush; 
    }  _fragmentHandles;
    struct MTLGPUDebugBufferSubAlloc { 
        <MTLBuffer> *buffer; 
        unsigned long long offset; 
    }  _fragmentReportBuffer;
    bool  _fragmentStageActive;
    <MTLBuffer> * _fragmentTextureUsageTable;
    <MTLBuffer> * _meshBufferUsageTable;
    struct MTLGPUDebugStageBufferHandles { 
        unsigned long long handles[31]; 
        <MTLGPUDebugResource> *resources[31]; 
        unsigned long long offsets[31]; 
        unsigned long long strides[31]; 
        unsigned int lengths[31]; 
        unsigned long long gpu_address[31][2]; 
        bool needsFlush; 
    }  _meshHandles;
    struct MTLGPUDebugBufferSubAlloc { 
        <MTLBuffer> *buffer; 
        unsigned long long offset; 
    }  _meshReportBuffer;
    bool  _meshStageActive;
    <MTLBuffer> * _meshTextureUsageTable;
    struct MTLGPUDebugThreadgroupLengths { 
        unsigned int threadgroupSizes[31]; 
        struct GPUDebugThreadgroupTableEntry { 
            unsigned int offset; 
            unsigned int length; 
        } entries[32]; 
        bool needsFlush; 
    }  _meshThreadgroup;
    <MTLBuffer> * _objectBufferUsageTable;
    struct MTLGPUDebugStageBufferHandles { 
        unsigned long long handles[31]; 
        <MTLGPUDebugResource> *resources[31]; 
        unsigned long long offsets[31]; 
        unsigned long long strides[31]; 
        unsigned int lengths[31]; 
        unsigned long long gpu_address[31][2]; 
        bool needsFlush; 
    }  _objectHandles;
    struct MTLGPUDebugBufferSubAlloc { 
        <MTLBuffer> *buffer; 
        unsigned long long offset; 
    }  _objectReportBuffer;
    bool  _objectStageActive;
    <MTLBuffer> * _objectTextureUsageTable;
    struct Options { unsigned int x1; int x2; int x3; int x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; unsigned int x_6_1_6 : 1; unsigned int x_6_1_7 : 1; unsigned int x_6_1_8 : 1; unsigned int x_6_1_9 : 1; unsigned int x_6_1_10 : 1; unsigned int x_6_1_11 : 1; unsigned int x_6_1_12 : 1; unsigned int x_6_1_13 : 1; unsigned int x_6_1_14 : 1; unsigned int x_6_1_15 : 1; unsigned int x_6_1_16 : 1; unsigned int x_6_1_17 : 1; unsigned int x_6_1_18 : 1; unsigned int x_6_1_19 : 1; unsigned int x_6_1_20 : 1; unsigned int x_6_1_21 : 1; unsigned int x_6_1_22 : 1; unsigned int x_6_1_23 : 1; unsigned int x_6_1_24 : 1; unsigned int x_6_1_25 : 1; unsigned int x_6_1_26 : 1; unsigned int x_6_1_27 : 1; unsigned int x_6_1_28 : 1; unsigned int x_6_1_29 : 1; unsigned int x_6_1_30 : 1; unsigned int x_6_1_31 : 1; unsigned int x_6_1_32 : 1; unsigned int x_6_1_33 : 1; unsigned int x_6_1_34 : 1; unsigned int x_6_1_35 : 1; } x6; } * _options;
    struct MTLGPUDebugStageBufferHandles { 
        unsigned long long handles[31]; 
        <MTLGPUDebugResource> *resources[31]; 
        unsigned long long offsets[31]; 
        unsigned long long strides[31]; 
        unsigned int lengths[31]; 
        unsigned long long gpu_address[31][2]; 
        bool needsFlush; 
    }  _tileHandles;
    struct MTLGPUDebugBufferSubAlloc { 
        <MTLBuffer> *buffer; 
        unsigned long long offset; 
    }  _tileReportBuffer;
    bool  _tileStageActive;
    bool  _tileStageUsed;
    struct MTLGPUDebugTileThreadgroup { 
        struct GPUDebugThreadgroupTableEntry { 
            unsigned int offset; 
            unsigned int length; 
        } entries[32]; 
        bool needsFlush; 
    }  _tileThreadgroup;
    struct { 
        unsigned char count; 
        bool mappingsValid; 
        struct { 
            unsigned int viewportArrayIndexOffset; 
            unsigned int renderTargetArrayIndexOffset; 
        } mappings[2]; 
    }  _vertexAmpState;
    <MTLBuffer> * _vertexBufferUsageTable;
    struct MTLGPUDebugStageBufferHandles { 
        unsigned long long handles[31]; 
        <MTLGPUDebugResource> *resources[31]; 
        unsigned long long offsets[31]; 
        unsigned long long strides[31]; 
        unsigned int lengths[31]; 
        unsigned long long gpu_address[31][2]; 
        bool needsFlush; 
    }  _vertexHandles;
    struct MTLGPUDebugBufferSubAlloc { 
        <MTLBuffer> *buffer; 
        unsigned long long offset; 
    }  _vertexReportBuffer;
    bool  _vertexStageActive;
    <MTLBuffer> * _vertexTextureUsageTable;
    unsigned int  useResourceIteration;
}

@property (readonly) MTLGPUDebugCommandBuffer *commandBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int encoderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void)_initBufferArgumentData:(id)arg1;
- (void)_useResourceCommon:(id)arg1 usage:(unsigned long long)arg2 stages:(struct optional<unsigned long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })arg3;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 inRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 inRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 withRenderTargetArrayIndex:(unsigned int)arg3;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(unsigned long long)arg7;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;
- (void)drawMeshThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4;
- (void)drawMeshThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 threadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(unsigned long long)arg5;
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (unsigned int)encoderID;
- (void)endEncoding;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)flushBindings;
- (id)initWithRenderCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned int)arg4;
- (id)initWithRenderCommandEncoder:(id)arg1 parallelEncoder:(id)arg2 encoderID:(unsigned int)arg3;
- (void)setBufferUsageTable:(id)arg1 textureUsageTable:(id)arg2 forStage:(unsigned long long)arg3;
- (void)setDepthStencilState:(id)arg1;
- (void)setFragmentAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setFragmentIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFragmentReportBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFragmentVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setFragmentVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMeshAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setMeshBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setMeshBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setMeshBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setMeshBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setMeshIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setMeshIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMeshReportBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setMeshTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setMeshTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMeshVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setMeshVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setObjectAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setObjectBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setObjectBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setObjectIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setObjectReportBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setObjectTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setObjectVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setObjectVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setRenderPipelineState:(id)arg1;
- (void)setRenderPipelineStateBuffers:(id)arg1;
- (void)setTessellationControlPointIndexBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTileAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setTileBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setTileBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTileIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setTileIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTileReportBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setTileTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTileTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTileVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setTileVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVertexAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const struct { unsigned int x1; unsigned int x2; }*)arg2;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBufferOffset:(unsigned long long)arg1 attributeStride:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 attributeStrides:(const unsigned long long*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVertexIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVertexReportBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVertexVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVertexVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)temporaryBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)temporaryBufferWithLength:(unsigned long long)arg1;
- (void)useHeap:(id)arg1;
- (void)useHeap:(id)arg1 stages:(unsigned long long)arg2;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (void)useResourceInternal:(id)arg1 usage:(unsigned long long)arg2 stages:(struct optional<unsigned long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })arg3;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;

@end
