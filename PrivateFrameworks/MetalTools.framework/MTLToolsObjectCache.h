
@interface MTLToolsObjectCache : NSObject {
    /* Warning: unhandled struct encoding: '{vector<id, std::allocator<id>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<id *, std::allocator<id>>="__value_"^@}}' */ struct vector<id, std::allocator<id>> { 
        __end_ **__begin_; 
    }  _keyRemoveList;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _listLock;
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _lock;
    NSMapTable * _map;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getCachedObjectForKey:(id)arg1;
- (id)getCachedObjectForKey:(id)arg1 onMiss:(id /* block */)arg2;
- (id)init;
- (void)removeKey:(id)arg1;

@end
