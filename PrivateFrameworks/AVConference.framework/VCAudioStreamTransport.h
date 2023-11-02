
@interface VCAudioStreamTransport : VCMediaStreamTransport <WRMClientDelegate> {
    struct _VCAudioStreamTransportRealtimeContext { 
        struct tagWRMMetricsInfo { 
            bool bInitialized; 
            struct tagHANDLE {} *hRTPHandle; 
            unsigned int dwReportInterval; 
            unsigned int dwWrmTime; 
            unsigned int dwPlaybackCount; 
            unsigned int dwPlaybackCountSpeech; 
            unsigned int dwErasureCount; 
            unsigned int dwErasureSilence; 
            unsigned int videoFrameErasureCount; 
            unsigned int dwTimeOfLastRRPacket; 
            unsigned int dwEstimatedRTTMilliSeconds; 
            unsigned int dwJitter; 
            unsigned int dwTotalPacketRecv; 
            unsigned int dwDTXPacketRecv; 
            unsigned long long callId; 
            unsigned long long nominalJitterBufferDelay; 
            unsigned long long targetJitterQueueSize; 
            int nFraction; 
            int (*reportWRMMetricsCallback)(); 
            struct { 
                void *info; 
                int (*retain)(); 
                int (*release)(); 
            } wrmMetricsReportingContext; 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } wrmMetricsReportingLock; 
            unsigned int dwInternalTSRate; 
            unsigned int dwPacketSent; 
            unsigned int isCallAudioOnly; 
            unsigned int bwEstimation; 
            unsigned int targetBitrate; 
            unsigned int oneWayRelativeDelay; 
            unsigned int adaptationPacketLossPercentage; 
            unsigned int isLocalCellular; 
            unsigned int isVideoPaused; 
            unsigned long long linkType; 
            unsigned int primaryVideoPacketReceived; 
            unsigned int primaryAudioPacketReceived; 
            unsigned int totalVideoPacketReceived; 
            unsigned int totalAudioPacketReceived; 
            unsigned int totalVideoPacketExpected; 
            unsigned int totalAudioPacketExpected; 
        } wrmInfo; 
        struct tagHANDLE {} *rtpHandle; 
    }  _realtimeContext;
    WRMClient * _wrmClient;
}

@property (nonatomic, readonly) void*realtimeContext;

- (void)dealloc;
- (id)initWithHandle:(struct tagHANDLE { int x1; }*)arg1 callId:(unsigned int)arg2 localSSRC:(unsigned int)arg3;
- (id)initWithHandle:(struct tagHANDLE { int x1; }*)arg1 callId:(unsigned int)arg2 localSSRC:(unsigned int)arg3 enableNetworkMonitor:(bool)arg4;
- (int)onStart;
- (void)onStop;
- (void*)realtimeContext;
- (void)reportWRMMetrics:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; }*)arg1;
- (void)setPreWarmState:(bool)arg1;
- (void)setWRMCallId:(unsigned int)arg1;
- (void)setWRMCoexMetrics:(id)arg1;
- (void)setWRMMetricConfig:(struct { unsigned long long x1; }*)arg1;
- (void)setWRMNotification:(struct { int x1; int x2; unsigned long long x3; BOOL x4[128]; unsigned long long x5; unsigned long long x6; }*)arg1;
- (void)startWRM;
- (void)stopWRM;

@end
