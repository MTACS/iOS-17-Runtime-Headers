
@interface DYMTLShaderDebuggerTraceGenerator : NSObject {
    struct unordered_map<unsigned long, id<MTLBuffer>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, id<MTLBuffer>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long, id<MTLBuffer>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, id<MTLBuffer>>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, id<MTLBuffer>>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, id<MTLBuffer>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, id<MTLBuffer>>, std::hash<unsigned long>, std::equal_to<unsigned long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, id<MTLBuffer>>, std::equal_to<unsigned long>, std::hash<unsigned long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _bytesBufferReplacements;
    NSDictionary * _constantSamplerReflection;
    <MTLBuffer> * _dummyArgumentBuffer;
    <MTLArgumentEncoder> * _dummyArgumentEncoder;
    NSString * _errorStr;
    DYMTLIndirectArgumentBufferManager * _indirectArgumentManager;
    NSData * _metadata;
    NSString * _onlineSrc;
    <MTLBuffer> * _placeholderBuffer;
    <MTLSamplerState> * _placeholderSamplerState;
    <MTLTexture> * _placeholderTexture;
    struct map<MTLTextureType, id<MTLTexture>, std::less<MTLTextureType>, std::allocator<std::pair<const MTLTextureType, id<MTLTexture>>>> { 
        struct __tree<std::__value_type<MTLTextureType, id<MTLTexture>>, std::__map_value_compare<MTLTextureType, std::__value_type<MTLTextureType, id<MTLTexture>>, std::less<MTLTextureType>>, std::allocator<std::__value_type<MTLTextureType, id<MTLTexture>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MTLTextureType, id<MTLTexture>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<MTLTextureType, std::__value_type<MTLTextureType, id<MTLTexture>>, std::less<MTLTextureType>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _placeholderTextures;
    DYMTLCommonDebugFunctionPlayer * _player;
    struct map<id<MTLSamplerState>, unsigned long long, std::less<id<MTLSamplerState>>, std::allocator<std::pair<const id<MTLSamplerState>, unsigned long long>>> { 
        struct __tree<std::__value_type<id<MTLSamplerState>, unsigned long long>, std::__map_value_compare<id<MTLSamplerState>, std::__value_type<id<MTLSamplerState>, unsigned long long>, std::less<id<MTLSamplerState>>>, std::allocator<std::__value_type<id<MTLSamplerState>, unsigned long long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<id<MTLSamplerState>, unsigned long long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<id<MTLSamplerState>, std::__value_type<id<MTLSamplerState>, unsigned long long>, std::less<id<MTLSamplerState>>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _replacedSamplerStates;
    <MTLBuffer> * _traceBuffer;
    unsigned long long  _traceBufferVersion;
    int  _traceType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_createAndSetInstrumentedComputePipelineStateWithDescriptor:(id)arg1 computeCommandEncoder:(id)arg2;
- (bool)_createAndSetInstrumentedRenderPipelineStateWithDescriptor:(id)arg1 renderCommandEncoder:(id)arg2 roiType:(int)arg3;
- (bool)_createAndSetInstrumentedTileRenderPipelineStateWithDescriptor:(id)arg1 renderCommandEncoder:(id)arg2;
- (id)_createInstrumentedFunctionWithInstrumentedLibrary:(id)arg1 originalFunction:(id)arg2;
- (bool)_createTraceBufferWithGenerationOptions:(id)arg1;
- (bool)_fragmentBindingNeedsPlaceholderResource:(id)arg1 renderCommandEncoder:(id)arg2;
- (id)_generateConstantSamplerReflectionWithUniqueIdentifiers:(id)arg1 descriptors:(id)arg2;
- (id)_generateResourceResolutionRemappingTables;
- (id)_instrumentLibrary:(id)arg1 generationOptions:(id)arg2;
- (bool)_kernelBindingNeedsPlaceholderResource:(id)arg1 computeCommandEncoder:(id)arg2;
- (id)_placeholderTextureWithType:(unsigned long long)arg1;
- (bool)_prepareComputeCommandEncoder:(id)arg1 generationOptions:(id)arg2;
- (bool)_prepareRenderCommandEncoder:(id)arg1 generationOptions:(id)arg2;
- (bool)_prepareTraceBufferWithGenerationOptions:(id)arg1;
- (bool)_tileBindingNeedsPlaceholderResource:(id)arg1 renderCommandEncoder:(id)arg2;
- (bool)_vertexBindingNeedsPlaceholderResource:(id)arg1 renderCommandEncoder:(id)arg2;
- (id)initWithDebugFunctionPlayer:(id)arg1;
- (id)notifyReplayFinishedAndGenerateTraceContainer;
- (void)prepareCommandEncoderForInstrumentedCall:(unsigned long long)arg1 generationOptions:(id)arg2;

@end
