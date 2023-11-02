
@interface HDMHMostPrevalentDomainsBuilder : NSObject {
    struct unordered_map<long, _HDMHDomainCount *, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, _HDMHDomainCount *>>> { 
        struct __hash_table<std::__hash_value_type<long, _HDMHDomainCount *>, std::__unordered_map_hasher<long, std::__hash_value_type<long, _HDMHDomainCount *>, std::hash<long>, std::equal_to<long>>, std::__unordered_map_equal<long, std::__hash_value_type<long, _HDMHDomainCount *>, std::equal_to<long>, std::hash<long>>, std::allocator<std::__hash_value_type<long, _HDMHDomainCount *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, _HDMHDomainCount *>, std::hash<long>, std::equal_to<long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, _HDMHDomainCount *>, std::equal_to<long>, std::hash<long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pleasantCountsByDomain;
    long long  _totalCountPleasant;
    long long  _totalCountUnpleasant;
    struct unordered_map<long, _HDMHDomainCount *, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, _HDMHDomainCount *>>> { 
        struct __hash_table<std::__hash_value_type<long, _HDMHDomainCount *>, std::__unordered_map_hasher<long, std::__hash_value_type<long, _HDMHDomainCount *>, std::hash<long>, std::equal_to<long>>, std::__unordered_map_equal<long, std::__hash_value_type<long, _HDMHDomainCount *>, std::equal_to<long>, std::hash<long>>, std::allocator<std::__hash_value_type<long, _HDMHDomainCount *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, _HDMHDomainCount *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, _HDMHDomainCount *>, std::hash<long>, std::equal_to<long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, _HDMHDomainCount *>, std::equal_to<long>, std::hash<long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _unpleasantCountsByDomain;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addStateOfMind:(id)arg1 toMap:(void*)arg2;
- (id)_winningSummaryForPleasant:(bool)arg1;
- (void)addStateOfMind:(id)arg1;
- (id)mostPrevalentPleasantDomains;
- (id)mostPrevalentUnpleasantDomains;

@end
