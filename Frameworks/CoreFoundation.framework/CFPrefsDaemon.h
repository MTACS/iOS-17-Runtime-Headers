
@interface CFPrefsDaemon : NSObject {
    struct { 
        unsigned long long buckets[64]; 
    }  _deadManagedSourceBitSet;
    NSObject<OS_xpc_object> * _listener;
    const char * _name;
    int  _role;
    _Atomic unsigned int * _shmem;
    struct __CFSet { } * _sourceCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sourceCacheLock;
    struct __CFBag { } * _sourceCacheUsageCounts;
    bool  _testMode;
}

- (bool)enterSandbox;

@end
