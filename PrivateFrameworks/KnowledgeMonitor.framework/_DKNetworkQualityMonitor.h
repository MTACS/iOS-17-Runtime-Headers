
@interface _DKNetworkQualityMonitor : _DKMonitor <NWNetworkOfInterestManagerDelegate> {
    _CDContextualKeyPath * _discretionaryInvitedKeyPath;
    bool  _enabled;
    bool  _initialized;
    long long  _interfaceType;
    NWNetworkOfInterest * _noi;
    NSArray * _noiKeyPaths;
    NWNetworkOfInterestManager * _noiManager;
    NSObject<OS_dispatch_queue> * _noiManagerQueue;
    _CDContextualKeyPath * _predictedQualityKeyPath;
    long long  _previousQuality;
    _CDContextualKeyPath * _qualityKeyPath;
    NSMutableDictionary * _statusDictionary;
    _CDContextualKeyPath * _statusKeyPath;
}

@property (nonatomic, retain) _CDContextualKeyPath *discretionaryInvitedKeyPath;
@property (nonatomic) bool enabled;
@property (nonatomic) bool initialized;
@property (nonatomic) long long interfaceType;
@property (nonatomic, retain) NWNetworkOfInterest *noi;
@property (nonatomic, retain) NSArray *noiKeyPaths;
@property (nonatomic, retain) NWNetworkOfInterestManager *noiManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *noiManagerQueue;
@property (nonatomic, retain) _CDContextualKeyPath *predictedQualityKeyPath;
@property (nonatomic) long long previousQuality;
@property (nonatomic, retain) _CDContextualKeyPath *qualityKeyPath;
@property (nonatomic, retain) NSMutableDictionary *statusDictionary;
@property (nonatomic, retain) _CDContextualKeyPath *statusKeyPath;

+ (id)entitlements;

- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (void)didStartTrackingNOI:(id)arg1;
- (void)didStopTrackingAllNOIs:(id)arg1;
- (void)didStopTrackingNOI:(id)arg1;
- (id)discretionaryInvitedKeyPath;
- (bool)enabled;
- (id)initForInterfaceType:(long long)arg1 connectionStatusKeyPath:(id)arg2 qualityKeyPath:(id)arg3 predictedQualityKeyPath:(id)arg4 discretionaryInvitedPath:(id)arg5;
- (bool)initialized;
- (long long)interfaceType;
- (id)loadState;
- (id)noi;
- (id)noiKeyPaths;
- (id)noiManager;
- (id)noiManagerQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)predictedQualityKeyPath;
- (id)predictionTimelineFromNOIPredictions:(id)arg1;
- (long long)previousQuality;
- (id)qualityKeyPath;
- (void)saveState;
- (void)setDiscretionaryInvitedKeyPath:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setInitialized:(bool)arg1;
- (void)setInterfaceType:(long long)arg1;
- (void)setNoi:(id)arg1;
- (void)setNoiKeyPaths:(id)arg1;
- (void)setNoiManager:(id)arg1;
- (void)setNoiManagerQueue:(id)arg1;
- (void)setPredictedQualityKeyPath:(id)arg1;
- (void)setPreviousQuality:(long long)arg1;
- (void)setQualityKeyPath:(id)arg1;
- (void)setStatusDictionary:(id)arg1;
- (void)setStatusKeyPath:(id)arg1;
- (void)start;
- (id)statusDictionary;
- (id)statusKeyPath;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)updateDiscretionaryTrafficInvited;
- (void)updateInstantQuality;
- (void)updateInterfaceClass;
- (void)updatePowerCostDL;
- (void)updatePowerCostUL;
- (void)updatePredictionAsync;

@end
