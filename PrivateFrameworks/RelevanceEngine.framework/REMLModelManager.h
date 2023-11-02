
@interface REMLModelManager : RERelevanceEngineSubsystem <REMLModelManagerProperties> {
    REContentRanker * _contentRanker;
    REObserverStore * _dataStores;
    NSDate * _lastCacheResetDate;
    REMLMetricsSet * _metrics;
    <RERelevanceEngineMetricsRecorder> * _metricsRecoder;
    REMLLinearModel * _model;
    NSString * _modelFileLocation;
    unsigned long long  _modelStorageBehavior;
    unsigned long long  _modelVersionNumber;
    REObserverStore * _observers;
    NSArray * _orderedFeatures;
    bool  _supportsContentRanking;
    NSObject<OS_dispatch_queue> * _trainingQueue;
    bool  _validModel;
}

@property (nonatomic, readonly) REContentRanker *contentRanker;
@property (nonatomic, readonly) REMLModel *model;
@property (nonatomic, readonly) unsigned long long modelVersionNumber;
@property (nonatomic, readonly) NSArray *orderedFeatures;
@property (nonatomic, readonly) bool supportsContentRanking;

- (void).cxx_destruct;
- (id)_createOrderFeatureListFromModelFileURL:(id)arg1 mlFeatures:(id)arg2;
- (bool)_loadModelAtPath:(id)arg1 mlFeatures:(id)arg2 checkModelVersion:(bool)arg3;
- (void)_logMetrics;
- (void)_notifyObserversThatModelUpdated;
- (id)_orderedModelFeatures;
- (void)_saveDataStoresToURL:(id)arg1;
- (bool)_saveModelToDisk:(id*)arg1;
- (void)addDataStore:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)comparatorWithRules:(id)arg1;
- (id)contentRanker;
- (id)createOutputFeatureFromDouble:(double)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)flushTraining;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)manuallySaveModel;
- (id)model;
- (unsigned long long)modelVersionNumber;
- (id)orderedFeatures;
- (void)performModelClearWithCompletion:(id /* block */)arg1;
- (void)performTrainingWithFeatureMaps:(id)arg1 content:(id)arg2 events:(id)arg3 interactions:(id)arg4 purgeCaches:(bool)arg5 completion:(id /* block */)arg6;
- (id)predicitionForLogicalElement:(id)arg1;
- (void)removeDataStore:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)sentimentAnalyzer;
- (bool)supportsContentRanking;

@end
