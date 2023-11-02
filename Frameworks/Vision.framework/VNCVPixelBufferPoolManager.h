
@interface VNCVPixelBufferPoolManager : NSObject {
    struct unordered_map<apple::vision::BufferSizeFormat, __CVPixelBufferPool *, std::hash<BufferSizeFormat>, std::equal_to<apple::vision::BufferSizeFormat>, std::allocator<std::pair<const apple::vision::BufferSizeFormat, __CVPixelBufferPool *>>> { 
        struct __hash_table<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::__unordered_map_hasher<apple::vision::BufferSizeFormat, std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::hash<BufferSizeFormat>, std::equal_to<apple::vision::BufferSizeFormat>>, std::__unordered_map_equal<apple::vision::BufferSizeFormat, std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::equal_to<apple::vision::BufferSizeFormat>, std::hash<BufferSizeFormat>>, std::allocator<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<apple::vision::BufferSizeFormat, std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::hash<BufferSizeFormat>, std::equal_to<apple::vision::BufferSizeFormat>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<apple::vision::BufferSizeFormat, std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::equal_to<apple::vision::BufferSizeFormat>, std::hash<BufferSizeFormat>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pools;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _poolsLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
