
@interface MTLGPUDebugDevice : MTLToolsDevice {
    <MTLComputePipelineState> * _accelerationStructureComputePipelineState;
    NSMutableArray * _argumentDescriptors;
    NSData * _boundsCheckOptionsData;
    struct once_flag { 
        unsigned long long __state_; 
    }  _deviceInitFlag;
    <MTLDepthStencilState> * _icbDepthStencilState;
    <MTLComputePipelineState> * _icbInheritBothComputePipelineState;
    <MTLComputePipelineState> * _icbInheritBuffersComputePipelineState;
    <MTLRenderPipelineState> * _icbInheritBuffersVertexPipelineState;
    <MTLComputePipelineState> * _icbInheritComputePipelineState;
    <MTLComputePipelineState> * _icbInheritNoneComputePipelineState;
    <MTLRenderPipelineState> * _icbInheritNoneVertexPipelineState;
    <MTLRenderPipelineState> * _icbInheritVertexPipelineState;
    struct once_flag { 
        unsigned long long __state_; 
    }  _icbPipelineInit;
    struct Options { 
        unsigned int version; 
        int mode; 
        int accessTypes; 
        int failMode; 
        unsigned int maxTrackedResourcesMultiplier; 
        struct { 
            unsigned int enableReporting : 1; 
            unsigned int packPointerAddresses : 1; 
            unsigned int unpackPointerAddress : 1; 
            unsigned int forceInline : 1; 
            unsigned int enableBacktracking : 1; 
            unsigned int optimizeConstantDeref : 1; 
            unsigned int skipVertexFetchLoads : 1; 
            unsigned int enableGEPOptimization : 1; 
            unsigned int enableRuntimeStacktrace : 1; 
            unsigned int emitBoundsChecking : 1; 
            unsigned int runStandardOptimizations : 1; 
            unsigned int backtrackFailuresAssumeSafe : 1; 
            unsigned int pageDataIs32bitLength : 1; 
            unsigned int forceUnrollLoops : 1; 
            unsigned int mergeAccessChecks : 1; 
            unsigned int convertToAB : 1; 
            unsigned int arraysOfBuffersAB : 1; 
            unsigned int noInlineTrivialFunctions : 1; 
            unsigned int unrollMemCpyWA : 1; 
            unsigned int checkGlobalConstants : 1; 
            unsigned int enableTextureChecks : 1; 
            unsigned int demoteGlobalConstantsToArg : 1; 
            unsigned int argumentPointerIndirection : 1; 
            unsigned int enableThreadgroupMemoryChecks : 1; 
            unsigned int mergeThreadgroupGlobals : 1; 
            unsigned int mergeThreadgroupArguments : 1; 
            unsigned int tagThreadgroupPointers : 1; 
            unsigned int enableJumpThreading : 1; 
            unsigned int enableICBSupport : 1; 
            unsigned int enableGlobalRelocations : 1; 
            unsigned int enableTrapReporting : 1; 
            unsigned int enableRaytracing : 1; 
            unsigned int enableResourceUsageValidation : 1; 
            unsigned int enableStackOverflow : 1; 
            unsigned int enableDumpToStderr : 1; 
        } ; 
    }  boundsCheckOptions;
    struct MetalBufferHeap { 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } _mutex; 
        /* Warning: unhandled struct encoding: '{vector<id<MTLBuffer>, std::allocator<id<MTLBuffer>>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<id<MTLBuffer> *, std::allocator<id<MTLBuffer>>>="__value_"^@}}"_freeList"{vector<unsigned int, std::allocator<unsigned int>>="__begin_"^I"__end_"^I"__end_cap_"{__compressed_pair<unsigned int *, std::allocator<unsigned int>>="__value_"^I}}"_currentFreeIndex"i"_totalMemoryAllocated"Q"_totalMemoryInUse"Q"_bufferLength"Q"_device"@"MTLGPUDebugDevice"}' */ struct vector<id<MTLBuffer>, std::allocator<id<MTLBuffer>>> { 
            __end_ **__begin_; 
        } _buffers; 
    }  bufferHeap;
    struct GPUDebugConstantBufferCache { 
        unsigned long long _totalUsedMemory; 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } _accessMutex; 
        struct unordered_map<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>, std::allocator<std::pair<const GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>>> { 
            struct __hash_table<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::__unordered_map_hasher<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>>, std::__unordered_map_equal<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::equal_to<GPUDebugConstantBufferCache::Key>, GPUDebugConstantBufferCache::Key::Hash>, std::allocator<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::equal_to<GPUDebugConstantBufferCache::Key>, GPUDebugConstantBufferCache::Key::Hash>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _cache; 
        MTLGPUDebugDevice *_device; 
    }  constantBufferCache;
    struct GPUDebugDeviceOptions { 
        unsigned int retainReflection : 1; 
        unsigned int retainPSOFunctions : 1; 
        unsigned int abortOnFault : 1; 
    }  deviceOptions;
    struct GPUDebugBufferDescriptorHeap { 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } s; 
        struct vector<unsigned int, std::allocator<unsigned int>> { 
            unsigned int *__begin_; 
            unsigned int *__end_; 
            struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
                unsigned int *__value_; 
            } __end_cap_; 
        } _freeIndexList; 
        /* Warning: unhandled struct encoding: '{vector<MTLGPUDebugBuffer *, std::allocator<MTLGPUDebugBuffer *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<MTLGPUDebugBuffer **, std::allocator<MTLGPUDebugBuffer *>>="__value_"^@}}"_freeIndex"Q"_argumentEncoder"@"<MTLArgumentEncoder>""_descriptorHeap"@"<MTLBuffer>"}' */ struct vector<MTLGPUDebugBuffer *, std::allocator<MTLGPUDebugBuffer *>> { 
            __end_ **__begin_; 
        } _bufferList; 
    }  globalBufferHeap;
    struct GlobalResidentBufferList { 
        unsigned int _iteration; 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } _accessMutex; 
        struct list<id<MTLBuffer>, std::allocator<id<MTLBuffer>>> { 
            struct __list_node_base<id<MTLBuffer>, void *> { 
                void *__prev_; 
                void *__next_; 
            } __end_; 
            struct __compressed_pair<unsigned long, std::allocator<std::__list_node<id<MTLBuffer>, void *>>> { 
                unsigned long long __value_; 
            } __size_alloc_; 
        } _bufferList; 
    }  globalICBBufferResidentList;
    <MTLBuffer> * uncheckedBuffer;
}

@property (nonatomic, readonly) <MTLDepthStencilState> *ICB_DepthStencilState;
@property (nonatomic, readonly) <MTLComputePipelineState> *ICB_Inherit_Both_ComputePipelineState;
@property (nonatomic, readonly) <MTLComputePipelineState> *ICB_Inherit_Buffers_ComputePipelineState;
@property (nonatomic, readonly) <MTLRenderPipelineState> *ICB_Inherit_Buffers_VertexPipelineState;
@property (nonatomic, readonly) <MTLComputePipelineState> *ICB_Inherit_None_ComputePipelineState;
@property (nonatomic, readonly) <MTLRenderPipelineState> *ICB_Inherit_None_VertexPipelineState;
@property (nonatomic, readonly) <MTLComputePipelineState> *ICB_Inherit_PSO_ComputePipelineState;
@property (nonatomic, readonly) <MTLRenderPipelineState> *ICB_Inherit_PSO_VertexPipelineState;
@property (nonatomic, readonly) <MTLComputePipelineState> *accelerationStructureComputePipelineState;
@property (nonatomic, readonly) bool supportsResourceUsageValidation;

// Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)ICB_DepthStencilState;
- (id)ICB_Inherit_Both_ComputePipelineState;
- (id)ICB_Inherit_Buffers_ComputePipelineState;
- (id)ICB_Inherit_Buffers_VertexPipelineState;
- (id)ICB_Inherit_None_ComputePipelineState;
- (id)ICB_Inherit_None_VertexPipelineState;
- (id)ICB_Inherit_PSO_ComputePipelineState;
- (id)ICB_Inherit_PSO_VertexPipelineState;
- (void)_modifyCompileOptions:(unsigned long long*)arg1;
- (id)_modifyComputePipelineDescriptor:(id)arg1;
- (void)_modifyMeshRenderPipelineDescriptor:(id)arg1;
- (id)_modifyRenderPipelineDescriptor:(id)arg1;
- (id)_modifyTilePipelineDescriptor:(id)arg1;
- (void)_prepareBinaryLinkedFunctions:(id)arg1;
- (void)_prepareInsertLibraries:(id)arg1;
- (id)accelerationStructureComputePipelineState;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })accelerationStructureSizesWithDescriptor:(id)arg1;
- (void)dealloc;
- (id)deserializeInstanceAccelerationStructureFromBytes:(void*)arg1 primitiveAccelerationStructures:(id)arg2 withDescriptor:(id)arg3;
- (id)deserializePrimitiveAccelerationStructureFromBytes:(void*)arg1 withDescriptor:(id)arg2;
- (id)getDynamicLibraryForBaseObject:(id)arg1;
- (id)getFunctionForBaseObject:(id)arg1 library:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 error:(id*)arg2;
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 error:(id*)arg3;
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)modifyFunctionDescriptor:(id)arg1;
- (id)newAccelerationStructureWithBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (id)newAccelerationStructureWithBuffer:(id)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (id)newAccelerationStructureWithDescriptor:(id)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 withDescriptor:(id)arg2;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newArgumentEncoderWithArguments:(id)arg1 structType:(id*)arg2;
- (id)newArgumentEncoderWithBufferBinding:(id)arg1;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id*)arg3;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(id /* block */)arg4;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4 deallocator:(id /* block */)arg5;
- (id)newBufferWithDescriptor:(id)arg1;
- (id)newBufferWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 gpuAddress:(unsigned long long)arg3;
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
- (id)newDagStringWithGraphs:(id)arg1;
- (id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id*)arg3;
- (id)newDynamicLibraryFromURL:(id)arg1 error:(id*)arg2;
- (id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newInternalBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (void)newLibraryWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newLibraryWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithDescriptorSPI:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newLibraryWithStitchedDescriptorSPI:(id)arg1 error:(id*)arg2;
- (id)newModifyPluginData:(id)arg1;
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
- (id)newSharedTextureWithDescriptor:(id)arg1;
- (id)newSharedTextureWithHandle:(id)arg1;
- (id)newStageArgumentBuffer;
- (id)newStageBufferArgumentEncoder;
- (id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(id /* block */)arg4;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;
- (void)onComputePipelineCreated:(id)arg1;
- (void)onRenderPipelineCreated:(id)arg1;
- (bool)supportsArgumentBuffersTier2;
- (bool)supportsCMPIndirectCommandBuffers;
- (bool)supportsForkJoin;
- (bool)supportsFunctionPointersFromRender;
- (bool)supportsGFXIndirectCommandBuffers;
- (bool)supportsRayTracingPerPrimitiveData;
- (bool)supportsRaytracing;
- (bool)supportsRaytracingFromRender;
- (bool)supportsRenderDynamicLibraries;
- (bool)supportsResourceUsageValidation;
- (bool)supportsSharedFunctionTables;
- (bool)supportsStackOverflowErrorCode;
- (id)unwrapAndModifyComputePipelineDescriptor:(id*)arg1 options:(unsigned long long*)arg2;
- (id)unwrapAndModifyMeshRenderPipelineDescriptor:(id)arg1 options:(unsigned long long*)arg2;
- (id)unwrapAndModifyRenderPipelineDescriptor:(id*)arg1 options:(unsigned long long*)arg2;
- (id)unwrapAndModifyTileRenderPipelineDescriptor:(id*)arg1 options:(unsigned long long*)arg2;
- (id)unwrapStitchedLibraryDescriptor:(id)arg1;
- (void)validateRaytracing;

// Image: /System/Library/PrivateFrameworks/GPUToolsDiagnostics.framework/GPUToolsDiagnostics

- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2;
- (id)newDynamicLibrary:(id)arg1 error:(id*)arg2;
- (id)newDynamicLibraryWithURL:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newLibraryWithStitchedDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newLibraryWithStitchedDescriptor:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithURL:(id)arg1 error:(id*)arg2;

@end
