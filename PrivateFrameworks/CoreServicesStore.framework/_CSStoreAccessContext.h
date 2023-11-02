
@interface _CSStoreAccessContext : NSObject {
    struct CSStoreAccessContext { 
        struct variant<CSStore2::CSStoreNullAccessContext, CSStore2::CSStoreQueueAccessContext, CSStore2::CSStoreDebugQueueAccessContext, CSStore2::CSStoreUnfairLockAccessContext, CSStore2::CSStoreSharedReadingAccessContext> { 
            struct __impl<CSStore2::CSStoreNullAccessContext, CSStore2::CSStoreQueueAccessContext, CSStore2::CSStoreDebugQueueAccessContext, CSStore2::CSStoreUnfairLockAccessContext, CSStore2::CSStoreSharedReadingAccessContext> { 
                union __union<std::__variant_detail::_Trait::_Available, 0UL, CSStore2::CSStoreNullAccessContext, CSStore2::CSStoreQueueAccessContext, CSStore2::CSStoreDebugQueueAccessContext, CSStore2::CSStoreUnfairLockAccessContext, CSStore2::CSStoreSharedReadingAccessContext> { 
                    BOOL __dummy; 
                    struct __alt<0UL, CSStore2::CSStoreNullAccessContext> { 
                        struct CSStoreNullAccessContext { } __value; 
                    } __head; 
                    union __union<std::__variant_detail::_Trait::_Available, 1UL, CSStore2::CSStoreQueueAccessContext, CSStore2::CSStoreDebugQueueAccessContext, CSStore2::CSStoreUnfairLockAccessContext, CSStore2::CSStoreSharedReadingAccessContext> { 
                        BOOL __dummy; 
                        struct __alt<1UL, CSStore2::CSStoreQueueAccessContext> { 
                            struct CSStoreQueueAccessContext { 
                                NSObject<OS_dispatch_queue> *_q; 
                            } __value; 
                        } __head; 
                        union __union<std::__variant_detail::_Trait::_Available, 2UL, CSStore2::CSStoreDebugQueueAccessContext, CSStore2::CSStoreUnfairLockAccessContext, CSStore2::CSStoreSharedReadingAccessContext> { 
                            BOOL __dummy; 
                            struct __alt<2UL, CSStore2::CSStoreDebugQueueAccessContext> { 
                                struct CSStoreDebugQueueAccessContext { 
                                    NSObject<OS_dispatch_queue> *_q; 
                                    int (*_assertQueue)(); 
                                    int (*_assertQueueBarrier)(); 
                                } __value; 
                            } __head; 
                            union __union<std::__variant_detail::_Trait::_Available, 3UL, CSStore2::CSStoreUnfairLockAccessContext, CSStore2::CSStoreSharedReadingAccessContext> { 
                                BOOL __dummy; 
                                struct __alt<3UL, CSStore2::CSStoreUnfairLockAccessContext> { 
                                    struct CSStoreUnfairLockAccessContext { 
                                        struct os_unfair_lock_s {} *_lock; 
                                        bool _writeOK; 
                                    } __value; 
                                } __head; 
                                union __union<std::__variant_detail::_Trait::_Available, 4UL, CSStore2::CSStoreSharedReadingAccessContext> { 
                                    BOOL __dummy; 
                                    struct __alt<4UL, CSStore2::CSStoreSharedReadingAccessContext> { 
                                        struct CSStoreSharedReadingAccessContext { 
                                            struct os_unfair_lock_s { 
                                                unsigned int _os_unfair_lock_opaque; 
                                            } _lock; 
                                            struct unordered_set<_opaque_pthread_t *, std::hash<_opaque_pthread_t *>, std::equal_to<_opaque_pthread_t *>, std::allocator<_opaque_pthread_t *>> { 
                                                struct __hash_table<_opaque_pthread_t *, std::hash<_opaque_pthread_t *>, std::equal_to<_opaque_pthread_t *>, std::allocator<_opaque_pthread_t *>> { 
                                                    struct unique_ptr<std::__hash_node_base<std::__hash_node<_opaque_pthread_t *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_opaque_pthread_t *, void *> *> *>>> { 
                                                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<_opaque_pthread_t *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_opaque_pthread_t *, void *> *> *>>> { 
                                                            void **__value_; 
                                                            struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_opaque_pthread_t *, void *> *> *>> { 
                                                                struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_opaque_pthread_t *, void *> *> *>> { 
                                                                    unsigned long long __value_; 
                                                                } __data_; 
                                                            } __value_; 
                                                        } __ptr_; 
                                                    } __bucket_list_; 
                                                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<_opaque_pthread_t *, void *> *>, std::allocator<std::__hash_node<_opaque_pthread_t *, void *>>> { 
                                                        struct __hash_node_base<std::__hash_node<_opaque_pthread_t *, void *> *> { 
                                                            void *__next_; 
                                                        } __value_; 
                                                    } __p1_; 
                                                    struct __compressed_pair<unsigned long, std::hash<_opaque_pthread_t *>> { 
                                                        unsigned long long __value_; 
                                                    } __p2_; 
                                                    struct __compressed_pair<float, std::equal_to<_opaque_pthread_t *>> { 
                                                        float __value_; 
                                                    } __p3_; 
                                                } __table_; 
                                            } _threads; 
                                        } __value; 
                                    } __head; 
                                    union __union<std::__variant_detail::_Trait::_Available, 5UL> { } __tail; 
                                } __tail; 
                            } __tail; 
                        } __tail; 
                    } __tail; 
                } __data; 
                unsigned int __index; 
            } __impl_; 
        } _impl; 
    }  _impl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initForSharedReading;

@end
