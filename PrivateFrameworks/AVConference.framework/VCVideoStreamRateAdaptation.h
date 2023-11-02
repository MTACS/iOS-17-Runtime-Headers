
@interface VCVideoStreamRateAdaptation : VCMediaStreamRateAdaptation {
    double  _adaptationTime;
    double  _averageBitrateWindowDuration;
    bool  _downlinkQualityDidChange;
    bool  _isOperatingAtMaxBitrate;
    bool  _isOperatingAtMinBitrate;
    double  _maxOWRD;
    unsigned int  _operatingBitrate;
    double  _packetLossPercentage;
    bool  _rateAdaptationEnabled;
    VCVideoStreamRateController * _rateController;
    unsigned int  _receivedTmmbnBitrate;
    struct opaqueRTCReporting { } * _reportingAgent;
    int  _reportingModuleID;
    struct tagHANDLE { int x1; } * _rtpHandle;
    unsigned int  _sendTmmbrBitrate;
    VCMediaStreamStats * _stats;
    double  _tmmbRTT;
    double  _tmmbnReceiveTime;
    double  _tmmbrSendTime;
}

@property (nonatomic, readonly) bool isOperatingAtMaxBitrate;
@property (nonatomic, readonly) bool isOperatingAtMinBitrate;
@property (nonatomic) double maxOWRD;
@property (nonatomic, readonly) double nowrd;
@property (nonatomic, readonly) double nowrdAcc;
@property (nonatomic, readonly) double nowrdShort;
@property (nonatomic, readonly) unsigned int operatingBitrate;
@property (nonatomic, readonly) double owrd;
@property (nonatomic, readonly) double packetLossPercentage;
@property (nonatomic, readonly) double roundTripTime;
@property (nonatomic, readonly) struct tagHANDLE { int x1; }*rtpHandle;
@property (nonatomic, readonly) unsigned int sendTmmbrBitrate;
@property (nonatomic, retain) VCMediaStreamStats *stats;

- (unsigned int)averageReceivedBitrate;
- (id)className;
- (void)dealloc;
- (id)initWithMediaStreamRateAdaptationParam:(const struct tagVCMediaStreamRateAdaptationParams { id x1; unsigned int x2; struct opaqueRTCReporting {} *x3; int x4; struct tagVCMediaStreamRateAdaptationConfig { long long x_5_1_1; union tagVCMediaStreamRateAdaptationAlgorithmConfig { struct tagVCMediaStreamRateAdaptationConfigTelephonyUplink { unsigned int x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; } x_2_2_1; struct tagVCMediaStreamRateAdaptationConfigScreenShare { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; int x_2_3_4; } x_2_2_2; } x_5_1_2; } x5; struct tagHANDLE {} *x6; int x7; bool x8; id x9; id x10; }*)arg1;
- (bool)isOperatingAtMaxBitrate;
- (bool)isOperatingAtMinBitrate;
- (double)maxOWRD;
- (double)nowrd;
- (double)nowrdAcc;
- (double)nowrdShort;
- (unsigned int)operatingBitrate;
- (double)owrd;
- (double)packetLossPercentage;
- (void)receivedTMMBN:(unsigned int)arg1;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (double)roundTripTime;
- (struct tagHANDLE { int x1; }*)rtpHandle;
- (bool)runVideoStreamRateAdaptation;
- (void)scheduleTMMBR:(unsigned int)arg1;
- (unsigned int)sendTmmbrBitrate;
- (void)setEnableRateAdaptation:(bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setMaxOWRD:(double)arg1;
- (void)setOperatingBitrate:(unsigned int)arg1;
- (void)setStats:(id)arg1;
- (id)stats;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3 size:(unsigned int)arg4 endOfFrame:(bool)arg5;
- (void)updateVideoStall:(bool)arg1 withStallDuration:(unsigned int)arg2;

@end
