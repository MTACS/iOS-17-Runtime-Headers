
@interface VCMediaStreamSendGroup : VCMediaStreamGroup {
    unsigned int  _currentUplinkTargetBitrate;
    unsigned int  _currentUplinkTotalBitrate;
    bool  _isRedundancyEnabled;
    bool  _isRemoteOnPeace;
    bool  _isRetransmissionEnabled;
    bool  _isSourceTimestampInfoAvailable;
    bool  _isSuspended;
    double  _lastSentSourceHostTime;
    unsigned int  _lastSentSourceSampleTime;
    NSMutableArray * _peerSubscribedStreams;
    <VCRedundancyControllerProtocol> * _redundancyController;
    NSMutableDictionary * _sendGroupConfigForMode;
    bool  _shouldSynchronizeWithSourceRTPTimestamps;
    double  _sourceSampleRate;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _sourceTimestampRWLock;
    unsigned int  _streamGroupMode;
    unsigned int  _uplinkBitrateCapCell;
    unsigned int  _uplinkBitrateCapWifi;
}

@property (nonatomic) unsigned int currentUplinkTargetBitrate;
@property (nonatomic) unsigned int currentUplinkTotalBitrate;
@property (setter=setRetransmissionEnabled:, nonatomic) bool isRetransmissionEnabled;
@property (nonatomic) bool isSuspended;
@property (nonatomic, retain) <VCRedundancyControllerProtocol> *redundancyController;
@property (nonatomic) unsigned int uplinkBitrateCapCell;
@property (nonatomic) unsigned int uplinkBitrateCapWifi;

- (id)activeStreamKeys;
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg1;
- (id)checkStreamsForAdditionalOptIn:(id)arg1;
- (unsigned int)currentUplinkTargetBitrate;
- (unsigned int)currentUplinkTotalBitrate;
- (void)dealloc;
- (void)didPause:(bool)arg1;
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; unsigned char x2; struct tagRTCPPACKET {} *x3[10]; struct OpaqueCMBlockBuffer {} *x4; char *x5; unsigned long long x6; unsigned int x7; unsigned char x8[1472]; unsigned short x9[12]; unsigned char x10; bool x11; unsigned long long x12; struct { struct _RTCPPacketList {} *x_13_1_1; } x13; }*)arg1;
- (void)didReceiveReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (void)didStart;
- (void)didStop;
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;
- (void)dispatchedUpdateStreamsWithActiveConnection:(id)arg1;
- (bool)enableRedundancy:(bool)arg1;
- (id)initWithConfig:(id)arg1;
- (bool)isRetransmissionEnabled;
- (bool)isSuspended;
- (id)mediaStreamInfosForEndToEndConnection:(bool)arg1;
- (id)peerSubscribedStreams;
- (id)redundancyController;
- (void)setActiveConnection:(id)arg1 uplinkBitrateCap:(unsigned int)arg2 activeMediaStreamIDs:(id)arg3 mediaBitrates:(id)arg4 rateChangeCounter:(unsigned int)arg5;
- (void)setCurrentUplinkTargetBitrate:(unsigned int)arg1;
- (void)setCurrentUplinkTotalBitrate:(unsigned int)arg1;
- (void)setIsSuspended:(bool)arg1;
- (void)setRedundancyController:(id)arg1;
- (void)setRetransmissionEnabled:(bool)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (bool)setStreamGroupMode:(unsigned int)arg1;
- (void)setUplinkBitrateCapCell:(unsigned int)arg1;
- (void)setUplinkBitrateCapWifi:(unsigned int)arg1;
- (bool)setupStreamGroupWithConfig:(id)arg1;
- (bool)shouldCompoundListIgnoreStream:(id)arg1 streamConfig:(id)arg2 activeStreamIds:(id)arg3;
- (bool)shouldSubscribeToStreamID:(id)arg1 peerSubscribedStreams:(id)arg2;
- (id)streamDescriptionForMediaStreamConfig:(id)arg1;
- (id)streamGroupConfigForMode:(unsigned int)arg1;
- (unsigned int)streamGroupMode;
- (void)updateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;
- (void)updateActiveStreamsCount:(unsigned int)arg1;
- (bool)updateConfig:(id)arg1 forMode:(unsigned int)arg2;
- (void)updateEnabledState;
- (void)updateEncryptionInformationWithConfig:(id)arg1;
- (bool)updatePeerSubscribedStreams:(id)arg1 containsRepairStreams:(bool)arg2;
- (void)updateStreamIDCompoundingWithBlock:(id /* block */)arg1 activeStreamIds:(id)arg2;
- (void)updateUplinkBitrateCapCell:(unsigned int)arg1 activeStreamIDs:(id)arg2;
- (void)updateUplinkBitrateCapWifi:(unsigned int)arg1 activeStreamIDs:(id)arg2;
- (bool)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;
- (unsigned int)uplinkBitrateCapCell;
- (unsigned int)uplinkBitrateCapWifi;

@end
