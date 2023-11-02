
@interface PowerUIMLRelevantDrainPredictor : NSObject {
    <_CDLocalContext> * _context;
    NSString * _defaultsDomain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _loadModelLock;
    NSObject<OS_os_log> * _log;
    MLModel * _relevantDrainPredictorModel;
    <_DKKnowledgeQuerying> * _store;
    double  _threshold;
    PowerUITrialManager * _trialManager;
}

@property (nonatomic, retain) <_CDLocalContext> *context;
@property (nonatomic, retain) NSString *defaultsDomain;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } loadModelLock;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, readonly, retain) MLModel *relevantDrainPredictorModel;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *store;
@property (nonatomic) double threshold;
@property (nonatomic, retain) PowerUITrialManager *trialManager;

- (void).cxx_destruct;
- (void)addStatisticalSummaryFeaturesintoFeatureDictionary:(id)arg1 forDataFrame:(id)arg2 withFeatureNameSuffix:(id)arg3 whereDimension:(id)arg4 isFilteredWithHandler:(id /* block */)arg5;
- (id)analyticsEventFromFeatures:(id)arg1;
- (id)context;
- (id)defaultsDomain;
- (id)featuresForChargeSessionAtDate:(id)arg1 withChargeStartSoC:(id)arg2 withChargeAndDrainSessionHistory:(id)arg3;
- (id)initWithDefaultsDomain:(id)arg1 withContextStore:(id)arg2 withKnowledgeStore:(id)arg3 withTrialManager:(id)arg4;
- (bool)isStartSecondsValue:(double)arg1 withinDynamicBinWindowOfLength:(int)arg2 aroundCurrentStartSecondValue:(double)arg3;
- (bool)isStartSoCValue:(double)arg1 withinDynamicBinWindowOfLength:(int)arg2 aroundCurrentStartSoCValue:(double)arg3;
- (struct os_unfair_lock_s { unsigned int x1; })loadModelLock;
- (id)log;
- (id)predictedRelevantDrainAfterChargeSessionAtDate:(id)arg1 withChargeStartSoC:(id)arg2;
- (id)predictedRelevantDrainwithFeatures:(id)arg1;
- (id)relevantDrainPredictorModel;
- (void)setContext:(id)arg1;
- (void)setDefaultsDomain:(id)arg1;
- (void)setLoadModelLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLog:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setThreshold:(double)arg1;
- (void)setTrialManager:(id)arg1;
- (id)store;
- (double)threshold;
- (id)trialManager;

@end
