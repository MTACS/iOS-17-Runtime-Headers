
@interface MTLGPUDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder <MTLGPUDebugCommandEncoder> {
    <MTLBuffer> * _bufferUsageTable;
    unsigned int  _commandBufferJumpNestingLevel;
    MTLGPUDebugComputePipelineState * _currentPipeline;
    struct GPUDebugEventUUIDPacket { 
        unsigned long long pipelineStateID; 
        unsigned long long entryPointImageID; 
        unsigned int encoderID; 
        unsigned int eventID; 
    }  _dispatchID;
    bool  _enableUseResourceValidation;
    struct MTLGPUDebugStageBufferHandles { 
        unsigned long long handles[31]; 
        <MTLGPUDebugResource> *resources[31]; 
        unsigned long long offsets[31]; 
        unsigned long long strides[31]; 
        unsigned int lengths[31]; 
        unsigned long long gpu_address[31][2]; 
        bool needsFlush; 
    }  _handles;
    struct Options { unsigned int x1; int x2; int x3; int x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; unsigned int x_6_1_6 : 1; unsigned int x_6_1_7 : 1; unsigned int x_6_1_8 : 1; unsigned int x_6_1_9 : 1; unsigned int x_6_1_10 : 1; unsigned int x_6_1_11 : 1; unsigned int x_6_1_12 : 1; unsigned int x_6_1_13 : 1; unsigned int x_6_1_14 : 1; unsigned int x_6_1_15 : 1; unsigned int x_6_1_16 : 1; unsigned int x_6_1_17 : 1; unsigned int x_6_1_18 : 1; unsigned int x_6_1_19 : 1; unsigned int x_6_1_20 : 1; unsigned int x_6_1_21 : 1; unsigned int x_6_1_22 : 1; unsigned int x_6_1_23 : 1; unsigned int x_6_1_24 : 1; unsigned int x_6_1_25 : 1; unsigned int x_6_1_26 : 1; unsigned int x_6_1_27 : 1; unsigned int x_6_1_28 : 1; unsigned int x_6_1_29 : 1; unsigned int x_6_1_30 : 1; unsigned int x_6_1_31 : 1; unsigned int x_6_1_32 : 1; unsigned int x_6_1_33 : 1; unsigned int x_6_1_34 : 1; unsigned int x_6_1_35 : 1; } x6; } * _options;
    struct MTLGPUDebugBufferSubAlloc { 
        <MTLBuffer> *buffer; 
        unsigned long long offset; 
    }  _reportBuffer;
    <MTLBuffer> * _textureUsageTable;
    struct MTLGPUDebugThreadgroupLengths { 
        unsigned int threadgroupSizes[31]; 
        struct GPUDebugThreadgroupTableEntry { 
            unsigned int offset; 
            unsigned int length; 
        } entries[32]; 
        bool needsFlush; 
    }  _threadgroup;
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
- (void)dispatchThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)dispatchThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (bool)encodeEndDoWhile:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;
- (bool)encodeEndIf;
- (bool)encodeEndWhile;
- (void)encodeStartDoWhile;
- (void)encodeStartIf:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;
- (void)encodeStartWhile:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;
- (unsigned int)encoderID;
- (void)endEncoding;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)flushBindings;
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned int)arg4;
- (id)initWithComputeCommandEncoder:(id)arg1 parent:(id)arg2 encoderID:(unsigned int)arg3;
- (void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setAccelerationStructures:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBufferOffset:(unsigned long long)arg1 attributeStride:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBufferUsageTable:(id)arg1 textureUsageTable:(id)arg2;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 attributeStrides:(const unsigned long long*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setComputePipelineState:(id)arg1;
- (void)setComputePipelineStateBuffers:(id)arg1;
- (void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setKernelReportBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)temporaryBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)temporaryBufferWithLength:(unsigned long long)arg1;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResourceInternal:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;

@end
