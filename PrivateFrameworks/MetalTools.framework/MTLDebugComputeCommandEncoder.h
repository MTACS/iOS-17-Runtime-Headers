
@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {
    unsigned int  _activeSubstream;
    struct MTLDebugFunctionArgument { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
        unsigned long long baseLevel; 
        unsigned long long bufferLength; 
        unsigned long long bufferOffset; 
        unsigned long long bufferAttributeStride; 
        unsigned long long threadgroupMemoryLength; 
        unsigned long long threadgroupMemoryOffset; 
        bool hasLodClamp; 
        float lodMinClamp; 
        float lodMaxClamp; 
    }  _buffers;
    MTLDebugCommandBuffer * _commandBuffer;
    <MTLComputePipelineState> * _computePipelineState;
    int  _currentVirtualSubstreamIndex;
    bool  _encodedVirtualSubstreamDispatch;
    bool  _encodingVirtualSubstream;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _imageBlockSize;
    unsigned int  _numSubstreams;
    struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { 
        struct __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<unsigned int>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _progressLabels;
    struct MTLDebugFunctionArgument { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
        unsigned long long baseLevel; 
        unsigned long long bufferLength; 
        unsigned long long bufferOffset; 
        unsigned long long bufferAttributeStride; 
        unsigned long long threadgroupMemoryLength; 
        unsigned long long threadgroupMemoryOffset; 
        bool hasLodClamp; 
        float lodMinClamp; 
        float lodMaxClamp; 
    }  _samplers;
    struct MTLDebugFunctionArgument { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
        unsigned long long baseLevel; 
        unsigned long long bufferLength; 
        unsigned long long bufferOffset; 
        unsigned long long bufferAttributeStride; 
        unsigned long long threadgroupMemoryLength; 
        unsigned long long threadgroupMemoryOffset; 
        bool hasLodClamp; 
        float lodMinClamp; 
        float lodMaxClamp; 
    }  _textures;
    struct MTLDebugFunctionArgument { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
        unsigned long long baseLevel; 
        unsigned long long bufferLength; 
        unsigned long long bufferOffset; 
        unsigned long long bufferAttributeStride; 
        unsigned long long threadgroupMemoryLength; 
        unsigned long long threadgroupMemoryOffset; 
        bool hasLodClamp; 
        float lodMinClamp; 
        float lodMaxClamp; 
    }  _threadgroupMemoryLengths;
    bool  allowsNullBufferBinds;
    bool  canDealloc;
    bool  canEndEncoding;
    bool  canSetComputePipelineState;
    bool  hasEndEncoding;
    bool  hasIndirectSetStageInRegion;
    bool  hasSetComputePipelineState;
    bool  hasSetStageInRegion;
    struct { 
        struct { 
            unsigned long long x; 
            unsigned long long y; 
            unsigned long long z; 
        } origin; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } size; 
    }  stageInRegion;
    struct deque<id, std::allocator<id>> { 
        /* Warning: unhandled struct encoding: '{__split_buffer<id *, std::allocator<id *>>="__first_"^^@"__begin_"^^@"__end_"^^@"__end_cap_"{__compressed_pair<id **, std::allocator<id *>>="__value_"^^@}}"__start_"Q"__size_"{__compressed_pair<unsigned long, std::allocator<id>>="__value_"Q}}' */ struct __split_buffer<id *, std::allocator<id *>> { 
            __begin_ ***__first_; 
        } __map_; 
    }  updatedFences;
}

@property (nonatomic, readonly) <MTLComputePipelineState> *computePipelineState;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setDefaults;
- (void)_validateAllFunctionArguments;
- (void)_validateThreadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)beginVirtualSubstream;
- (id)computePipelineState;
- (void)dealloc;
- (id)description;
- (void)dispatchThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)dispatchThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)enableNullBufferBinds:(bool)arg1;
- (void)endEncoding;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)endEncoding_private;
- (void)endVirtualSubstream;
- (void)enumerateBuffersUsingBlock:(id /* block */)arg1;
- (void)enumerateSamplersUsingBlock:(id /* block */)arg1;
- (void)enumerateTexturesUsingBlock:(id /* block */)arg1;
- (void)enumerateThreadgroupMemoryLengthsUsingBlock:(id /* block */)arg1;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;
- (void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2;
- (void)memoryBarrierWithScope:(unsigned long long)arg1;
- (unsigned long long)nextVirtualSubstream;
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(bool)arg3;
- (void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBufferOffset:(unsigned long long)arg1 attributeStride:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 attributeStrides:(const unsigned long long*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setComputePipelineState:(id)arg1;
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setIntersectionFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setStageInRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1;
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)setSubstream:(unsigned int)arg1;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)signalProgress:(unsigned int)arg1;
- (void)updateFence:(id)arg1;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)validateFunctionTableUseResource:(id)arg1 selectorName:(id)arg2;
- (void)validateStageInRegion:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)waitForFence:(id)arg1;
- (void)waitForProgress:(unsigned int)arg1;
- (void)waitForVirtualSubstream:(unsigned long long)arg1;

@end
