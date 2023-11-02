
@interface ATXModeHeuristicClassifier : NSObject <ATXModeClassifierClientModel, ATXModeFeaturizerDelegate> {
    <ATXModeClassifierClientModelDelegate> * _delegate;
    NSArray * _featurizers;
    _PASQueueLock * _lock;
    ATXModeLogger * _logger;
    double  _minUpdateInterval;
    ATXConfiguredModeService * _modeService;
    NSObject<OS_dispatch_queue> * _queue;
    ATXModeScheduler * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXModeClassifierClientModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_confidenceScoreForMode:(unsigned long long)arg1 fromAggregateFeatures:(id)arg2;
- (void)_currentModeUUID:(id*)arg1 userModeName:(id*)arg2 modeType:(unsigned long long*)arg3 confidenceScore:(double*)arg4 origin:(long long*)arg5 originBundleId:(id*)arg6 serializedTrigger:(id*)arg7 allowsSmartEntry:(bool*)arg8 guardedData:(id)arg9;
- (bool)_isUserWorkingFromHomeWithAggregateFeatures:(id)arg1;
- (long long)_originForMode:(unsigned long long)arg1 fromAggregateFeatures:(id)arg2;
- (unsigned long long)_predictModeWithFeature:(id)arg1;
- (void)_requestFeaturesFromAllFeaturizersAndUpdate;
- (id)_serializedTriggersForMode:(unsigned long long)arg1 fromAggregateFeatures:(id)arg2;
- (id)_triggersForMode:(unsigned long long)arg1 fromAggregateFeatures:(id)arg2;
- (void)_updateIfNeededWithGuardedData:(id)arg1;
- (void)_updateWithGuardedData:(id)arg1;
- (id)currentFeaturesInDictionary;
- (unsigned long long)currentMode;
- (void)currentModeUUID:(id*)arg1 userModeName:(id*)arg2 modeType:(unsigned long long*)arg3 confidenceScore:(double*)arg4 origin:(long long*)arg5 originBundleId:(id*)arg6 serializedTrigger:(id*)arg7 allowsSmartEntry:(bool*)arg8;
- (void)dealloc;
- (id)delegate;
- (void)featurizer:(id)arg1 didUpdateFeatures:(id)arg2;
- (id)init;
- (id)initWithDuetHelper:(id)arg1 configuredModeService:(id)arg2 locationManager:(id)arg3;
- (id)initWithFeaturizers:(id)arg1 minUpdateInterval:(double)arg2 duetHelper:(id)arg3 configuredModeService:(id)arg4;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)update;
- (void)updateWithFeatureSet:(id)arg1;
- (void)updateWithFeatureSet:(id)arg1 immediately:(bool)arg2 reply:(id /* block */)arg3;

@end
