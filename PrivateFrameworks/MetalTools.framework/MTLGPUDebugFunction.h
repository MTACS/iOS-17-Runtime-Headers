
@interface MTLGPUDebugFunction : MTLToolsFunction {
    struct unordered_map<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _argumentLayouts;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _argumentLayoutsMutex;
    MTLGPUDebugImageData * data;
}

+ (id)convertUserType:(id)arg1;
+ (id)internalArrayTypeFromUserArrayType:(id)arg1;
+ (id)internalStructTypeFromUserStructType:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_initImageData;
- (void)dealloc;
- (id)initWithFunction:(id)arg1 library:(id)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3 binaryArchives:(id)arg4;
- (void)prepareForBinaryFunctionUsage;
- (void)prepareForComputePipelineUsage;
- (void)prepareForRenderPipelineUsage;

@end
