
@interface ADEspressoRunnerV2 : NSObject <ADEspressoRunnerProtocol> {
    struct unordered_map<e5rt_surface_format_t, std::vector<unsigned int>, std::hash<e5rt_surface_format_t>, std::equal_to<e5rt_surface_format_t>, std::allocator<std::pair<const e5rt_surface_format_t, std::vector<unsigned int>>>> { 
        struct __hash_table<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, std::__unordered_map_hasher<e5rt_surface_format_t, std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, std::hash<e5rt_surface_format_t>, std::equal_to<e5rt_surface_format_t>>, std::__unordered_map_equal<e5rt_surface_format_t, std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, std::equal_to<e5rt_surface_format_t>, std::hash<e5rt_surface_format_t>>, std::allocator<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<e5rt_surface_format_t, std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, std::hash<e5rt_surface_format_t>, std::equal_to<e5rt_surface_format_t>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<e5rt_surface_format_t, std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, std::equal_to<e5rt_surface_format_t>, std::hash<e5rt_surface_format_t>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _acceptedBindFormats;
    struct unordered_map<e5rt_surface_format_t, std::vector<unsigned int>, std::hash<e5rt_surface_format_t>, std::equal_to<e5rt_surface_format_t>, std::allocator<std::pair<const e5rt_surface_format_t, std::vector<unsigned int>>>> { 
        struct __hash_table<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, std::__unordered_map_hasher<e5rt_surface_format_t, std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, std::hash<e5rt_surface_format_t>, std::equal_to<e5rt_surface_format_t>>, std::__unordered_map_equal<e5rt_surface_format_t, std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, std::equal_to<e5rt_surface_format_t>, std::hash<e5rt_surface_format_t>>, std::allocator<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<e5rt_surface_format_t, std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, std::hash<e5rt_surface_format_t>, std::equal_to<e5rt_surface_format_t>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<e5rt_surface_format_t, std::__hash_value_type<e5rt_surface_format_t, std::vector<unsigned int>>, std::equal_to<e5rt_surface_format_t>, std::hash<e5rt_surface_format_t>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _alternateBindFormats;
    NSPointerArray * _dummyOperations;
    struct e5rt_execution_stream { } * _dummyStream;
    NSString * _functionName;
    NSString * _networkVersionString;
    struct e5rt_execution_stream_operation { } * _operation;
    NSString * _path;
    struct e5rt_execution_stream { } * _stream;
}

@property (nonatomic, readonly) NSString *networkVersionString;
@property struct e5rt_execution_stream_operation { }*operation;
@property struct e5rt_execution_stream { }*stream;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buildBindFormatsMap;
- (bool)canBindFormat:(unsigned int)arg1 e5rtFormat:(int)arg2;
- (struct __CVBuffer { }*)createAndRegisterPixelBufferForDescriptor:(id)arg1;
- (void)dealloc;
- (long long)execute;
- (id)initWithPath:(id)arg1 forEngine:(unsigned long long)arg2 configurationName:(id)arg3;
- (id)networkVersionString;
- (struct e5rt_execution_stream_operation { }*)operation;
- (long long)prewireSurfaces:(id)arg1 toDescriptors:(id)arg2;
- (id)registerDescriptor:(id)arg1;
- (long long)registerIOSurface:(struct __IOSurface { }*)arg1 forDescriptor:(id)arg2;
- (long long)registerIOSurface:(struct __IOSurface { }*)arg1 forDescriptor:(id)arg2 usingOperation:(struct e5rt_execution_stream_operation { }*)arg3;
- (long long)registerIOSurface:(struct __IOSurface { }*)arg1 forSurfacePort:(struct e5rt_io_port {}**)arg2 surfaceDesc:(struct e5rt_surface_desc { }*)arg3;
- (long long)registerIOSurface:(struct __IOSurface { }*)arg1 forTensorPort:(struct e5rt_io_port {}**)arg2;
- (long long)registerPixelBuffer:(struct __CVBuffer { }*)arg1 forDescriptor:(id)arg2;
- (long long)registerPixelBufferPtr:(struct __CVBuffer {}**)arg1 forDescriptor:(id)arg2;
- (long long)registerPixelBufferPtr:(struct __CVBuffer {}**)arg1 forDescriptor:(id)arg2 forSurfacePort:(struct e5rt_io_port {}**)arg3;
- (long long)registerPixelBufferPtr:(struct __CVBuffer {}**)arg1 forDescriptor:(id)arg2 forTensorPort:(struct e5rt_io_port {}**)arg3;
- (long long)registerPixelBufferPtr:(struct __CVBuffer {}**)arg1 forDescriptor:(id)arg2 usingOperation:(struct e5rt_execution_stream_operation { }*)arg3;
- (struct e5rt_io_port { }*)retainPortForDescriptor:(id)arg1 usingOperation:(struct e5rt_execution_stream_operation { }*)arg2;
- (void)setOperation:(struct e5rt_execution_stream_operation { }*)arg1;
- (void)setStream:(struct e5rt_execution_stream { }*)arg1;
- (struct e5rt_execution_stream { }*)stream;
- (void)unwireAllSurfaces;
- (long long)updateFeedbackLoopInputBuffer:(struct __CVBuffer {}**)arg1 inputDescriptor:(id)arg2 outputBuffer:(struct __CVBuffer {}**)arg3 outputDescriptor:(id)arg4;

@end
