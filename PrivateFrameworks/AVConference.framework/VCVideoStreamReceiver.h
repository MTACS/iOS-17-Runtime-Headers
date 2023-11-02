
@interface VCVideoStreamReceiver : VCVideoReceiverBase <VCMediaStreamSyncDestination> {
    struct OpaqueCMMemoryPool { } * _blockBufferMemoryPool;
    struct __CFAllocator { } * _blockBufferMemoryPoolAllocator;
    unsigned long long  _cvoExtensionID;
    struct OpaqueVTDecompressionSession { } * _decompressionSession;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _decompressionSessionMutex;
    bool  _enableCVO;
    bool  _enableReceiveBitstreamDump;
    unsigned char  _firSequenceNumber;
    struct opaqueCMFormatDescription { } * _formatDescription;
    struct tagHANDLE { int x1; } * _hRTP;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastDisplayTime;
    double  _lastFIRArrivalTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastFrameTime;
    unsigned long long  _lastKeyFrameSampleBufferSize;
    unsigned short  _lastSequenceNumber;
    unsigned int  _lastVideoTimestamp;
    unsigned int  _mostRecentTimestamp;
    struct OpaqueFigThread { } * _networkReceiveThread;
    VCVideoStreamRateAdaptation * _rateAdaptation;
    unsigned int  _receivedBytes;
    bool  _receivedFirstPacket;
    bool  _receivedFirstRemoteFrame;
    VideoAttributes * _remoteVideoAttributes;
    int  _remoteVideoCamera;
    bool  _remoteVideoMirrored;
    struct opaqueRTCReporting { } * _reportingAgent;
    double  _reportingIntervalStartTime;
    double  _reportingLastUpdateTime;
    int  _reportingModuleID;
    void * _rtcpContext;
    int (* _rtcpPacketsCallback;
    struct OpaqueVCTransportStreamRunLoop { } * _runLoop;
    bool  _runNetworkReceiveThread;
    int  _sRecvReset;
    int  _sequenceNumberOutOfOrder;
    VCMediaStreamStats * _stats;
    struct VideoPacketBuffer_t { } * _videoPacketBuffer;
    struct opaqueCMBufferQueue { } * _videoQueue;
    unsigned int  _videoStallDurationMillis;
    double  _videoStallStartTime;
    NSObject<OS_dispatch_queue> * _videoStreamReceiverQueue;
    unsigned int  _videoTimestampWrapCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canDequeue:(struct opaqueCMBufferQueue { }*)arg1 forTimestamp:(unsigned int)arg2;
- (void)createDecodeSession:(struct opaqueCMFormatDescription { }*)arg1;
- (void)dealloc;
- (int)decodeFrame:(struct opaqueCMSampleBuffer { }*)arg1 showFrame:(bool)arg2;
- (void)dequeueAndDecodeForTimestamp:(unsigned int)arg1;
- (void)gatherRealtimeStats:(struct __CFDictionary { }*)arg1;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)handleAlarmForTimeStamp:(unsigned int)arg1;
- (bool)handleRemoteVideoAttributesChange:(struct __CVBuffer { }*)arg1;
- (id)initWithConfig:(struct tagVCVideoStreamReceiverConfig { struct tagHANDLE {} *x1; id x2; struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { int (*x_3_1_1)(); int (*x_3_1_2)(); } x3; struct opaqueRTCReporting {} *x4; unsigned int x5; int x6; id x7; bool x8; void *x9; int (*x10)(); id x11; }*)arg1;
- (void*)networkReceivePackets;
- (struct tagVCVideoPacketBufferConfig { unsigned short x1; unsigned int x2; int x3; void *x4; BOOL x5[200]; int x6; bool x7; bool x8; struct __CFAllocator {} *x9; bool x10; bool x11; bool x12; struct tagVCVideoPacketBufferFrameDecryptionCallbackContext { void *x_13_1_1; int (*x_13_1_2)(); } x13; struct tagVCVideoPacketBufferEnqueueFailedFrameToJitterBufferCallbackContext { void *x_14_1_1; int (*x_14_1_2)(); } x14; bool x15; struct tagVCNACKGenerator {} *x16; struct tagVCNACKGeneratorStoreBagsConfig { unsigned char x_17_1_1; float x_17_1_2; float x_17_1_3; bool x_17_1_4; float x_17_1_5[4]; float x_17_1_6[4]; } x17; })newVideoPacketBufferConfig:(struct _RTPMediaPacket { int x1; int x2; int x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned short x7; bool x8; double x9; bool x10; bool x11; bool x12; unsigned long long x13; unsigned short x14[12]; unsigned char x15; unsigned char x16; struct { int x_17_1_1; int x_17_1_2; bool x_17_1_3; unsigned long long x_17_1_4; } x17; unsigned long long x18; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer {} *x_19_1_1; unsigned long long x_19_1_2; char *x_19_1_3; } x19; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer {} *x_20_1_1; unsigned long long x_20_1_2; char *x_20_1_3; } x20; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer {} *x_21_1_1; unsigned long long x_21_1_2; char *x_21_1_3; } x21; bool x22; bool x23; bool x24; unsigned char x25; }*)arg1;
- (void)pauseVideo;
- (void)processReceptionReportBlock:(struct tagRTCP_RRB { unsigned int x1; unsigned int x2 : 8; unsigned int x3 : 24; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg1 blockCount:(unsigned int)arg2 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg3;
- (int)processVideoRTCP;
- (int)processVideoRTP;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (void)rtcpSendIntervalElapsed;
- (int)scheduleDecodeForFrameWithBuffer:(struct VCVideoReceiverSampleBuffer_t { struct __CFAllocator {} *x1; struct tagVCVideoDecodingArgs { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; unsigned short x_2_1_4; unsigned char x_2_1_5; bool x_2_1_6; unsigned short x_2_1_7; bool x_2_1_8; double x_2_1_9; int x_2_1_10; unsigned short x_2_1_11; bool x_2_1_12; bool x_2_1_13; unsigned short x_2_1_14; double x_2_1_15; bool x_2_1_16; int x_2_1_17; double x_2_1_18; bool x_2_1_19; bool x_2_1_20; bool x_2_1_21; bool x_2_1_22; unsigned long long x_2_1_23; bool x_2_1_24; unsigned int x_2_1_25; } x2; struct OpaqueCMBlockBuffer {} *x3; unsigned long long x4; struct OpaqueCMBlockBuffer {} *x5; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer {} *x_6_1_1; unsigned long long x_6_1_2; char *x_6_1_3; } x6; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer {} *x_7_1_1; unsigned long long x_7_1_2; char *x_7_1_3; } x7; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer {} *x_8_1_1; unsigned long long x_8_1_2; char *x_8_1_3; } x8; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer {} *x_9_1_1; unsigned long long x_9_1_2; char *x_9_1_3; } x9; }*)arg1 timestamp:(unsigned int)arg2 hostTime:(double)arg3 showFrame:(bool)arg4;
- (void)scheduleDecodeForTimestamp:(unsigned int)arg1;
- (void)scheduleVideoDecode:(unsigned int)arg1;
- (void)setEnableCVO:(bool)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)setEnableRateAdaptation:(bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setJitterBufferMode:(int)arg1;
- (void)setSyncSource:(id)arg1;
- (int)showDecodedFrame:(struct __CVBuffer { }*)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (int)startNetworkReceiveThread;
- (bool)startSynchronization:(id)arg1;
- (void)startVideo;
- (int)stopNetworkReceiveThread;
- (void)stopSynchronization;
- (void)stopVideo;
- (id)syncSource;
- (void)teardownDecodeSession:(bool)arg1;
- (void)updateSequenceNumber:(unsigned short)arg1;
- (void)updateSourcePlayoutTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (void)updateVideoStallStatus:(bool)arg1;

@end
