
@interface LSDBExecutionContext : NSObject {
    bool  _databaseLeftWritable;
    struct unfair_lock_mutex { 
        unsigned int _os_unfair_lock_opaque; 
    }  _databaseLock;
    NSObject<OS_dispatch_queue> * _maintenanceQueue;
    struct unordered_map<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>, std::hash<_opaque_pthread_t *>, std::equal_to<_opaque_pthread_t *>, std::allocator<std::pair<_opaque_pthread_t *const, std::shared_ptr<LaunchServices::PerThreadContext>>>> { 
        struct __hash_table<std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, std::__unordered_map_hasher<_opaque_pthread_t *, std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, std::hash<_opaque_pthread_t *>, std::equal_to<_opaque_pthread_t *>>, std::__unordered_map_equal<_opaque_pthread_t *, std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, std::equal_to<_opaque_pthread_t *>, std::hash<_opaque_pthread_t *>>, std::allocator<std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<_opaque_pthread_t *, std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, std::hash<_opaque_pthread_t *>, std::equal_to<_opaque_pthread_t *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<_opaque_pthread_t *, std::__hash_value_type<_opaque_pthread_t *, std::shared_ptr<LaunchServices::PerThreadContext>>, std::equal_to<_opaque_pthread_t *>, std::hash<_opaque_pthread_t *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _perThreadContexts;
    struct unfair_lock_mutex { 
        unsigned int _os_unfair_lock_opaque; 
    }  _perThreadContextsLock;
    struct CFReleaser<__CSStoreAccessContext *> { 
        struct __CSStoreAccessContext {} *fItem; 
    }  _readAccessContext;
    struct CFReleaser<__CSStoreAccessContext *> { 
        struct __CSStoreAccessContext {} *fItem; 
    }  _writeAccessContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_init;
- (struct PerThreadContext { id x1; id x2; bool x3; bool x4; struct unfair_lock_mutex { unsigned int x_5_1_1; } x5; }*)_perThreadContextsLock_createPerThreadContextForThisThread;
- (void)_perThreadContextsLock_destroyPerThreadContextForThisThread;
- (struct PerThreadContext { id x1; id x2; bool x3; bool x4; struct unfair_lock_mutex { unsigned int x_5_1_1; } x5; }*)_perThreadContextsLock_findPerThreadContextForThisThread;
- (struct PerThreadContext { id x1; id x2; bool x3; bool x4; struct unfair_lock_mutex { unsigned int x_5_1_1; } x5; }*)_perThreadContextsLock_findPerThreadContextForThisThreadIfExists;

@end
