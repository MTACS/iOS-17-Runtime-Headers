
@interface ADEspressoRunnerV1 : NSObject <ADEspressoRunnerProtocol> {
    bool  _CPUBindWA;
    void * _ctx;
    int  _engineType;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    struct unordered_map<std::string, PixelBufferSharedPtr, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, PixelBufferSharedPtr>>> { 
        struct __hash_table<std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, PixelBufferSharedPtr>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pixelBuffersToBindAsEspressoBufferInput;
    struct unordered_map<std::string, PixelBufferSharedPtr, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, PixelBufferSharedPtr>>> { 
        struct __hash_table<std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, PixelBufferSharedPtr>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pixelBuffersToBindAsEspressoBufferOutput;
    struct unordered_map<std::string, PixelBufferSharedPtr, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, PixelBufferSharedPtr>>> { 
        struct __hash_table<std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, PixelBufferSharedPtr>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pixelBuffersToBindAsVImage;
    struct unordered_map<std::string, PixelBufferSharedPtr, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, PixelBufferSharedPtr>>> { 
        struct __hash_table<std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, PixelBufferSharedPtr>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pixelBuffersToBindDirect;
    struct unordered_map<std::string, PixelBufferSharedPtr, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, PixelBufferSharedPtr>>> { 
        struct __hash_table<std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, PixelBufferSharedPtr>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, PixelBufferSharedPtr>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, PixelBufferSharedPtr>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pixelBuffersToBindIndirect;
    void * _plan;
    int  _storageType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)bindPixelBufferAsVImage:(struct __CVBuffer { }*)arg1 toBlob:(const char *)arg2;
- (struct __CVBuffer { }*)createAndRegisterPixelBufferForDescriptor:(id)arg1;
- (void)dealloc;
- (long long)execute;
- (id)initWithPath:(id)arg1 forEngine:(unsigned long long)arg2 configurationName:(id)arg3;
- (bool)isCVPixelBufferBindingSupportedForFormat:(unsigned int)arg1;
- (bool)isDirectBindingSupportedForFormat:(unsigned int)arg1;
- (bool)isVImageBindingSupportedForFormat:(unsigned int)arg1;
- (id)networkVersionString;
- (id)registerDescriptor:(id)arg1;
- (long long)registerIOSurface:(struct __IOSurface { }*)arg1 forDescriptor:(id)arg2;
- (long long)registerPixelBuffer:(struct __CVBuffer { }*)arg1 forDescriptor:(id)arg2;
- (long long)registerPixelBufferPtr:(struct __CVBuffer {}**)arg1 forDescriptor:(id)arg2;
- (void)unlockAllVImageBindBuffers;
- (long long)updateFeedbackLoopInputBuffer:(struct __CVBuffer {}**)arg1 inputDescriptor:(id)arg2 outputBuffer:(struct __CVBuffer {}**)arg3 outputDescriptor:(id)arg4;

@end
