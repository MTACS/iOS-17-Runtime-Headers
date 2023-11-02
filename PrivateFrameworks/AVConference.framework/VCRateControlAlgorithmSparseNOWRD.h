
@interface VCRateControlAlgorithmSparseNOWRD : VCRateControlAlgorithmBase {
    unsigned int  _actualSendBitrate;
    double  _averageRoundTripTime;
    bool  _basebandAdaptationEnabled;
    int  _basebandAdditionalTiersForRampUp;
    unsigned int  _basebandAverageBitrate;
    double  _basebandExpectedQueuingDelay;
    double  _basebandNormalizedBDCD;
    double  _basebandNormalizedQueuingDelay;
    double  _basebandNotificationArrivalTime;
    unsigned int  _basebandTotalQueueDepth;
    int  _deviationChangeCount;
    unsigned int  _expectedBitrate;
    unsigned int  _instantBitrate;
    bool  _isTargetBitrateOscillating;
    bool  _isWaitingForBasebandRampDown;
    double  _lastAllowRampUpTime;
    double  _lastBasebandRampDownTime;
    double  _lastCongestionTime;
    double  _lastEmergencyBasebandRampDownTime;
    double  _lastHighNBDCDTime;
    double  _lastRampUpTime;
    double  _lastTimeDetectNoOscillation;
    double  _pauseStartTime;
    double  _previousStatisticsArrivalTime;
    unsigned short  _previousTimestamp;
    double  _recentAverageTier;
    int  _recentTierWindow;
    unsigned int  _recentTierWindowIndex;
    unsigned int  _recentTierWindowSize;
    unsigned int  _roundTripTimeTick;
    double  _statisticsArrivalTime;
    unsigned int  _timestampWrapAroundCounter;
    unsigned int  _totalPacketSent;
    unsigned int  _totalTierNumbersInWindow;
}

@property (nonatomic, readonly) bool basebandAdaptationEnabled;

- (bool)basebandAdaptationEnabled;
- (id)init;
- (bool)setUpVTable;

@end
