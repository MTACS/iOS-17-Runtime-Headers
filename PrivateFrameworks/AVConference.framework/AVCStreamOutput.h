
@interface AVCStreamOutput : NSObject <VCRemoteVideoManagerStreamOutputDelegate> {
    struct __CFDictionary { } * _attachments;
    AVConferenceXPCClient * _connection;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    float  _estimatedDataRate;
    NSObject<OS_dispatch_queue> * _internalReceiverQueue;
    bool  _isDegraded;
    bool  _isMediaStalled;
    bool  _isPaused;
    bool  _isStalled;
    bool  _isSuspended;
    bool  _isValid;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastHealthPrintTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastSampleBufferTime;
    bool  _printSampleBufferDetailsEnabled;
    int  _processID;
    struct opaqueVCRemoteImageQueue { } * _receiverQueue;
    unsigned int  _sampleBufferCount;
    long long  _streamToken;
    float  _synchronizationTimeOffset;
    VCStreamOutput * _vcStreamOutput;
    VCWeakObjectHolder * _weakSelf;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVCStreamOutputDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalReceiverQueue;
@property (nonatomic) bool isDegraded;
@property (nonatomic) bool isPaused;
@property (nonatomic) bool isStalled;
@property (nonatomic) bool isSuspended;
@property (nonatomic) bool isValid;
@property (nonatomic, readonly) long long streamToken;
@property (readonly) Class superclass;
@property (nonatomic) float synchronizationTimeOffset;

- (int)createReceiverQueue;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)deregisterBlocksForNotifications;
- (void)didDegrade:(bool)arg1;
- (void)didInvalidate;
- (void)didPause:(bool)arg1;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)didStall:(bool)arg1;
- (void)didSuspend:(bool)arg1;
- (void)didUpdateAttachments:(struct __CFDictionary { }*)arg1;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2 queue:(id)arg3 error:(id*)arg4;
- (id)internalReceiverQueue;
- (bool)isDegraded;
- (bool)isPaused;
- (bool)isStalled;
- (bool)isSuspended;
- (bool)isValid;
- (int)processID;
- (void)registerBlocksForNotification;
- (void)remoteQueueOperationHandlerWithError:(int)arg1 operation:(struct FigRemoteOperation { int x1; int x2; unsigned long long x3; struct __CFString {} *x4; union { struct { struct __CFDictionary {} *x_1_2_1; struct __CFDictionary {} *x_1_2_2; } x_5_1_1; struct { void *x_2_2_1; struct __IOSurface {} *x_2_2_2; struct __IOSurface {} *x_2_2_3; } x_5_1_2; struct { struct opaqueCMSampleBuffer {} *x_3_2_1; unsigned long long x_3_2_2; struct __CFArray {} *x_3_2_3; } x_5_1_3; struct { struct opaqueCMFormatDescription {} *x_4_2_1; } x_5_1_4; struct { long long x_5_2_1; struct opaqueCMFormatDescription {} *x_5_2_2; } x_5_1_5; } x5; }*)arg2;
- (void)serviceHandlerDidDegradeWithArguments:(id)arg1 error:(id)arg2;
- (void)serviceHandlerDidDieWithArguments:(id)arg1 error:(id)arg2;
- (void)serviceHandlerDidPauseWithArguments:(id)arg1 error:(id)arg2;
- (void)serviceHandlerDidReceiveFrameWithArguments:(id)arg1 error:(id)arg2;
- (void)serviceHandlerDidReleaseOutputQueueWithArguments:(id)arg1 error:(id)arg2;
- (void)serviceHandlerDidStallWithArguments:(id)arg1 error:(id)arg2;
- (void)serviceHandlerDidSuspendWithArguments:(id)arg1 error:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setInternalReceiverQueue:(id)arg1;
- (void)setIsDegraded:(bool)arg1;
- (void)setIsPaused:(bool)arg1;
- (void)setIsStalled:(bool)arg1;
- (void)setIsSuspended:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setSynchronizationTimeOffset:(float)arg1;
- (void)setupDelegateQueue:(id)arg1;
- (int)setupRemoteQueueWithSenderQueue:(id)arg1;
- (int)setupXPCConnection;
- (long long)streamToken;
- (float)synchronizationTimeOffset;
- (void)terminateConnection;

@end
