
@interface VCCannedVideoCaptureSource : VCObject {
    NSObject<OS_dispatch_queue> * _captureSessionQueue;
    struct _tagVCCannedVideoCaptureSourceContext { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } attributeMutex; 
        _Atomic int frameRate; 
        struct OpaqueCMClock {} *hostClock; 
        struct OpaqueFigThread {} *producerThread; 
        bool producerThreadCanceled; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } producerMutex; 
        struct _opaque_pthread_cond_t { 
            long long __sig; 
            BOOL __opaque[40]; 
        } producerConditional; 
        struct OpaqueFigThread {} *consumerThread; 
        bool consumerThreadCanceled; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } consumerMutex; 
        struct _opaque_pthread_cond_t { 
            long long __sig; 
            BOOL __opaque[40]; 
        } consumerConditional; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } frameRingBufferMutex; 
        struct Frame {} *frameRingBuffer; 
        int frameRingBufferIndex; 
        NSObject<OS_dispatch_queue> *helperQueue; 
    }  _context;
    bool  _enableTxTimestampAlignmentLogs;
    int (* _frameCallback;
    <VCCannedVideoFrameFeeder> * _frameFeeder;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    VCWeakObjectHolder * _weakCallbackContext;
}

- (void)dealloc;
- (int)frameRate;
- (id)initWithVideo:(id)arg1 callbackContext:(id)arg2 frameCallback:(int (*)arg3;
- (void)setFrameRate:(int)arg1;
- (void)setWidth:(int)arg1 height:(int)arg2;
- (int)start;
- (int)stop;

@end
