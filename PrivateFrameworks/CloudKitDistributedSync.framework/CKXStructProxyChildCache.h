
@interface CKXStructProxyChildCache : NSObject {
    CKXStructProxyBase * _proxy;
    struct unordered_map<unsigned long long, CKXProxyBase *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, CKXProxyBase *>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, CKXProxyBase *>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, CKXProxyBase *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, CKXProxyBase *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, CKXProxyBase *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, CKXProxyBase *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, CKXProxyBase *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  fieldToProxy;
}

@property (nonatomic, readonly) CKXStructProxyBase *proxy;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithProxy:(id)arg1;
- (id)proxy;
- (void)reset;
- (id)structListProxyForListReference:(unsigned long long)arg1 mutable:(bool)arg2;
- (id)structProxyForStructReference:(unsigned long long)arg1 mutable:(bool)arg2;

@end
