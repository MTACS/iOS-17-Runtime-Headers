
@interface ADImageDescriptor : NSObject {
    unsigned int  _pixelFormat;
    struct unordered_map<ADLayout, CGSize, std::hash<ADLayout>, std::equal_to<ADLayout>, std::allocator<std::pair<const ADLayout, CGSize>>> { 
        struct __hash_table<std::__hash_value_type<ADLayout, CGSize>, std::__unordered_map_hasher<ADLayout, std::__hash_value_type<ADLayout, CGSize>, std::hash<ADLayout>, std::equal_to<ADLayout>>, std::__unordered_map_equal<ADLayout, std::__hash_value_type<ADLayout, CGSize>, std::equal_to<ADLayout>, std::hash<ADLayout>>, std::allocator<std::__hash_value_type<ADLayout, CGSize>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<ADLayout, std::__hash_value_type<ADLayout, CGSize>, std::hash<ADLayout>, std::equal_to<ADLayout>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<ADLayout, std::__hash_value_type<ADLayout, CGSize>, std::equal_to<ADLayout>, std::hash<ADLayout>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _sizeForLayout;
}

@property (nonatomic, readonly) unsigned int pixelFormat;

+ (id)descriptorForSupportedSizes:(id)arg1 pixelFormat:(unsigned int)arg2;
+ (id)descriptorWithDefaultSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned int)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cloneWithDifferentFormat:(unsigned int)arg1;
- (id)initWithSupportedSizes:(id)arg1 pixelFormat:(unsigned int)arg2;
- (unsigned long long)layoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned int)pixelFormat;
- (struct CGSize { double x1; double x2; })sizeForLayout:(unsigned long long)arg1;
- (bool)supportsLayout:(unsigned long long)arg1;

@end
