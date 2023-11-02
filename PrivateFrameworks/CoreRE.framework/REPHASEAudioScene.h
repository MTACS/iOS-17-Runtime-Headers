
@interface REPHASEAudioScene : NSObject {
    REPHASEContext * _context;
    struct unique_ptr<re::HashTable<unsigned long long, REPHASEEntity *>, std::function<void (re::HashTable<unsigned long long, REPHASEEntity *> *)>>="__ptr_"{__compressed_pair<re::HashTable<unsigned long long, REPHASEEntity *> *, std::function<void (re::HashTable<unsigned long long, REPHASEEntity *> *)>>="__value_"^v"__value_"{function<void (re::HashTable<unsigned long long, REPHASEEntity *> *)>="__f_"{__value_func<void (re::HashTable<unsigned long long, REPHASEEntity *> *)>="__buf_"{type="__lx"[24C] {}  _entities;
    struct unique_ptr<re::HashTable<unsigned long long, PHASEListener *>, std::function<void (re::HashTable<unsigned long long, PHASEListener *> *)>>="__ptr_"{__compressed_pair<re::HashTable<unsigned long long, PHASEListener *> *, std::function<void (re::HashTable<unsigned long long, PHASEListener *> *)>>="__value_"^v"__value_"{function<void (re::HashTable<unsigned long long, PHASEListener *> *)>="__f_"{__value_func<void (re::HashTable<unsigned long long, PHASEListener *> *)>="__buf_"{type="__lx"[24C] {}  _listeners;
    struct unique_ptr<re::HashTable<unsigned long long, PHASEObject *>, std::function<void (re::HashTable<unsigned long long, PHASEObject *> *)>>="__ptr_"{__compressed_pair<re::HashTable<unsigned long long, PHASEObject *> *, std::function<void (re::HashTable<unsigned long long, PHASEObject *> *)>>="__value_"^v"__value_"{function<void (re::HashTable<unsigned long long, PHASEObject *> *)>="__f_"{__value_func<void (re::HashTable<unsigned long long, PHASEObject *> *)>="__buf_"{type="__lx"[24C] {}  _sessionRootObjects;
    struct HashTable<unsigned long long, PHASESource *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> { 
        struct Allocator {} *m_allocator; 
        unsigned int *m_buckets; 
        union Entry { 
            struct EntryWithoutHash {} *withoutHash; 
            struct EntryWithHash {} *withHash; 
        } m_entries; 
        unsigned int m_capacity; 
        unsigned int m_count; 
        unsigned int m_touchedEntries; 
        unsigned int m_freeList; 
        unsigned int m_version; 
    }  _sources;
    PHASEListener * _systemListener;
    struct vector<PendingListener, std::allocator<PendingListener>> { 
        struct PendingListener {} *__begin_; 
        struct PendingListener {} *__end_; 
        struct __compressed_pair<PendingListener *, std::allocator<PendingListener>> { 
            struct PendingListener {} *__value_; 
        } __end_cap_; 
    }  pendingListeners;
}

@property (readonly) bool isValid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)createAudioSessionRootWithID:(unsigned long long)arg1 sessionUUID:(id)arg2;
- (void)createListenerWithID:(unsigned long long)arg1 listenerType:(unsigned char)arg2;
- (void)createPendingListenersIfReady;
- (void)destroy;
- (void*)getAllEntities;
- (id)getEntity:(unsigned long long)arg1;
- (id)getOrCreateEntity:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isValid;
- (void*)listeners;
- (void)removeEntity:(unsigned long long)arg1;
- (void*)sessionRootObjects;
- (void*)sources;

@end
