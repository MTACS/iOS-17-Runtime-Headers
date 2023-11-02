
@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage {
    NSMutableData * _data;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)expand:(unsigned long long)arg1 andRunWithLock:(id /* block */)arg2;
- (id)init;
- (void)reset;
- (bool)resetLocked;
- (void)saveCorruptState;

@end
