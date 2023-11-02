
@interface MTLDebugDevice : MTLToolsDevice {
    struct MTLSamplerDescriptorHashMap { 
        struct unordered_map<std::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::allocator<std::pair<const std::array<unsigned long long, 3>, unsigned int>>> { 
            struct __hash_table<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, std::__unordered_map_hasher<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t>, std::__unordered_map_equal<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, MTLSamplerDescriptorHashMap::hash_t>, std::allocator<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, MTLSamplerDescriptorHashMap::hash_t>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _map; 
        unsigned int _limit; 
    }  _argumentBufferSamplers;
    struct CheckerboardRenderTargetPipelineCache { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _cacheLock; 
        <MTLLibrary> *_library; 
        <MTLFunction> *_vertexFunction; 
        <MTLDepthStencilState> *_depthStencilState[2]; 
        MTLFunctionConstantValues *_fConstants; 
        struct unordered_map<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>, std::allocator<std::pair<const MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>> { 
            struct __hash_table<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>>, std::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::equal_to<MTLDebugCheckerboardFillHashKey>, MTLDebugCheckerboardFillHashKey::Hash>, std::allocator<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::equal_to<MTLDebugCheckerboardFillHashKey>, MTLDebugCheckerboardFillHashKey::Hash>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _cache; 
    }  _checkerboardRTPipelineCache;
    bool  _loadValidationEnabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _referenceTrackingCommandBufferLock;
    struct unordered_set<MTLDebugCommandBuffer *, std::hash<MTLDebugCommandBuffer *>, std::equal_to<MTLDebugCommandBuffer *>, std::allocator<MTLDebugCommandBuffer *>> { 
        struct __hash_table<MTLDebugCommandBuffer *, std::hash<MTLDebugCommandBuffer *>, std::equal_to<MTLDebugCommandBuffer *>, std::allocator<MTLDebugCommandBuffer *>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *>, std::allocator<std::__hash_node<MTLDebugCommandBuffer *, void *>>> { 
                struct __hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<MTLDebugCommandBuffer *>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<MTLDebugCommandBuffer *>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _referenceTrackingCommandBuffers;
    bool  _storeValidationEnabled;
}

@property (readonly) bool loadValidationEnabled;
@property (readonly) bool storeValidationEnabled;

+ (bool)complainAboutSloppyTextureUsage;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newRenderPipelineStateWithMeshDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newRenderPipelineStateWithMeshDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })accelerationStructureSizesWithDescriptor:(id)arg1;
- (void)addReferenceTrackingCommandBuffer:(id)arg1;
- (void)clearRenderEncoder:(id)arg1 writeMask:(unsigned long long)arg2 withCheckerboard:(float*)arg3;
- (void)deserializeInstanceAccelerationStructure:(id)arg1 fromBytes:(const void*)arg2 primitiveAccelerationStructures:(id)arg3 withDescriptor:(id)arg4;
- (id)deserializeInstanceAccelerationStructureFromBytes:(void*)arg1 primitiveAccelerationStructures:(id)arg2 withDescriptor:(id)arg3;
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBytes:(const void*)arg2 withDescriptor:(id)arg3;
- (id)deserializePrimitiveAccelerationStructureFromBytes:(void*)arg1 withDescriptor:(id)arg2;
- (id)getDepthStencilStateForBaseObject:(id)arg1 descriptor:(id)arg2;
- (id)getDynamicLibraryForBaseObject:(id)arg1;
- (id)getFunctionForBaseObject:(id)arg1 library:(id)arg2;
- (id)getSamplerStateForBaseObject:(id)arg1 descriptor:(id)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })heapAccelerationStructureSizeAndAlignWithDescriptor:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })heapAccelerationStructureSizeAndAlignWithSize:(unsigned long long)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)loadValidationEnabled;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (id)newAccelerationStructureWithBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (id)newAccelerationStructureWithBuffer:(id)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (id)newAccelerationStructureWithDescriptor:(id)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 withDescriptor:(id)arg2;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newArgumentEncoderWithBufferBinding:(id)arg1;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id*)arg3;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(id /* block */)arg4;
- (id)newBufferWithDescriptor:(id)arg1;
- (id)newBufferWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newCounterSampleBufferWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newDagStringWithGraphs:(id)arg1;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id*)arg3;
- (id)newDynamicLibrary:(id)arg1 error:(id*)arg2;
- (id)newDynamicLibraryFromURL:(id)arg1 error:(id*)arg2;
- (id)newDynamicLibraryWithURL:(id)arg1 error:(id*)arg2;
- (id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)newEvent;
- (id)newFence;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newIOCommandQueueWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newIOFileHandleWithURL:(id)arg1 compressionMethod:(long long)arg2 error:(id*)arg3;
- (id)newIOFileHandleWithURL:(id)arg1 error:(id*)arg2;
- (id)newIOHandleWithURL:(id)arg1 compressionMethod:(long long)arg2 error:(id*)arg3;
- (id)newIOHandleWithURL:(id)arg1 compressionType:(long long)arg2 error:(id*)arg3;
- (id)newIOHandleWithURL:(id)arg1 error:(id*)arg2;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newLateEvalEvent;
- (id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (void)newLibraryWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newLibraryWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithDescriptorSPI:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newLibraryWithStitchedDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newLibraryWithStitchedDescriptor:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithStitchedDescriptorSPI:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithURL:(id)arg1 error:(id*)arg2;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id*)arg2;
- (id)newProfileWithExecutionSize:(unsigned long long)arg1;
- (id)newRasterizationRateMapWithDescriptor:(id)arg1;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newRenderPipelineStateWithMeshDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithMeshDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithMeshDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithMeshDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newSharedEvent;
- (id)newSharedEventWithHandle:(id)arg1;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;
- (id)newSharedTextureWithDescriptor:(id)arg1;
- (id)newSharedTextureWithHandle:(id)arg1;
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(bool)arg2;
- (id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(id /* block */)arg4;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (id)newUncachedIOFileHandleWithURL:(id)arg1 compressionMethod:(long long)arg2 error:(id*)arg3;
- (id)newUncachedIOFileHandleWithURL:(id)arg1 error:(id*)arg2;
- (id)newUncachedIOHandleWithURL:(id)arg1 compressionType:(long long)arg2 error:(id*)arg3;
- (id)newUncachedIOHandleWithURL:(id)arg1 error:(id*)arg2;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;
- (void)notifyExternalReferencesNonZeroOnDealloc:(id)arg1;
- (void)notifySamplerStateDeallocated:(id)arg1;
- (void)removeReferenceTrackingCommandBuffer:(id)arg1;
- (bool)storeValidationEnabled;
- (const struct MTLTargetDeviceArch { unsigned long long x1; unsigned int x2; char *x3; }*)targetDeviceInfo;
- (bool)validateDynamicLibrary:(id)arg1 state:(bool)arg2 error:(id*)arg3;
- (bool)validateDynamicLibraryURL:(id)arg1 error:(id*)arg2;
- (void)validateImageblockTypes:(id)arg1 reflection:(id)arg2 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg3;
- (void)validateLinkedFunctions:(id)arg1 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg2;
- (void)validateMemorylessResource:(id)arg1 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg2;
- (void)validateNewBufferArgs:(unsigned long long)arg1 options:(unsigned long long)arg2 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg3;
- (void)validateRaytracing;
- (void)validateResourceOptions:(unsigned long long)arg1 isTexture:(bool)arg2 isIOSurface:(bool)arg3 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg4;

@end
