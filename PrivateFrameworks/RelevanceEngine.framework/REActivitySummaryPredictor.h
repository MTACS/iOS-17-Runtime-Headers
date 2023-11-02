
@interface REActivitySummaryPredictor : REPredictor <REActivitySummaryPredictorProperties> {
    float  _activeEnergyPercentComplete;
    float  _exerciseTimePercentComplete;
    NSSet * _queries;
    float  _standHourPercentComplete;
}

@property float activeEnergyPercentComplete;
@property float exerciseTimePercentComplete;
@property float standHourPercentComplete;

+ (id)supportedFeatures;
+ (double)updateInterval;

- (void).cxx_destruct;
- (id)_init;
- (void)_runQuery:(id)arg1;
- (void)_startActivitySummaryQueryWithRetries:(long long)arg1;
- (void)_stopQueries;
- (void)_stopQuery:(id)arg1;
- (void)_updateWithActivitySummary:(id)arg1 completion:(id /* block */)arg2;
- (float)activeEnergyPercentComplete;
- (float)exerciseTimePercentComplete;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)pause;
- (void)resume;
- (void)setActiveEnergyPercentComplete:(float)arg1;
- (void)setExerciseTimePercentComplete:(float)arg1;
- (void)setStandHourPercentComplete:(float)arg1;
- (float)standHourPercentComplete;
- (void)update;

@end
