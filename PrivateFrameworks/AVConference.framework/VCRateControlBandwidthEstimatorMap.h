
@interface VCRateControlBandwidthEstimatorMap : NSObject {
    int  _bandwidthEstimationState;
    unsigned int  _currentActiveEstimatorID;
    VCRateControlBandwidthEstimator * _defaultEstimator;
    double  _estimatedBandwidth;
    double  _estimatedBandwidthUncapped;
    NSMutableDictionary * _estimatorMap;
    bool  _fastSuddenBandwidthDetectionEnabled;
    void * _logBWEDump;
    unsigned int  _mode;
    unsigned int  _radioAccessTechnology;
    VCRateControlServerBag * _serverBag;
    int  _state;
}

@property (nonatomic, readonly) int bandwidthEstimationState;
@property (nonatomic) double estimatedBandwidth;
@property (nonatomic) double estimatedBandwidthUncapped;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic, retain) VCRateControlServerBag *serverBag;

- (int)bandwidthEstimationState;
- (void)dealloc;
- (double)estimatedBandwidth;
- (double)estimatedBandwidthUncapped;
- (id)init;
- (unsigned int)mode;
- (unsigned int)radioAccessTechnology;
- (id)serverBag;
- (void)setEstimatedBandwidth:(double)arg1;
- (void)setEstimatedBandwidthUncapped:(double)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setRadioAccessTechnology:(unsigned int)arg1;
- (void)setServerBag:(id)arg1;

@end
