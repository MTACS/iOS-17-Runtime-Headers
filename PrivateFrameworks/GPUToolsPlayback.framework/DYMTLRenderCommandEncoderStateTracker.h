
@interface DYMTLRenderCommandEncoderStateTracker : NSObject <DYMTLRenderCommandEncoderStateTracker> {
    unsigned long long  _amplificationCount;
    bool  _amplificationCountSet;
    unsigned long long  _amplificationMode;
    bool  _amplificationModeSet;
    unsigned long long  _amplificationValue;
    struct vector<MTLVertexAmplificationViewMapping, std::allocator<MTLVertexAmplificationViewMapping>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<MTLVertexAmplificationViewMapping *, std::allocator<MTLVertexAmplificationViewMapping>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _amplificationViewMappings;
    unsigned int  _backStencilRef;
    float  _blendColorAlpha;
    float  _blendColorBlue;
    float  _blendColorGreen;
    float  _blendColorRed;
    struct unordered_map<unsigned long, DYMTLStoreInfo, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, DYMTLStoreInfo>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, DYMTLStoreInfo>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, DYMTLStoreInfo>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, DYMTLStoreInfo>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, DYMTLStoreInfo>, std::hash<unsigned long>, std::equal_to<unsigned long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, DYMTLStoreInfo>, std::equal_to<unsigned long>, std::hash<unsigned long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _colorStoreInfos;
    unsigned long long  _cullMode;
    float  _depthBias;
    float  _depthBiasClamp;
    float  _depthBiasSlopeScale;
    unsigned long long  _depthClipMode;
    <MTLDepthStencilState> * _depthStencilState;
    struct DYMTLStoreInfo { 
        unsigned long long action; 
        unsigned long long options; 
    }  _depthStoreInfo;
    struct DYMTLBoundBufferInfo { 
        <MTLBuffer> *m_buffer; 
        void *m_bytes; 
        unsigned long long m_offsetOrLength; 
    }  _fragmentBuffers;
    struct DYMTLBoundSamplerInfo { 
        <MTLSamplerState> *sampler; 
        float minLOD; 
        float maxLOD; 
    }  _fragmentSamplers;
    <MTLTexture> * _fragmentTextures;
    unsigned long long  _frontFacingWinding;
    unsigned int  _frontStencilRef;
    unsigned long long  _height;
    float  _lineWidth;
    <MTLRenderCommandEncoderSPI> * _renderEncoder;
    <MTLRenderPipelineState> * _renderPipelineState;
    struct vector<MTLScissorRect, std::allocator<MTLScissorRect>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<MTLScissorRect *, std::allocator<MTLScissorRect>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _scissorRects;
    struct DYMTLStoreInfo { 
        unsigned long long action; 
        unsigned long long options; 
    }  _stencilStoreInfo;
    <MTLBuffer> * _tessellationFactorBuffer;
    unsigned long long  _tessellationFactorBufferInstanceStride;
    unsigned long long  _tessellationFactorBufferOffset;
    float  _tessellationFactorScale;
    bool  _tessellationFactorSet;
    struct DYMTLThreadgroupMemoryInfo { 
        unsigned long long length; 
        unsigned long long offset; 
    }  _threadgroupMemories;
    struct DYMTLBoundBufferInfo { 
        <MTLBuffer> *m_buffer; 
        void *m_bytes; 
        unsigned long long m_offsetOrLength; 
    }  _tileBuffers;
    struct DYMTLBoundSamplerInfo { 
        <MTLSamplerState> *sampler; 
        float minLOD; 
        float maxLOD; 
    }  _tileSamplers;
    <MTLTexture> * _tileTextures;
    unsigned long long  _triangleFillMode;
    /* Warning: unhandled struct encoding: '{vector<__unsafe_unretained id<MTLHeap>, std::allocator<__unsafe_unretained id<MTLHeap>>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<__unsafe_unretained id<MTLHeap> *, std::allocator<__unsafe_unretained id<MTLHeap>>>="__value_"^@}}' */ struct vector<__unsafe_unretained id<MTLHeap>, std::allocator<__unsafe_unretained id<MTLHeap>>> { 
        __end_ **__begin_; 
    }  _usedHeaps;
    struct vector<DYMTLUsedResourceInfo, std::allocator<DYMTLUsedResourceInfo>> { 
        struct DYMTLUsedResourceInfo {} *__begin_; 
        struct DYMTLUsedResourceInfo {} *__end_; 
        struct __compressed_pair<DYMTLUsedResourceInfo *, std::allocator<DYMTLUsedResourceInfo>> { 
            struct DYMTLUsedResourceInfo {} *__value_; 
        } __end_cap_; 
    }  _usedResources;
    struct DYMTLBoundBufferInfo { 
        <MTLBuffer> *m_buffer; 
        void *m_bytes; 
        unsigned long long m_offsetOrLength; 
    }  _vertexBuffers;
    struct DYMTLBoundSamplerInfo { 
        <MTLSamplerState> *sampler; 
        float minLOD; 
        float maxLOD; 
    }  _vertexSamplers;
    <MTLTexture> * _vertexTextures;
    struct vector<MTLViewport, std::allocator<MTLViewport>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<MTLViewport *, std::allocator<MTLViewport>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _viewports;
    unsigned long long  _visibilityResultMode;
    unsigned long long  _visibilityResultOffset;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<MTLViewport' */ struct  viewports; /* unknown property attribute:  std::allocator<MTLViewport>>=^{?}}} */
@property (nonatomic, readonly) unsigned long long width;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_applyFragmentStateToEncoder:(id)arg1 rawBytesBlock:(id /* block */)arg2;
- (void)_applyHeapsAndResourcesToEncoder:(id)arg1;
- (void)_applyVertexStateToEncoder:(id)arg1 rawBytesBlock:(id /* block */)arg2;
- (void)_setDefaultsWithDescriptor:(id)arg1 device:(id)arg2;
- (void)applyAllStateToEncoder:(id)arg1 rawBytesBlock:(id /* block */)arg2;
- (void)applyVertexFragmentStateToEncoder:(id)arg1 rawBytesBlock:(id /* block */)arg2;
- (void)applyVertexStateToEncoder:(id)arg1 rawBytesBlock:(id /* block */)arg2;
- (unsigned int)backReferenceValue;
- (bool)conformsToProtocol:(id)arg1;
- (float)depthBias;
- (float)depthBiasClamp;
- (float)depthBiasSlopeScale;
- (unsigned long long)depthClipMode;
- (id)depthStencilState;
- (id)descriptor;
- (void)enumerateFragmentBuffersUsingBlock:(id /* block */)arg1;
- (void)enumerateFragmentSamplersUsingBlock:(id /* block */)arg1;
- (void)enumerateFragmentTexturesUsingBlock:(id /* block */)arg1;
- (void)enumerateThreadgroupMemoryUsingBlock:(id /* block */)arg1;
- (void)enumerateTileBuffersUsingBlock:(id /* block */)arg1;
- (void)enumerateTileSamplersUsingBlock:(id /* block */)arg1;
- (void)enumerateTileTexturesUsingBlock:(id /* block */)arg1;
- (void)enumerateVertexBuffersUsingBlock:(id /* block */)arg1;
- (void)enumerateVertexSamplersUsingBlock:(id /* block */)arg1;
- (void)enumerateVertexTexturesUsingBlock:(id /* block */)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)frontReferenceValue;
- (unsigned long long)height;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)initWithEncoder:(id)arg1 descriptor:(id)arg2;
- (id)renderPipelineState;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setCullMode:(unsigned long long)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setDepthClipMode:(unsigned long long)arg1;
- (void)setDepthStencilState:(id)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;
- (void)setFragmentTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFrontFacingWinding:(unsigned long long)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setRenderPipelineState:(id)arg1;
- (void)setScissorRect:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setScissorRects:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 count:(unsigned long long)arg2;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3;
- (void)setTessellationFactorScale:(float)arg1;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setTileBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setTileBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTileSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTileSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setTileSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setTileSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTileTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTileTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTriangleFillMode:(unsigned long long)arg1;
- (void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const struct { unsigned int x1; unsigned int x2; }*)arg2;
- (void)setVertexAmplificationMode:(unsigned long long)arg1 value:(unsigned long long)arg2;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setVertexSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setViewport:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewports:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (struct vector<MTLViewport, std::allocator<MTLViewport>> { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<MTLViewport *, std::allocator<MTLViewport>> { struct { /* ? */ } *x_3_1_1; } x3; })viewports;
- (unsigned long long)width;

@end
