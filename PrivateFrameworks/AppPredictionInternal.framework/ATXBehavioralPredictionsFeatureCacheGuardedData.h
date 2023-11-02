
@interface ATXBehavioralPredictionsFeatureCacheGuardedData : NSObject {
    struct unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::allocator<std::pair<NSString *const, ATXPredictionItem>>> { 
        struct __hash_table<std::__hash_value_type<NSString *, ATXPredictionItem>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, ATXNSStringEqual>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, ATXNSStringHash>, std::allocator<std::__hash_value_type<NSString *, ATXPredictionItem>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, ATXNSStringEqual>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, ATXNSStringHash>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  cache;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
