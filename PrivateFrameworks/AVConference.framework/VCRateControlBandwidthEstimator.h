
@interface VCRateControlBandwidthEstimator : NSObject {
    int  _bandwidthDivergeCount;
    int  _bandwidthEstimationState;
    unsigned int  _earlyBytesInProbingSequence;
    unsigned int  _earlyPacketsInProbingSequence;
    double  _earlyProbingPacketArrivalTime;
    double  _estimatedBandwidth;
    double  _estimatedBandwidthUncapped;
    bool  _fastSuddenBandwidthDetectionEnabled;
    double  _firstDivergeTime;
    bool  _isFirstBWEstimationReleased;
    bool  _isInitialized;
    double  _lastPacketInProbingSequenceArrivalTime;
    unsigned int  _lastProbingSequenceReferenceTimestamp;
    unsigned int  _lastProbingSequenceTimestamp;
    void * _logBWEDump;
    double  _maxDetectableBandwidth;
    unsigned int  _maxOverRangePacketsCount;
    double  _minEstimationWindowDuration;
    unsigned int  _minPacketsCount;
    unsigned int  _minProbingSequenceSize;
    unsigned int  _mode;
    unsigned int  _overRangePacketsCount;
    unsigned int  _radioAccessTechnology;
    double  _referencePacketArrivalTime;
    unsigned int  _referencePacketDataSize;
    VCRateControlServerBag * _serverBag;
    double  _suddenChangeBandwidthBuffer;
    int  _suddenChangeBandwidthBufferIndex;
    SuddenChangeParameters * _suddenChangeParameters;
    double  _totalBandwidth;
    unsigned int  _totalBytesInProbingSequence;
    unsigned int  _totalPacketsInProbingSequence;
}

@property (nonatomic, readonly) int bandwidthEstimationState;
@property (nonatomic) double estimatedBandwidth;
@property (nonatomic) double estimatedBandwidthUncapped;
@property (nonatomic, readonly) bool fastSuddenBandwidthDetectionEnabled;
@property (nonatomic, readonly) double lastProbingArrivalTime;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic, retain) VCRateControlServerBag *serverBag;

- (int)bandwidthEstimationState;
- (void)dealloc;
- (void)enableBWELogDump:(void*)arg1;
- (double)estimatedBandwidth;
- (double)estimatedBandwidthUncapped;
- (bool)fastSuddenBandwidthDetectionEnabled;
- (id)init;
- (double)lastProbingArrivalTime;
- (unsigned int)mode;
- (unsigned int)radioAccessTechnology;
- (id)serverBag;
- (void)setEstimatedBandwidth:(double)arg1;
- (void)setEstimatedBandwidthUncapped:(double)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setRadioAccessTechnology:(unsigned int)arg1;
- (void)setServerBag:(id)arg1;

@end
