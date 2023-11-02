
@interface _GEOFlyoverRegionVersionMap : NSObject {
    struct unordered_map<unsigned int, unsigned long, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { 
        struct __hash_table<std::__hash_value_type<unsigned int, unsigned long>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned long>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _regionToIndex;
    GEOFlyoverRegionVersions * _versions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateFlyoverRegions:(id /* block */)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithFlyoverRegions:(id)arg1;
- (struct GEOFlyoverRegion { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)regionForID:(unsigned int)arg1;

@end
