
@interface REMLModel : NSObject <REMLModelProperties> {
    bool  _allowsExploreExploit;
    float  _exploreExploitModulator;
    bool  _implementsDebugSaving;
    NSString * _metricsInteraction;
    <RERelevanceEngineMetricsRecorder> * _metricsRecorder;
    REConcurrentDictionary * _predictionCache;
    float  _priorMean;
    float  _simulationExploreExploitModulator;
    float  _varianceEpsilon;
    bool  _wantsPredictionCache;
}

@property (nonatomic) bool allowsExploreExploit;
@property (nonatomic, readonly) float averagePrediction;
@property (nonatomic) float exploreExploitModulator;
@property (nonatomic, readonly) unsigned long long featureBitWidth;
@property (nonatomic, readonly) long long getNumberOfCoordinates;
@property (nonatomic, readonly) unsigned long long maxFeatureCount;
@property (nonatomic, retain) NSString *metricsInteraction;
@property (nonatomic, retain) <RERelevanceEngineMetricsRecorder> *metricsRecorder;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) float normalizedEntropy;
@property (nonatomic) float priorMean;
@property (nonatomic) float simulationExploreExploitModulator;
@property (nonatomic, readonly) unsigned long long totalExampleCount;
@property (nonatomic, readonly) unsigned long long totalPositiveCount;
@property (nonatomic) float varianceEpsilon;

+ (unsigned long long)featureBitWidth;
+ (unsigned long long)maxFeatureCount;
+ (id)modelWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3;

- (void).cxx_destruct;
- (void)_clearCache;
- (void)_clearModel;
- (float)_getAveragePrediction;
- (float)_getNormalizedEntropy;
- (long long)_getNumberOfCoordinates;
- (unsigned long long)_getTotalExampleCount;
- (unsigned long long)_getTotalPositiveCount;
- (bool)_loadModelFromURL:(id)arg1 error:(id*)arg2;
- (id)_predictWithFeatures:(id)arg1;
- (bool)_saveDebugModelToURL:(id)arg1 error:(id*)arg2;
- (bool)_saveModelToURL:(id)arg1 error:(id*)arg2;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (bool)allowsExploreExploit;
- (float)averagePrediction;
- (void)clearModel;
- (float)exploreExploitModulator;
- (unsigned long long)featureBitWidth;
- (long long)getNumberOfCoordinates;
- (id)init;
- (id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3;
- (bool)loadModelFromURL:(id)arg1 error:(id*)arg2;
- (void)logCoreAnalyticsMetrics;
- (unsigned long long)maxFeatureCount;
- (id)metricsInteraction;
- (id)metricsRecorder;
- (id)name;
- (float)normalizedEntropy;
- (id)predictWithFeatures:(id)arg1;
- (id)predictionSetWithFeatures:(id)arg1;
- (float)priorMean;
- (bool)requiresDirectory;
- (bool)saveModelToURL:(id)arg1 error:(id*)arg2;
- (void)setAllowsExploreExploit:(bool)arg1;
- (void)setExploreExploitModulator:(float)arg1;
- (void)setMetricsInteraction:(id)arg1;
- (void)setMetricsRecorder:(id)arg1;
- (void)setPriorMean:(float)arg1;
- (void)setSimulationExploreExploitModulator:(float)arg1;
- (void)setVarianceEpsilon:(float)arg1;
- (void)setWantsPredictionCache:(bool)arg1;
- (float)simulationExploreExploitModulator;
- (unsigned long long)totalExampleCount;
- (unsigned long long)totalPositiveCount;
- (void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (float)varianceEpsilon;
- (bool)wantsPredictionCache;

@end
