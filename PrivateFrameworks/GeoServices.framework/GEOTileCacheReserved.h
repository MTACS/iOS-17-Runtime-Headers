
@interface GEOTileCacheReserved : NSObject {
    unsigned long long  _reservedCurrentCost;
    unsigned long long  _reservedCurrentCount;
    struct list<CacheItem, std::allocator<CacheItem>> { 
        struct __list_node_base<CacheItem, void *> { 
            void *__prev_; 
            void *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::allocator<std::__list_node<CacheItem, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _reservedList;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _reservedLock;
    struct unordered_map<_GEOTileKey, std::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<CacheItem, void *>>>> { 
        struct __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, hashkey, eqkey>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, eqkey, hashkey>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, hashkey, eqkey>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, eqkey, hashkey>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _reservedMap;
    unsigned long long  _reservedMaxCapacity;
    unsigned long long  _reservedMaxCost;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end
