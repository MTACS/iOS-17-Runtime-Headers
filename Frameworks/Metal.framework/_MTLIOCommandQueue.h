
@interface _MTLIOCommandQueue : _MTLObjectWithLabel <MTLIOCommandQueueSPI> {
    NSObject<OS_dispatch_semaphore> * _commandBufferSemaphore;
    struct MTLIOCommandQueueCommandList { 
        struct { 
            struct MTLIOCommandQueueCommand {} *tqh_first; 
            struct MTLIOCommandQueueCommand {} **tqh_last; 
        } activeq; 
        struct _opaque_pthread_mutex_t {} *lock; 
        struct _opaque_pthread_cond_t {} *cond; 
        _MTLIOCommandQueue *queue; 
        bool exit; 
    }  _commandList;
    NSObject<OS_dispatch_queue> * _commitQueue;
    NSMutableArray * _completeQueue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _completeQueueMutex;
    <MTLDevice> * _device;
    MTLSharedEventListener * _eventSignalListener;
    NSObject<OS_dispatch_queue> * _followonQueue;
    <MTLSharedEvent> * _gpuEvent;
    <MTLCommandQueue> * _gpuQueue;
    unsigned long long  _labelTraceID;
    unsigned long long  _maxWorkerThreads;
    long long  _priority;
    MTLResourceListPool * _resourceListPool;
    <MTLIOScratchBufferAllocator> * _scratchBufferAllocator;
    long long  _type;
    bool  _usesPooledScratchBufferAllocator;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  cmdCvar;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  cmdMutex;
    NSString * description;
    unsigned long long  hash;
    Class  superclass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) MTLSharedEventListener *eventSignalListener;
@property (nonatomic, readonly) unsigned long long globalTraceObjectID;
@property (readonly) <MTLSharedEvent> *gpuEvent;
@property (readonly) <MTLCommandQueue> *gpuQueue;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) <MTLIOScratchBufferAllocator> *scratchBufferAllocator;
@property (readonly) Class superclass;

- (void)barrier;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (void)commit:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)didComplete:(id)arg1 withStatus:(long long)arg2;
- (void)enqueueBarrier;
- (id)eventSignalListener;
- (unsigned long long)globalTraceObjectID;
- (id)gpuEvent;
- (id)gpuQueue;
- (unsigned long long)hash;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (void)kickAllocatorCleanupQueue;
- (void)launchIOWorkerThreads;
- (void)returnActiveScratchBuffersToPool;
- (id)scratchBufferAllocator;
- (Class)superclass;

@end
