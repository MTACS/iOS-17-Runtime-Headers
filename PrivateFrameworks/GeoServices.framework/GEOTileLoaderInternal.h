
@interface GEOTileLoaderInternal : NSObject {
    GEOTilePool * _cache;
    _Atomic int  _diskHits;
    GEOTilePool * _expiringCache;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::allocator<_CacheRequester<void (^)(unsigned long long)>>>="__end_"{__list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *>="__prev_"^v"__next_"^v {}  _freeableSizeRequesters;
    struct list<LoadItem, std::allocator<LoadItem>> { 
        struct __list_node_base<LoadItem, void *> { 
            void *__prev_; 
            void *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::allocator<std::__list_node<LoadItem, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _loadItems;
    _Atomic int  _memoryHits;
    _Atomic int  _networkHits;
    struct deque<ErrorInfo, std::allocator<ErrorInfo>> { 
        struct __split_buffer<ErrorInfo *, std::allocator<ErrorInfo *>> { 
            struct ErrorInfo {} **__first_; 
            struct ErrorInfo {} **__begin_; 
            struct ErrorInfo {} **__end_; 
            struct __compressed_pair<ErrorInfo **, std::allocator<ErrorInfo *>> { 
                struct ErrorInfo {} **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<ErrorInfo>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _recentErrors;
    struct unique_ptr<geo::DispatchTimer, std::default_delete<geo::DispatchTimer>> { 
        struct __compressed_pair<geo::DispatchTimer *, std::default_delete<geo::DispatchTimer>> { 
            struct DispatchTimer {} *__value_; 
        } __ptr_; 
    }  _timer;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
