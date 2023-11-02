
@interface PowerUIMLAudioAccessoryModelPredictor : NSObject {
    MLModel * _highUsageEngageModel;
    MLModel * _highUsageRegressionModel;
    double  _lastUsedLeeway;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    MLModel * _lowUsageEngageModel;
    MLModel * _lowUsageRegressionModel;
    int  _minimumDaysOfHistory;
    int  _minimumNumberOfPreviousConnections;
    NSObject<OS_os_log> * _statusLog;
    <_DKKnowledgeQuerying> * _store;
}

@property (nonatomic, readonly) MLModel *highUsageEngageModel;
@property (nonatomic, readonly) MLModel *highUsageRegressionModel;
@property (nonatomic, readonly) double lastUsedLeeway;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) MLModel *lowUsageEngageModel;
@property (nonatomic, readonly) MLModel *lowUsageRegressionModel;
@property (nonatomic) int minimumDaysOfHistory;
@property (nonatomic) int minimumNumberOfPreviousConnections;
@property (nonatomic, retain) NSObject<OS_os_log> *statusLog;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *store;

- (void).cxx_destruct;
- (id)chargingDecisionForDate:(id)arg1 forAudioAccessory:(id)arg2;
- (id)checkForSufficientBTConnectionEventsUpTo:(id)arg1 forDevice:(id)arg2;
- (bool)deviceHasAtLeastOneLongConnection:(id)arg1 forReferenceDate:(id)arg2;
- (id)getBTConnectionEventsInDescendingOrderForPredictionUpTo:(id)arg1 forDevice:(id)arg2;
- (id)getBTConnectionEventsUpTo:(id)arg1 withMinimumDuration:(double)arg2 withLimit:(unsigned int)arg3 ascending:(bool)arg4 forDevice:(id)arg5;
- (id)getInputFeaturesForDate:(id)arg1 withEvents:(id)arg2 withLog:(id)arg3;
- (id)highUsageEngageModel;
- (id)highUsageRegressionModel;
- (double)historicalMeaningfulUnderchargeRate:(id)arg1;
- (id)initWithStore:(id)arg1;
- (bool)isSufficientDataAvailableForEngagementForDevice:(id)arg1;
- (double)lastUsedLeeway;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)log;
- (id)lowUsageEngageModel;
- (id)lowUsageRegressionModel;
- (int)minimumDaysOfHistory;
- (int)minimumNumberOfPreviousConnections;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLog:(id)arg1;
- (void)setMinimumDaysOfHistory:(int)arg1;
- (void)setMinimumNumberOfPreviousConnections:(int)arg1;
- (void)setStatusLog:(id)arg1;
- (void)setStore:(id)arg1;
- (id)statusLog;
- (id)store;

@end
