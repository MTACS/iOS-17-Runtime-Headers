
@interface DYMTLIndirectCommandBufferManager : NSObject <DYMTLIndirectCommandBufferTranslateDelegate> {
    struct unordered_map<unsigned long long, unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long long>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, unsigned long long>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, unsigned long long>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _computePipelineStateUniqueIdentifier;
    struct vector<GPUTools::MTL::Utils::DYMTLBufferGPUAddress, std::allocator<GPUTools::MTL::Utils::DYMTLBufferGPUAddress>> { 
        struct DYMTLBufferGPUAddress {} *__begin_; 
        struct DYMTLBufferGPUAddress {} *__end_; 
        struct __compressed_pair<GPUTools::MTL::Utils::DYMTLBufferGPUAddress *, std::allocator<GPUTools::MTL::Utils::DYMTLBufferGPUAddress>> { 
            struct DYMTLBufferGPUAddress {} *__value_; 
        } __end_cap_; 
    }  _gpuVirtualAddressArray;
    struct unordered_map<unsigned long long, unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long long>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, unsigned long long>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, unsigned long long>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _gpuVirtualAddressMap;
    DYMTLFunctionPlayer * _player;
    bool  _recalculateVirtualAddress;
    struct unordered_map<unsigned long long, unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long long>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, unsigned long long>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, unsigned long long>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _renderPipelineStateUniqueIdentifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_calculateGPUVirtualAddress;
- (void)addComputePipelineStateUniqueIdentifier:(unsigned long long)arg1 forObjectId:(unsigned long long)arg2;
- (void)addGPUVirtualAddress:(unsigned long long)arg1 forObjectId:(unsigned long long)arg2;
- (void)addRenderPipelineStateUniqueIdentifier:(unsigned long long)arg1 forObjectId:(unsigned long long)arg2;
- (struct pair<unsigned long long, unsigned long long> { unsigned long long x1; unsigned long long x2; })bufferIdAndOffsetForGPUVirtualAddress:(unsigned long long)arg1;
- (unsigned long long)computePipelineIdForUniqueIdentifier:(unsigned long long)arg1;
- (id)convertIndirectCommandBufferData:(const char *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 toFBufStream:(const struct CoreFunction { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; union { unsigned long long x_5_1_1; unsigned long long x_5_1_2; } x5; struct Argument { void *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned short x_6_1_5; unsigned short x_6_1_6; } x6; struct Argument { void *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned short x_7_1_5; unsigned short x_7_1_6; } x7[16]; unsigned int x8; unsigned int x9; void *x10; void *x11; }*)arg3;
- (void)executeIndirectComputeCommand:(id)arg1 withData:(const char *)arg2 atIndex:(unsigned long long)arg3 forIndirectCommandBuffer:(id)arg4;
- (void)executeIndirectRenderCommand:(id)arg1 withData:(const char *)arg2 atIndex:(unsigned long long)arg3 forIndirectCommandBuffer:(id)arg4;
- (unsigned int)executeIndirectRenderCommands:(id)arg1 withData:(const char *)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 forIndirectCommandBuffer:(id)arg4;
- (id)initWithFunctionPlayer:(id)arg1;
- (unsigned long long)renderPipelineIdForUniqueIdentifier:(unsigned long long)arg1;
- (void)restoreBuffer:(id)arg1 optimizedRanges:(const char *)arg2 commandQueue:(id)arg3;
- (void)restoreBuffer:(id)arg1 withData:(const char *)arg2 commandQueue:(id)arg3;
- (id)saveComputeEncoder:(id)arg1 withDescriptor:(id)arg2;
- (id)saveRenderEncoder:(id)arg1 withDescriptor:(id)arg2;
- (unsigned long long)setupComputeCommandEncoder:(id)arg1 withData:(const char *)arg2 atIndex:(unsigned long long)arg3 forIndirectCommandBuffer:(id)arg4;
- (unsigned long long)setupRenderCommandEncoder:(id)arg1 withData:(const char *)arg2 atIndex:(unsigned long long)arg3 forIndirectCommandBuffer:(id)arg4;
- (void)updateReplayerTranslationBuffer;

@end
