
@interface WiFiUsageRangingSession : NSObject {
    double  _linkUpLatency;
    unsigned long long  _measurementFlags;
    long long  _measurementStatus;
    unsigned long long  _numRequestedMeasurements;
    unsigned long long  _numValidMeasurements;
    unsigned long long  _peerChannelFlags;
    NSDate * _peerDiscoveryTimestamp;
    unsigned long long  _peerMainChannel;
    unsigned long long  _peerPreferredChannel;
    NSDate * _rangingCompletionTimestamp;
    double  _rangingLatency;
    NSDate * _rangingStartedTimestamp;
    NSString * _requester;
    NSMutableArray * _rttSamples;
    unsigned long long  _selfChannelFlags;
    unsigned long long  _selfMainChannel;
    unsigned long long  _selfPreferredChannel;
    NSDate * _sessionLinkUpTimestamp;
    NSDate * _sessionStartTimestamp;
}

- (void).cxx_destruct;
- (void)addRangingRttSampleWithRssi:(long long)arg1 rtt:(long long)arg2 snr:(unsigned long long)arg3 flags:(unsigned long long)arg4 channel:(unsigned long long)arg5 coreId:(unsigned long long)arg6 bitErrorRate:(unsigned long long)arg7 phyError:(unsigned long long)arg8 andPeerSnr:(unsigned long long)arg9 andPeerCoreId:(unsigned long long)arg10 andPeerBitErrorRate:(unsigned long long)arg11 andPeerPhyError:(unsigned long long)arg12;
- (id)init;
- (id)metricName;
- (void)rangingCompletedWithValidCount:(unsigned long long)arg1 resultStatus:(long long)arg2 resultFlags:(unsigned long long)arg3;
- (void)rangingLinkUp;
- (void)rangingSessionRequestedWithSelfPreferredChannel:(unsigned long long)arg1 selfMainChannel:(unsigned long long)arg2 selfChannelFlags:(unsigned long long)arg3 peerPreferredChannel:(unsigned long long)arg4 peerMainChannel:(unsigned long long)arg5 peerChannelFlags:(unsigned long long)arg6 requester:(id)arg7;
- (void)rangingStartedWithNumMeasurements:(unsigned long long)arg1;
- (id)sessionSummary:(bool)arg1;

@end
