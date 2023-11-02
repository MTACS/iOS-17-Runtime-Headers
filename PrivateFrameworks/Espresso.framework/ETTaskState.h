
@interface ETTaskState : NSObject {
    struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _blobs;
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _networkPointer;
}

@property /* Warning: unhandled struct encoding: '{unordered_map<std::string' */ struct  blobs; /* unknown property attribute:  std::hash<std::string>>>=f}}} */
@property struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; } networkPointer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })blobs;
- (id)initWithBlobMap:(void*)arg1;
- (id)initWithNetwork:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })networkPointer;
- (void)setBlobs:(struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })arg1;
- (void)setNetworkPointer:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
