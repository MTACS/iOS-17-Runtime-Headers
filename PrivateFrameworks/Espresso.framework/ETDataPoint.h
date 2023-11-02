
@interface ETDataPoint : NSObject {
    struct map<std::string, ETDataPoint_buffer, std::less<std::string>, std::allocator<std::pair<const std::string, ETDataPoint_buffer>>> { 
        struct __tree<std::__value_type<std::string, ETDataPoint_buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>>, std::allocator<std::__value_type<std::string, ETDataPoint_buffer>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, ETDataPoint_buffer>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  buffers;
    struct map<std::string, vImage_Buffer, std::less<std::string>, std::allocator<std::pair<const std::string, vImage_Buffer>>> { 
        struct __tree<std::__value_type<std::string, vImage_Buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>, std::allocator<std::__value_type<std::string, vImage_Buffer>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, vImage_Buffer>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  image_buffers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (float*)bufferWithKey:(id)arg1;
- (void)dealloc;
- (struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })getSampleData;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })imageWithKey:(id)arg1;
- (void)iterateBuffersByKey:(id /* block */)arg1;
- (void)setData:(float*)arg1 size:(unsigned long long)arg2 forKey:(id)arg3 freeWhenDone:(bool)arg4;
- (void)setImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 forKey:(id)arg2;

@end
