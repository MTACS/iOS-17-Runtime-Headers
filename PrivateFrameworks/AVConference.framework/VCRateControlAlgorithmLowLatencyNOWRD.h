
@interface VCRateControlAlgorithmLowLatencyNOWRD : VCRateControlAlgorithmBase {
    unsigned int  _actualSendBitrate;
    unsigned short  _echoedTimestamp;
    unsigned int  _fastRampDownBitrateRange;
    unsigned int  _instantBitrate;
    bool  _isRampUpSettling;
    bool  _isStable;
    double  _lastPositiveOWRDTime;
    double  _lastRampDownTime;
    double  _lastSendDataTime;
    unsigned int  _maxBurstyLoss;
    unsigned int  _newOWRDSampleCollected;
    double  _nwConnectionAvgDelay;
    unsigned int  _nwConnectionAvgThroughput;
    unsigned int  _nwConnectionMaxThroughput;
    unsigned int  _nwConnectionOverDelayThresholdCount;
    unsigned int  _nwConnectionPacketLossPerFrame;
    int  _nwConnectionRateTrendSuggestion;
    double  _previousNOWRD;
    unsigned short  _previousTimestamp;
    unsigned short  _queuingDelayTimestamp;
    double  _rampUpSettleDuration;
    double  _rateChangeSystemTime;
    unsigned int  _receiveTimestamp;
    double  _sendBitrateLimitedStartTime;
    double  _sendBitrateStartTime;
    bool  _shouldBlockRampUpForNWConnection;
    unsigned int  _timestampWrapAroundCounter;
}

- (id)init;
- (bool)setUpVTable;

@end
