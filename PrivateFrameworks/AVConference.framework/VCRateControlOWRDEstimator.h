
@interface VCRateControlOWRDEstimator : NSObject {
    unsigned int  _abnormalOWRDSampleCount;
    double  _averageReceiveInterval;
    double  _averageSendInterval;
    double  _firstReceiveTime;
    unsigned int  _firstReceiveTimestamp;
    double  _firstSendTime;
    unsigned int  _firstSendTimestamp;
    double  _longAverageLag;
    unsigned int  _mode;
    double  _owrd;
    unsigned int  _previousReceiveTimestamp;
    unsigned int  _previousReceiveTimestampDiff;
    unsigned int  _previousSendTimestamp;
    unsigned int  _previousSendTimestampDiff;
    bool  _receiveTimestampSpikeDetected;
    unsigned long long  _receiveTimestampWrappedAround;
    bool  _sendTimestampSpikeDetected;
    unsigned long long  _sendTimestampWrappedAround;
    double  _shortAverageLag;
    bool  _useUINT16;
}

@property (nonatomic) unsigned int mode;
@property (nonatomic, readonly) double owrd;

- (void)calculateOWRDWithSendTime:(double)arg1 receiveTime:(double)arg2 roundTripTime:(double)arg3;
- (bool)detectAbnormalOWRDWithRoundTripTime:(double)arg1;
- (bool)detectOutOfOrderAndSpikeWithReceiveTimestamp:(unsigned int)arg1;
- (bool)detectOutOfOrderAndSpikeWithSendTimestamp:(unsigned int)arg1;
- (unsigned int)mode;
- (double)owrd;
- (double)relativeReceiveTimeWithTimestamp:(unsigned int)arg1 timestampRate:(unsigned int)arg2;
- (double)relativeSendTimeWithTimestamp:(unsigned int)arg1 timestampRate:(unsigned int)arg2;
- (void)resetOWRDEstimation;
- (void)setMode:(unsigned int)arg1;

@end
