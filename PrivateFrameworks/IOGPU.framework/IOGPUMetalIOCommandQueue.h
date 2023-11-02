
@interface IOGPUMetalIOCommandQueue : _MTLIOCommandQueue {
    NSObject<OS_dispatch_source> * _commandQueueEventSource;
    NSObject<OS_dispatch_queue> * _completionQueueDispatch;
    NSObject<OS_dispatch_queue> * _decompressionQueue;
    IOGPUMetalDevice<MTLDevice> * _device;
    unsigned long long  _globalTraceObjectID;
    IOGPUMetalCommandQueue<MTLCommandQueue> * _gpuQueue;
    struct __IOGPUIOCommandQueue { } * _ioCommandQueueRef;
    NSObject<OS_dispatch_queue> * _ioThreadDispatch;
    NSMutableArray * _pendingQueue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _pendingQueueLock;
    NSObject<OS_dispatch_queue> * _submissionQueueDispatch;
    NSMutableArray * _submittedQueue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _submittedQueueLock;
}

- (void)_submitAvailableCommands:(void*)arg1;
- (void)barrier;
- (id)commandBuffer;
- (void)commandBufferComplete;
- (id)commandBufferWithUnretainedReferences;
- (void)commitCommandBuffer:(id)arg1;
- (void)dealloc;
- (void)didComplete:(id)arg1 withStatus:(long long)arg2;
- (void)enqueueBarrier;
- (void)enqueueCommandBuffer:(id)arg1;
- (id)getDecompressionQueue;
- (long long)getPriority;
- (unsigned long long)globalTraceObjectID;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (void)launchIOGPUIOThreads;
- (void)launchIOWorkerThreads;
- (void)setLabel:(id)arg1;
- (void)submitAvailableCommands;

@end
