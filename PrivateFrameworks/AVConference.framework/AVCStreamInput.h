
@interface AVCStreamInput : NSObject {
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _description;
    bool  _didInitializeSuccessfully;
    struct opaqueCMFormatDescription { } * _formatDescription;
    bool  _isStarted;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastHealthPrintTime;
    unsigned long long  _memoryPoolSize;
    struct tagAVCStreamInputDataStats { 
        unsigned int sampleBufferCount; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } lastSampleBufferTime; 
        float averageBitrate; 
    }  _payloadStats;
    bool  _printSampleBufferDetailsEnabled;
    bool  _requireTileIndexAttachment;
    struct __CFAllocator { } * _sampleBufferAllocator;
    struct opaqueVCRemoteImageQueue { } * _senderQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _senderQueueLock;
    bool  _serverDiedWhileStarted;
    long long  _streamInputID;
    BOOL  _streamInputIDString;
    struct tagAVCStreamInputDataStats { 
        unsigned int sampleBufferCount; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } lastSampleBufferTime; 
        float averageBitrate; 
    }  _tileIndexStats;
    bool  _useFigRemoteQueue;
    AVConferenceXPCClient * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic, readonly) struct __CFAllocator { }*sampleBufferAllocator;
@property (nonatomic, readonly) long long streamInputID;
@property (readonly) NSObject<OS_dispatch_queue> *xpcQueue;

- (int)createAndAddRemoteQueueToXPCDictionary:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (id)description;
- (void)didResume;
- (void)didServerDie;
- (void)didStart;
- (void)didStop;
- (void)didSuspend;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)formatDescriptionString;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 format:(struct opaqueCMFormatDescription { }*)arg3 options:(id)arg4 error:(id*)arg5;
- (int)initializeServerSideInputStream;
- (id)newRemoteQueueWithServerPid:(int)arg1;
- (int)processFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (int)processOptions:(id)arg1;
- (bool)pushSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (void)registerBlocksForNotification;
- (void)registerDidServerDieBlock:(id)arg1;
- (void)registerService:(char *)arg1 weakSelf:(id)arg2 block:(id /* block */)arg3;
- (void)resetStats;
- (int)resetXPCConnection;
- (struct __CFAllocator { }*)sampleBufferAllocator;
- (bool)sendSampleBufferOverXPC:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (void)senderQueueLock;
- (void)senderQueueUnlock;
- (int)setupDelegate:(id)arg1 delegateQueue:(id)arg2;
- (int)setupXPCConnection;
- (int)setupXPCQueue;
- (long long)streamInputID;
- (void)tearDownConnectionWithTerminateMessage:(bool)arg1;
- (void)tearDownRemoteQueue;
- (id)xpcQueue;

@end
