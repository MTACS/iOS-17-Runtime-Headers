
@interface GEOTilePool : NSObject {
    GEOTileCache * _cache;
    struct _GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, geo::detail::_default_pointer_type> { 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } _lock; 
        struct list<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, std::allocator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>>> { 
            struct __list_node_base<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *> { 
                void *__prev_; 
                void *__next_; 
            } __end_; 
            struct __compressed_pair<unsigned long, std::allocator<std::__list_node<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>> { 
                unsigned long long __value_; 
            } __size_alloc_; 
        } _list; 
        struct unordered_map<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> { 
            struct __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, id, geo::detail::_GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _map; 
        unsigned long long _maxCapacity; 
        unsigned long long _maxCost; 
        unsigned long long _currentCost; 
        unsigned long long _currentCount; 
    }  _decodedPool;
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    struct _GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, geo::detail::_default_pointer_type> { 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } _lock; 
        struct list<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, std::allocator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>>> { 
            struct __list_node_base<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *> { 
                void *__prev_; 
                void *__next_; 
            } __end_; 
            struct __compressed_pair<unsigned long, std::allocator<std::__list_node<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>> { 
                unsigned long long __value_; 
            } __size_alloc_; 
        } _list; 
        struct unordered_map<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> { 
            struct __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOTileData *, geo::detail::_GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0>::_value_ptr>, void *>>, std::equal_to<GEOTileKey>, std::hash<GEOTileKey>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _map; 
        unsigned long long _maxCapacity; 
        unsigned long long _maxCost; 
        unsigned long long _currentCost; 
        unsigned long long _currentCount; 
    }  _pool;
}

@property (nonatomic, readonly) unsigned long long currentCost;
@property (nonatomic, readonly) unsigned long long currentCount;
@property unsigned long long maxCapacity;
@property unsigned long long maxCost;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_enteredBackground:(id)arg1;
- (void)_receivedMemoryNotification;
- (bool)containsKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 cost:(unsigned long long*)arg2;
- (unsigned long long)currentCost;
- (unsigned long long)currentCount;
- (void)enumerate:(id /* block */)arg1;
- (id)init;
- (id)initWithSideCacheEnabled:(bool)arg1;
- (unsigned long long)maxCapacity;
- (unsigned long long)maxCost;
- (void)removeAllObjects;
- (void)removeTileForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1;
- (void)removeTilesMatchingPredicate:(id /* block */)arg1;
- (void)removeTilesWithKeys:(id)arg1;
- (void)setMaxCapacity:(unsigned long long)arg1;
- (void)setMaxCost:(unsigned long long)arg1;
- (void)setTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg2 cost:(unsigned long long)arg3;
- (id)tileForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1;

@end
