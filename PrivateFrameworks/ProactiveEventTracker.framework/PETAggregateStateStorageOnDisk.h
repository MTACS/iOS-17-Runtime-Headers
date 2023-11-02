
@interface PETAggregateStateStorageOnDisk : PETAggregateStateStorage {
    void * _bytes;
    _Atomic bool  _dead;
    int  _fd;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _localLock;
    unsigned long long  _mappedLen;
    NSString * _path;
}

- (void).cxx_destruct;
- (void)_die;
- (void)_remapWithFlock:(bool)arg1;
- (unsigned long long)_reserveCapacity:(unsigned int)arg1;
- (void)dealloc;
- (void)expand:(unsigned long long)arg1 andRunWithLock:(id /* block */)arg2;
- (id)initWithPath:(id)arg1;
- (void)reset;
- (bool)resetLocked;
- (void)saveCorruptState;

@end