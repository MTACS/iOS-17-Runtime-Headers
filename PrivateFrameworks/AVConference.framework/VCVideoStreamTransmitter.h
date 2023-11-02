
@interface VCVideoStreamTransmitter : VCVideoTransmitterBase {
    char * _buffer;
    struct opaqueCMBufferQueue { } * _bufferQueue;
    NSObject<OS_dispatch_semaphore> * _bufferQueueSemaphore;
    unsigned long long  _bufferSize;
    unsigned long long  _cvoExtensionID;
    unsigned int  _dwRefreshFrameCounter;
    bool  _enableCVO;
    struct { 
        struct { /* ? */ } *encoderVTable; 
        int type; 
        struct tagHANDLE {} *encoderHandle; 
    }  _encoder;
    struct tagVCRealTimeThread { unsigned int x1; unsigned int x2; struct _opaque_pthread_mutex_t { long long x_3_1_1; BOOL x_3_1_2[56]; } x3; id x4; int (*x5)(); void *x6; struct OpaqueFigThread {} *x7; int x8; BOOL x9[60]; unsigned int x10; unsigned int x11; } * _encoderThread;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _encodingArgPool;
    bool  _forceDisableBitrateCap;
    int  _iSMBCount;
    unsigned int  _keyFrameIntervalDuration;
    unsigned char  _lastCameraStatusBits;
    unsigned long long  _lastKeyFrameSampleBufferSize;
    int  _maxPacketCount;
    int * _packetFlags;
    int * _packetSizes;
    unsigned short  _recommendedMTU;
    struct opaqueRTCReporting { } * _reportingAgent;
    double  _reportingIntervalStartTime;
    double  _reportingLastUpdateTime;
    int  _reportingModuleID;
    int  _shouldGenerateKeyFrame;
    AVCStatisticsCollector * _statisticsCollector;
    VCMediaStreamStats * _stats;
    bool  _terminateEncoderThread;
    unsigned int  _tilesPerFrame;
    unsigned long long  _totalBytesSent;
    unsigned int  _totalKeyFramesSent;
    unsigned int  _totalPacketsSent;
    NSObject<OS_dispatch_queue> * _transmitterQueue;
    long long  _videoCodecType;
    struct __CFAllocator { } * _videoPacketAllocator;
    struct tagHANDLE { int x1; } * _videoRTP;
    int  _videoSource;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _xMBs;
}

- (void)dealloc;
- (void)encodeVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct __CFDictionary { }*)forceKeyFrameProperties;
- (void)gatherRealtimeStats:(struct __CFDictionary { }*)arg1;
- (void)generateKeyFrameWithFIRType:(int)arg1;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)handleThermalLevelChange:(int)arg1;
- (void)initVideoCompressionWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 bitrate:(unsigned int)arg3 keyFrameIntervalDuration:(unsigned int)arg4;
- (id)initWithConfig:(id)arg1;
- (bool)isKeyFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)prependSPSPPS:(unsigned long long*)arg1 dataPointer:(char *)arg2 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (bool)setEncodingMode:(int)arg1;
- (void)setFECRedundancyVector:(const struct { unsigned short x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2[32]; }*)arg1;
- (void)setKeyFrameOnlyStreamID:(unsigned short)arg1;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; }*)arg1;
- (void)setStreamIDs:(unsigned short*)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short*)arg3 numOfRepairedStreamIDs:(unsigned char)arg4;
- (void)setTargetBitrate:(unsigned int)arg1;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;
- (void)startVideo;
- (void)stopVideo;
- (void)transmitEncodedVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 cameraStatusBits:(unsigned char)arg2;
- (int)transmitEncodedVideoFrame:(char *)arg1 size:(unsigned long long)arg2 timestamp:(unsigned int)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5;
- (int)transmitFrameInGroups:(char *)arg1 numOfPackets:(int)arg2 timestamp:(unsigned int)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5;
- (int)transmitVideoPackets:(const char *)arg1 packetSizes:(int*)arg2 startPacket:(int)arg3 packetCount:(int)arg4 lastGroup:(int)arg5 timestamp:(unsigned int)arg6 hostTime:(double)arg7 cameraStatusBits:(unsigned char)arg8 bytesSent:(int*)arg9;
- (void)updateSendStatisticsWithTimestamp:(unsigned int)arg1 frameSize:(unsigned int)arg2 packetsInFrame:(unsigned int)arg3;
- (void)updateWindowState:(int)arg1 isLocal:(bool)arg2 windowRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
