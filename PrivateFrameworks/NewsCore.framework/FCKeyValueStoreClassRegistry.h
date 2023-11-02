
@interface FCKeyValueStoreClassRegistry : NSObject {
    struct unordered_map<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>, std::allocator<std::pair<const NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> { 
        struct __hash_table<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>>, std::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::equal_to<NTPBKeyValuePair_ValueType>, std::hash<int>>, std::allocator<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::equal_to<NTPBKeyValuePair_ValueType>, std::hash<int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _registry;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (Class)classForValueType:(int)arg1;
- (id)init;
- (void)registerClass:(Class)arg1;

@end
