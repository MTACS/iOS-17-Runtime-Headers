
@interface _MTLIOScratchBufferAllocator : NSObject <MTLIOScratchBufferAllocator> {
    struct MTLIOScratchBufferPrivateQueue { 
        struct MTLIOScratchBufferPrivate {} *tqh_first; 
        struct MTLIOScratchBufferPrivate {} **tqh_last; 
    }  _activeq;
    unsigned long long  _age_to_purge;
    unsigned long long  _currentSize;
    <MTLDevice> * _device;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pool_cleanup_lock;
    NSObject<OS_dispatch_queue> * _pool_cleanup_queue;
    bool  _pool_cleanup_requested;
    bool  _pool_cleanup_scheduled;
    NSObject<OS_dispatch_source> * _pool_cleanup_source;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _pool_lock;
    struct MTLIOScratchBufferPrivateQueue { 
        struct MTLIOScratchBufferPrivate {} *tqh_first; 
        struct MTLIOScratchBufferPrivate {} **tqh_last; 
    }  _poolq;
    struct MTLIOScratchBufferPrivateQueue { 
        struct MTLIOScratchBufferPrivate {} *tqh_first; 
        struct MTLIOScratchBufferPrivate {} **tqh_last; 
    }  _volatileq;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (void)kickCleanupQueue;
- (id)newScratchBufferWithMinimumSize:(unsigned long long)arg1;
- (void)returnActiveScratchBuffersToPool;
- (void)returnPriv:(struct MTLIOScratchBufferPrivate { struct { struct MTLIOScratchBufferPrivate {} *x_1_1_1; struct MTLIOScratchBufferPrivate {} **x_1_1_2; } x1; id x2; id x3; unsigned long long x4; unsigned long long x5; bool x6; }*)arg1;
- (bool)updateScratchBuffersPurgeability;
- (void)updateScratchBuffersPurgeabilityHandler;

@end
