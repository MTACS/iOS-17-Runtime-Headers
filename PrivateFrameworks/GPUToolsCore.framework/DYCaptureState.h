
@interface DYCaptureState : NSObject {
    bool  _allDataReceivedAck;
    unsigned long long  _capturedFrames;
    struct unordered_map<const void *, std::string, std::hash<const void *>, std::equal_to<const void *>, std::allocator<std::pair<const void *const, std::string>>> { 
        struct __hash_table<std::__hash_value_type<const void *, std::string>, std::__unordered_map_hasher<const void *, std::__hash_value_type<const void *, std::string>, std::hash<const void *>, std::equal_to<const void *>>, std::__unordered_map_equal<const void *, std::__hash_value_type<const void *, std::string>, std::equal_to<const void *>, std::hash<const void *>>, std::allocator<std::__hash_value_type<const void *, std::string>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const void *, std::__hash_value_type<const void *, std::string>, std::hash<const void *>, std::equal_to<const void *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<const void *, std::__hash_value_type<const void *, std::string>, std::equal_to<const void *>, std::hash<const void *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _dispatchQueueLabelMap;
    struct unordered_map<unsigned long long, std::string, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::string>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, std::string>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::string>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::string>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::string>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::string>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::string>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _threadLabelMap;
}

@property (nonatomic) bool allDataReceivedAck;
@property (nonatomic) unsigned long long capturedFrames;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{unordered_map<const void *' */ struct  dispatchQueueLabelMap; /* unknown property attribute:  std::hash<const void *>>>=f}}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{unordered_map<unsigned long long' */ struct  threadLabelMap; /* unknown property attribute:  std::hash<unsigned long long>>>=f}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allDataReceivedAck;
- (unsigned long long)capturedFrames;
- (struct unordered_map<const void *, std::string, std::hash<const void *>, std::equal_to<const void *>, std::allocator<std::pair<const void *const, std::string>>> { struct __hash_table<std::__hash_value_type<const void *, std::string>, std::__unordered_map_hasher<const void *, std::__hash_value_type<const void *, std::string>, std::hash<const void *>, std::equal_to<const void *>>, std::__unordered_map_equal<const void *, std::__hash_value_type<const void *, std::string>, std::equal_to<const void *>, std::hash<const void *>>, std::allocator<std::__hash_value_type<const void *, std::string>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const void *, std::string>, void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })dispatchQueueLabelMap;
- (void)setAllDataReceivedAck:(bool)arg1;
- (void)setCapturedFrames:(unsigned long long)arg1;
- (struct unordered_map<unsigned long long, std::string, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::string>>> { struct __hash_table<std::__hash_value_type<unsigned long long, std::string>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::string>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::string>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::string>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::string>, void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })threadLabelMap;

@end
