
@interface _MKSpatialColliderPairSet : NSObject {
    struct unordered_set<_MKAnnotationViewPair, std::hash<_MKAnnotationViewPair>, std::equal_to<_MKAnnotationViewPair>, std::allocator<_MKAnnotationViewPair>> { 
        struct __hash_table<_MKAnnotationViewPair, std::hash<_MKAnnotationViewPair>, std::equal_to<_MKAnnotationViewPair>, std::allocator<_MKAnnotationViewPair>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *>, std::allocator<std::__hash_node<_MKAnnotationViewPair, void *>>> { 
                struct __hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<_MKAnnotationViewPair>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<_MKAnnotationViewPair>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pairs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
