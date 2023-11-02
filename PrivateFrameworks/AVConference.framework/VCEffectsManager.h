
@interface VCEffectsManager : NSObject {
    struct __CFAllocator { } * _bufferAllocator;
    int  _consecutiveDroppedFrameCount;
    id  _delegate;
    int  _droppedFrameCount;
    NSMutableArray * _effectsArray;
    bool  _effectsRegistered;
    int  _failedFrameCount;
    bool  _forceDisableEffectsHealthCheck;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastPrintTimestamp;
    struct __CVBuffer { } * _lastReceivedDepthBuffer;
    struct __CVBuffer { } * _lastReceivedPixelBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastReceivedTimestamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastSentTimestamp;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _loggingLock;
    int  _receivedFrameCount;
    struct opaqueVCRemoteImageQueue { } * _receiverQueue;
    struct opaqueVCRemoteImageQueue { } * _senderQueue;
    int  _sentFrameCount;
    int  _thermalPressureLevel;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (nonatomic) <VCEffectsManagerDelegate> *delegate;
@property (retain) NSMutableArray *effectsArray;
@property (nonatomic, readonly) struct opaqueVCRemoteImageQueue { }*senderQueue;

+ (id)sharedManager;

- (bool)createAllocators;
- (void)dealloc;
- (id)delegate;
- (id)effectsArray;
- (void)effectsRegistered:(bool)arg1;
- (void)encodeProcessedPixelBuffer:(struct __CVBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 imageData:(id)arg3 processTime:(id)arg4;
- (void)flushRemoteQueue;
- (id)init;
- (bool)initializeReceiveQueue:(id)arg1 error:(id*)arg2;
- (bool)isFaceMeshTrackingEnabled;
- (void)registerBlocksForService;
- (void)releaseAllocators;
- (void)remoteQueueOperationHandlerWithError:(int)arg1 operation:(struct FigRemoteOperation { int x1; int x2; unsigned long long x3; struct __CFString {} *x4; union { struct { struct __CFDictionary {} *x_1_2_1; struct __CFDictionary {} *x_1_2_2; } x_5_1_1; struct { void *x_2_2_1; struct __IOSurface {} *x_2_2_2; struct __IOSurface {} *x_2_2_3; } x_5_1_2; struct { struct opaqueCMSampleBuffer {} *x_3_2_1; unsigned long long x_3_2_2; struct __CFArray {} *x_3_2_3; } x_5_1_3; struct { struct opaqueCMFormatDescription {} *x_4_2_1; } x_5_1_4; struct { long long x_5_2_1; struct opaqueCMFormatDescription {} *x_5_2_2; } x_5_1_5; } x5; }*)arg2;
- (void)resetEffectsLogging;
- (struct opaqueVCRemoteImageQueue { }*)senderQueue;
- (void)setDelegate:(id)arg1;
- (void)setEffectsArray:(id)arg1;
- (void)tearDownRemoteQueues;
- (void)updateThermalLevel:(int)arg1;

@end
