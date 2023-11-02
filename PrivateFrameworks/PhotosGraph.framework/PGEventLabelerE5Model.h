
@interface PGEventLabelerE5Model : NSObject {
    struct shared_ptr<E5RT::ExecutionStreamOperation> { 
        struct ExecutionStreamOperation {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _esop;
    struct unordered_map<std::string, std::shared_ptr<E5RT::BufferObject>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<E5RT::BufferObject>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _inputBufferByName;
    struct unordered_map<std::string, std::shared_ptr<E5RT::IOPort>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<E5RT::IOPort>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _inputPortByName;
    struct unordered_map<std::string, std::shared_ptr<E5RT::IOPort>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<E5RT::IOPort>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::IOPort>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _outputPortByName;
    struct unique_ptr<E5RT::ExecutionStream, std::default_delete<E5RT::ExecutionStream>> { 
        struct __compressed_pair<E5RT::ExecutionStream *, std::default_delete<E5RT::ExecutionStream>> { 
            struct ExecutionStream {} *__value_; 
        } __ptr_; 
    }  _stream;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_areFeaturesValidForFeatures:(id)arg1 error:(id*)arg2;
- (id)computeWithFeatures:(id)arg1 error:(id*)arg2;
- (id)initWithFilePath:(id)arg1 error:(id*)arg2;
- (id)inputNamesWithError:(id*)arg1;
- (id)inputSizeByNameWithError:(id*)arg1;

@end
