
@interface DYMTLComputeCommandEncoderStateTracker : NSObject <DYMTLComputeCommandEncoderStateTracker> {
    struct DYMTLBoundBufferInfo { 
        <MTLBuffer> *m_buffer; 
        void *m_bytes; 
        unsigned long long m_offsetOrLength; 
    }  _buffers;
    <MTLComputeCommandEncoderSPI> * _computeEncoder;
    <MTLComputePipelineState> * _computePipelineState;
    unsigned long long  _dispatchType;
    bool  _hasSetStageInRegion;
    unsigned long long  _imageBlockHeight;
    unsigned long long  _imageBlockWidth;
    struct DYMTLBoundSamplerInfo { 
        <MTLSamplerState> *sampler; 
        float minLOD; 
        float maxLOD; 
    }  _samplers;
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
    }  _stageInRegion;
    <MTLBuffer> * _stageInRegionIndirectBuffer;
    unsigned long long  _stageInRegionIndirectBufferOffset;
    <MTLTexture> * _textures;
    unsigned long long  _threadgroupMemories;
    /* Warning: unhandled struct encoding: '{vector<id<MTLHeap>, std::allocator<id<MTLHeap>>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<__strong id<MTLHeap> *, std::allocator<id<MTLHeap>>>="__value_"^@}}' */ struct vector<id<MTLHeap>, std::allocator<id<MTLHeap>>> { 
        __end_ **__begin_; 
    }  _usedHeaps;
    struct vector<DYMTLUsedResourceInfo, std::allocator<DYMTLUsedResourceInfo>> { 
        struct DYMTLUsedResourceInfo {} *__begin_; 
        struct DYMTLUsedResourceInfo {} *__end_; 
        struct __compressed_pair<DYMTLUsedResourceInfo *, std::allocator<DYMTLUsedResourceInfo>> { 
            struct DYMTLUsedResourceInfo {} *__value_; 
        } __end_cap_; 
    }  _usedResources;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyToEncoder:(id)arg1 rawBytesBlock:(id /* block */)arg2;
- (id)computePipelineState;
- (bool)conformsToProtocol:(id)arg1;
- (void)enumerateBuffersUsingBlock:(id /* block */)arg1;
- (void)enumerateSamplersUsingBlock:(id /* block */)arg1;
- (void)enumerateTexturesUsingBlock:(id /* block */)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithEncoder:(id)arg1 dispatchType:(unsigned long long)arg2;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setComputePipelineState:(id)arg1;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setStageInRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1;
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;

@end
