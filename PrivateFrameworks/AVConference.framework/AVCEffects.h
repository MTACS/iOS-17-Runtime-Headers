
@interface AVCEffects : NSObject {
    NSObject<OS_dispatch_queue> * _avConferenceEffectsQueue;
    AVConferenceXPCClient * _connection;
    id  _delegate;
    int  _effectType;
    bool  _isEffectsApplied;
    bool  _isFaceMeshTrackingEnabled;
    struct __CVBuffer { } * _lastReceivedDepthBuffer;
    struct __CVBuffer { } * _lastReceivedPixelBuffer;
    int  _mode;
    struct opaqueVCRemoteImageQueue { } * _receiverQueue;
    struct opaqueVCRemoteImageQueue { } * _senderQueue;
}

@property (nonatomic) <AVCEffectsDelegate> *delegate;
@property (nonatomic) int effectType;
@property (nonatomic) int mode;

- (void)avcVideoFrameDidRelease:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (int)effectType;
- (void)encodeProcessedVideoFrame:(id)arg1;
- (bool)enqueueSampleBuffer:(struct __CVBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)flushRemoteQueue;
- (id)initWithDelegate:(id)arg1;
- (int)mode;
- (void)registerBlocksForNotifications;
- (void)remoteQueueOperationHandlerWithError:(int)arg1 operation:(struct FigRemoteOperation { int x1; int x2; unsigned long long x3; struct __CFString {} *x4; union { struct { struct __CFDictionary {} *x_1_2_1; struct __CFDictionary {} *x_1_2_2; } x_5_1_1; struct { void *x_2_2_1; struct __IOSurface {} *x_2_2_2; struct __IOSurface {} *x_2_2_3; } x_5_1_2; struct { struct opaqueCMSampleBuffer {} *x_3_2_1; unsigned long long x_3_2_2; struct __CFArray {} *x_3_2_3; } x_5_1_3; struct { struct opaqueCMFormatDescription {} *x_4_2_1; } x_5_1_4; struct { long long x_5_2_1; struct opaqueCMFormatDescription {} *x_5_2_2; } x_5_1_5; } x5; }*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEffectType:(int)arg1;
- (void)setMode:(int)arg1;
- (bool)setupRemoteReceiverQueueWithSenderQueue:(id)arg1;

@end
