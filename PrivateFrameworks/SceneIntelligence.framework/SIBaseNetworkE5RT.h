
@interface SIBaseNetworkE5RT : NSObject <SINetworkProtocol> {
    SINetworkConfiguration * _configuration;
    NSString * _e5Path;
    struct unordered_map<std::string, e5rt_execution_stream_operation *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, e5rt_execution_stream_operation *>>> { 
        struct __hash_table<std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, e5rt_execution_stream_operation *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, e5rt_execution_stream_operation *>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _e5rt_loaded_operations;
    NSString * _enabled_e5rt_function_name;
    struct e5rt_execution_stream_operation { } * _enabled_e5rt_operation;
    struct e5rt_execution_stream { } * _initPrewiringStream;
    struct unordered_map<std::string, SIE5RTPort *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, SIE5RTPort *>>> { 
        struct __hash_table<std::__hash_value_type<std::string, SIE5RTPort *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, SIE5RTPort *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _inputs;
    struct unordered_map<std::string, std::unordered_map<std::string, SIE5RTPort *>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_map<std::string, SIE5RTPort *>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _inputsForOperations;
    NSString * _networkVersion;
    NSString * _network_name;
    NSArray * _opsForLibrary;
    struct unordered_map<std::string, SIE5RTPort *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, SIE5RTPort *>>> { 
        struct __hash_table<std::__hash_value_type<std::string, SIE5RTPort *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, SIE5RTPort *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _outputs;
    struct unordered_map<std::string, std::unordered_map<std::string, SIE5RTPort *>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_map<std::string, SIE5RTPort *>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, SIE5RTPort *>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _outputsForOperations;
    struct unordered_map<std::string, PrewiredFunctionInfo, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, PrewiredFunctionInfo>>> { 
        struct __hash_table<std::__hash_value_type<std::string, PrewiredFunctionInfo>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PrewiredFunctionInfo>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PrewiredFunctionInfo>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, PrewiredFunctionInfo>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PrewiredFunctionInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PrewiredFunctionInfo>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PrewiredFunctionInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PrewiredFunctionInfo>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PrewiredFunctionInfo>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PrewiredFunctionInfo>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PrewiredFunctionInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, PrewiredFunctionInfo>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PrewiredFunctionInfo>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PrewiredFunctionInfo>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PrewiredFunctionInfo>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _prewiredFunctionTable;
    struct e5rt_execution_stream { } * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)IsPrewiringEnabled;
- (bool)IsSurfacePrewiredForCurrentFunctionForBlob:(id)arg1 surfaceID:(int)arg2;
- (void)_setupMetaDataFromLibrary;
- (void)addPrewiringBuffersToStreamForFunctionName:(id)arg1 inputPools:(id)arg2 outputPools:(id)arg3 clearWiredBuffer:(bool)arg4;
- (void)dealloc;
- (unsigned long long)getInputChannels:(id)arg1;
- (unsigned long long)getInputHeight:(id)arg1;
- (unsigned long long)getInputLength:(id)arg1;
- (void*)getInputPtr:(id)arg1;
- (unsigned long long)getInputWidth:(id)arg1;
- (id)getOpsForLibrary;
- (unsigned long long)getOutputBatchNum:(id)arg1;
- (unsigned long long)getOutputBytePerRow:(id)arg1;
- (unsigned long long)getOutputChannels:(id)arg1;
- (unsigned long long)getOutputComponentSize:(id)arg1;
- (unsigned long long)getOutputHeight:(id)arg1;
- (unsigned long long)getOutputLength:(id)arg1;
- (unsigned long long)getOutputRowElements:(id)arg1;
- (void)getOutputShape:(id)arg1;
- (unsigned long long)getOutputWidth:(id)arg1;
- (void*)getRawOutput:(id)arg1;
- (id)initWithNetName:(id)arg1;
- (id)initWithNetPath:(id)arg1;
- (id)initWithNetworkConfiguration:(id)arg1;
- (id)networkVersion;
- (bool)outputExists:(id)arg1;
- (bool)prepare;
- (void)reset;
- (bool)runNetwork;
- (bool)selectComputeOperationByFunctionName:(id)arg1;
- (bool)setInput:(id)arg1 fromCVPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)setInput:(id)arg1 fromRawPointer:(const void*)arg2;
- (bool)setOutputBlob:(id)arg1 forOutputSurface:(struct __IOSurface { }*)arg2;
- (bool)supportFloat16IO;
- (bool)supportZeroCopyOutput;
- (bool)switchConfiguration:(id)arg1;
- (void)unwirePrewiringBuffers;
- (void)unwirePrewiringBuffersForFunctionName:(id)arg1;

@end
