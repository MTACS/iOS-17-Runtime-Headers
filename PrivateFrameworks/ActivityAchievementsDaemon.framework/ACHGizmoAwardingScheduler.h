
@interface ACHGizmoAwardingScheduler : NSObject <ACHAwardingScheduler, ACHDataStoreObserving, HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    ACHEarnedInstanceAwardingEngine * _awardingEngine;
    NSMutableSet * _blocksWaitingOnFirstEvaluation;
    ACHAwardsClient * _client;
    ACHDataStore * _dataStore;
    bool  _dataStoreHasPopulated;
    bool  _firstEvaluationComplete;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _needsRetry;
    HDProfile * _profile;
    int  _protectedDataToken;
    double  _retryInterval;
    double  _retryLeeway;
    NSObject<OS_dispatch_source> * _retryTimer;
    id /* block */  _scheduledEvaluationCompleteBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double retryInterval;
@property (nonatomic) double retryLeeway;
@property (nonatomic, copy) id /* block */ scheduledEvaluationCompleteBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_cancelRetryAwardingEvaluationTimer;
- (void)_queue_handleProtectedDataChange:(bool)arg1;
- (void)_queue_requestRetryingAwardingEvaluationWithCompletion:(id /* block */)arg1;
- (void)_queue_scheduleRetryAwardingEvaluation;
- (void)_startUp;
- (void)activate;
- (void)daemonReady:(id)arg1;
- (void)dataStoreDidPopulate:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithClient:(id)arg1 dataStore:(id)arg2 awardingEngine:(id)arg3;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 awardingEngine:(id)arg3;
- (void)performAfterFirstEvaluation:(id /* block */)arg1;
- (void)requestAwardingEvaluationWithCompletion:(id /* block */)arg1;
- (double)retryInterval;
- (double)retryLeeway;
- (id /* block */)scheduledEvaluationCompleteBlock;
- (void)setRetryInterval:(double)arg1;
- (void)setRetryLeeway:(double)arg1;
- (void)setScheduledEvaluationCompleteBlock:(id /* block */)arg1;

@end
