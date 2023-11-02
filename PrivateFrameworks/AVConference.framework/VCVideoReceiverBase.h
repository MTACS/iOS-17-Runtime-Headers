
@interface VCVideoReceiverBase : NSObject <VCConnectionChangedHandler, VCMediaStreamSyncDestination> {
    <VCVideoReceiverDelegate> * _delegate;
    struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { 
        int (*didReceiveSampleBuffer)(); 
        int (*didReceiveRemoteFrame)(); 
    }  _delegateFunctions;
    float  _lastLastVideoStallDuration;
    double  _lastReceivedVideoRTCPPacketTime;
    double  _lastReceivedVideoRTPPacketTime;
    VCMediaStreamSynchronizer * _mediaStreamSynchronizer;
    int  _remoteVideoOrientation;
    double  _roundTripTime;
    unsigned int  _rtpTimestampRate;
    <VCMediaStreamSyncSource> * _syncSource;
    float  lastLastVideoStallDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCVideoReceiverDelegate> *delegate;
@property (nonatomic) struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { int (*x1)(); int (*x2)(); } delegateFunctions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int lastDisplayedFrameRTPTimestamp;
@property (readonly) float lastLastVideoStallDuration;
@property (readonly) double lastReceivedVideoRTCPPacketTime;
@property (readonly) double lastReceivedVideoRTPPacketTime;
@property int remoteVideoOrientation;
@property double roundTripTime;
@property (readonly) Class superclass;
@property (nonatomic) <VCMediaStreamSyncSource> *syncSource;

- (void)collectChannelMetrics:(struct { unsigned int x1; unsigned int x2[5]; unsigned int x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; unsigned int x7; double x8; unsigned int x9; unsigned int x10; }*)arg1 interval:(float)arg2;
- (void)dealloc;
- (id)delegate;
- (struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { int (*x1)(); int (*x2)(); })delegateFunctions;
- (void)handleActiveConnectionChange:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateFunctions:(const struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { int (*x1)(); int (*x2)(); }*)arg2;
- (unsigned int)lastDisplayedFrameRTPTimestamp;
- (float)lastLastVideoStallDuration;
- (double)lastReceivedVideoRTCPPacketTime;
- (double)lastReceivedVideoRTPPacketTime;
- (void)pauseVideo;
- (int)remoteVideoOrientation;
- (double)roundTripTime;
- (void)rtcpSendIntervalElapsed;
- (void)setDelegate:(id)arg1;
- (void)setDelegateFunctions:(struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { int (*x1)(); int (*x2)(); })arg1;
- (void)setEnableCVO:(bool)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)setEnableRateAdaptation:(bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setJitterBufferMode:(int)arg1;
- (void)setRemoteVideoOrientation:(int)arg1;
- (void)setRoundTripTime:(double)arg1;
- (void)setShouldEnableMLEnhance:(bool)arg1 streamID:(unsigned short)arg2;
- (void)setSyncSource:(id)arg1;
- (void)setSynchronizer:(id)arg1;
- (void)setTargetStreamID:(unsigned short)arg1;
- (bool)startSynchronization:(id)arg1;
- (void)startVideo;
- (void)stopSynchronization;
- (void)stopVideo;
- (id)syncSource;
- (void)updateSourcePlayoutTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;

@end
