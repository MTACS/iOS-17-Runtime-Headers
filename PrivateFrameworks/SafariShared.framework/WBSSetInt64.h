
@interface WBSSetInt64 : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { 
        struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *>, std::allocator<std::__hash_node<long long, void *>>> { 
                struct __hash_node_base<std::__hash_node<long long, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<long long>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<long long>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _set;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) const void*set;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)commaSeparatedValues;
- (bool)contains:(long long)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInt64:(long long)arg1;
- (id)initWithMovableSet:(void*)arg1;
- (id)initWithSet:(const void*)arg1;
- (const void*)set;

@end
