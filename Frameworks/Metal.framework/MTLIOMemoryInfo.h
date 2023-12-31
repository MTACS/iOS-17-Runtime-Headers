
@interface MTLIOMemoryInfo : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _memoryInfoLock;
    MTLIOAccelResource * fResourceListHead;
    void * memlist_key;
}

+ (id)initialize;

- (void*)addDataSource:(id /* block */)arg1;
- (void)addResourceToList:(id)arg1;
- (struct __CFArray { }*)annotationList;
- (void)dealloc;
- (id)init;
- (void)lock;
- (void)removeDataSource:(void*)arg1;
- (void)removeResourceFromList:(id)arg1;
- (void)shutdown;
- (void)unlock;

@end
