
@interface VCVideoStreamRateAdaptationFeedbackOnly : VCVideoStreamRateAdaptation {
    bool  _didReceiveVideo;
    unsigned int  _lastTimestamp;
    double  _lastTimestampReceiveTime;
    unsigned int  _previousRTPTimestamp;
    NSObject<OS_dispatch_source> * _rateControlFeedbackSource;
    AVCStatisticsCollector * _statisticsCollector;
    unsigned int  _totalPacketsReceived;
    bool  _useLowPrecisionEchoTimeStamp;
}

@property (nonatomic) bool didReceiveVideo;

- (void)dealloc;
- (bool)didReceiveVideo;
- (id)initWithMediaStreamRateAdaptationParam:(const struct tagVCMediaStreamRateAdaptationParams { id x1; unsigned int x2; struct opaqueRTCReporting {} *x3; int x4; struct tagVCMediaStreamRateAdaptationConfig { long long x_5_1_1; union tagVCMediaStreamRateAdaptationAlgorithmConfig { struct tagVCMediaStreamRateAdaptationConfigTelephonyUplink { unsigned int x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; } x_2_2_1; struct tagVCMediaStreamRateAdaptationConfigScreenShare { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; int x_2_3_4; } x_2_2_2; } x_5_1_2; } x5; struct tagHANDLE {} *x6; int x7; bool x8; id x9; id x10; }*)arg1;
- (double)owrd;
- (void)sendRateControlFeedback;
- (void)setDidReceiveVideo:(bool)arg1;
- (void)setEnableRateAdaptation:(bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)startFeedbackSource;
- (void)stopFeedbackSource;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3 size:(unsigned int)arg4 endOfFrame:(bool)arg5;
- (void)updateRateControlInfoWithStatisticsMessage:(struct tagVCStatisticsMessage { int x1; int x2; double x3; bool x4; bool x5; bool x6; bool x7; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_8_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; double x_2_2_13; double x_2_2_14; unsigned int x_2_2_15; unsigned int x_2_2_16; double x_2_2_17; unsigned int x_2_2_18; bool x_2_2_19; struct { int x_20_3_1; unsigned int x_20_3_2; unsigned int x_20_3_3; unsigned int x_20_3_4; double x_20_3_5; double x_20_3_6; double x_20_3_7; unsigned int x_20_3_8; unsigned int x_20_3_9; } x_2_2_20; struct { unsigned short x_21_3_1; bool x_21_3_2; bool x_21_3_3; unsigned int x_21_3_4; } x_2_2_21; struct tagVCStatisticsECNStats { unsigned short x_22_3_1; unsigned short x_22_3_2; } x_2_2_22; struct tagVCStatisticsECNStats { unsigned short x_23_3_1; unsigned short x_23_3_2; } x_2_2_23; bool x_2_2_24; } x_8_1_2; } x8; })arg1;

@end
