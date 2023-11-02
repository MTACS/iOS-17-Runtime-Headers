
@interface _UITraitTokenSet : NSObject <NSCopying, NSFastEnumeration> {
    NSArray * _cachedArrayRepresentation;
    struct unordered_set<unsigned long, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<unsigned long>> { 
        struct __hash_table<unsigned long, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<unsigned long>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long, void *> *>, std::allocator<std::__hash_node<unsigned long, void *>>> { 
                struct __hash_node_base<std::__hash_node<unsigned long, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<unsigned long>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<unsigned long>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _set;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
