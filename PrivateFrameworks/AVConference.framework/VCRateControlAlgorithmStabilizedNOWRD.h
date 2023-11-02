
@interface VCRateControlAlgorithmStabilizedNOWRD : VCRateControlAlgorithmBase {
    bool  _abnormalNetworkDetected;
    unsigned int  _additionalTierForRampDown;
    bool  _basebandAdaptationEnabled;
    int  _basebandAdditionalTiersForRampUp;
    unsigned int  _basebandAverageBitrate;
    double  _basebandExpectedQueuingDelay;
    double  _basebandLTEOrGreaterRATSwitchTime;
    double  _basebandNormalizedBDCD;
    double  _basebandNormalizedQueuingDelay;
    double  _basebandNotificationArrivalTime;
    int  _basebandRadioTechnology;
    unsigned int  _basebandTotalQueueDepth;
    int  _currentHistoryIndex;
    int  _currentHistorySize;
    unsigned short  _echoedTimestamp;
    double  _ecnCERatio;
    double  _extendedRampUpFrozenExitTime;
    unsigned int  _fastRampDownBitrateRange;
    double  _firstOWRDFrozenTime;
    struct tagVCRateControlHistoryElement { 
        double owrd; 
        double roundTripTime; 
        double roundTripTimeMinEnvelope; 
        double packetLossRate; 
        int tierIndex; 
    }  _history;
    double  _inAudioBitrate;
    double  _inVideoBitrate;
    bool  _isRampUpSettling;
    bool  _isRemoteBandwidthEstimationStable;
    bool  _isSmartBrakeCongestionTimeAboveThreshold;
    bool  _isStable;
    bool  _isWaitingForBasebandRampDown;
    double  _lastAllowRampUpTime;
    double  _lastBasebandRampDownTime;
    double  _lastHighNBDCDTime;
    double  _lastNetworkUnstableTime;
    double  _lastPositiveOWRDTime;
    unsigned int  _lastRateChangeCounter;
    double  _lastSmartBrakeEngageTime;
    unsigned int  _newOWRDSampleCollected;
    double  _outAudioBitrate;
    double  _outVideoBitrate;
    unsigned int  _packetBurstLoss;
    unsigned int  _packetReceivedVideo;
    double  _previousNOWRD;
    double  _previousRoundTripTime;
    unsigned short  _previousTimestamp;
    unsigned short  _queuingDelayTimestamp;
    unsigned int  _rampDownSuppressionBitrateThreshold;
    double  _rampUpFrozenDuration;
    double  _rampUpSettleDuration;
    double  _rateChangeSystemTime;
    unsigned int  _receiveTimestamp;
    double  _roundTripTimeMinEnvelope;
    unsigned int  _roundTripTimeTick;
    double  _sendBitrateLimitedStartTime;
    bool  _shouldSuppressRampDown;
    VCRateControlSmartBrake * _smartBrake;
    struct tagVCRateControlSmartBrakeInput { 
        float time; 
        float bitrate; 
        float owrd; 
        float rtt; 
        float aplr; 
        float vplr; 
    }  _smartBrakeInput;
    struct tagVCRateControlSmartBrakeOutput { 
        float networkCongestionProbability; 
        unsigned int bandwidth; 
        unsigned int bandwidthSigma; 
    }  _smartBrakeOutput;
    double  _stabilizationTime;
    unsigned int  _timestampWrapAroundCounter;
    bool  _withBTCoex;
}

- (void)dealloc;
- (id)init;
- (void)setLocalBandwidthEstimation:(unsigned int)arg1;
- (bool)setUpVTable;
- (unsigned int)worstRecentBurstLoss;
- (double)worstRecentRoundTripTime;

@end
