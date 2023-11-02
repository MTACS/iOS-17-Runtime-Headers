
@interface ACHEarnedInstanceAwardingEngine : NSObject <HDDatabaseProtectedDataObserver> {
    ACHDatabaseAssertionClient * _assertionClient;
    NSCalendar * _calendar;
    ACHAwardsClient * _client;
    NSDate * _currentDateOverride;
    ACHDataStore * _dataStore;
    ACHEarnedInstanceStore * _earnedInstanceStore;
    bool  _historicalEvaluationInProgress;
    struct { 
        bool allowsHistoricalEvaluationFromBeginningOfTime; 
        long long startDate; 
        long long endDate; 
        bool clearDataStoreBeforeHistoricalRun; 
        bool commitDataStoreAfterHistoricalRun; 
    }  _historicalEvaluationPolicy;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isActivated;
    HDProfile * _profile;
    int  _protectedDataToken;
    NSMutableDictionary * _queuedIncrementalEvaluations;
    NSMutableDictionary * _sourceRegistry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_client_requestHistoricalEvaluationForAllSourcesWithCompletion:(id /* block */)arg1;
- (void)_client_requestIncrementalEvaluationForSource:(id)arg1 evaluationBlock:(id /* block */)arg2;
- (void)_daemon_requestHistoricalEvaluationForAllSourcesWithCompletion:(id /* block */)arg1;
- (void)_daemon_requestIncrementalEvaluationForSource:(id)arg1 evaluationBlock:(id /* block */)arg2;
- (void)_queue_evaluateHistoryForSource:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_evaluateHistoryForSource:(id)arg1 databaseContext:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_performQueuedEvaluations;
- (void)_queue_protectedDataBecameAvailable;
- (void)_requestHistoricalEvaluationForAllSourcesWithCompletion:(id /* block */)arg1;
- (void)activate;
- (id)currentDate;
- (id)dataStorePropertyProviderForSource:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (void)deregisterSource:(id)arg1;
- (id)initWithClient:(id)arg1 assertionClient:(id)arg2 dataStore:(id)arg3 earnedInstanceStore:(id)arg4 historicalEvaluationPolicy:(struct { bool x1; long long x2; long long x3; bool x4; bool x5; })arg5;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 earnedInstanceStore:(id)arg3 historicalEvaluationPolicy:(struct { bool x1; long long x2; long long x3; bool x4; bool x5; })arg4;
- (void)registerSource:(id)arg1;
- (void)requestHistoricalEvaluationForAllSourcesWithCompletion:(id /* block */)arg1;
- (void)requestHistoricalEvaluationForAllSourcesWithDatabaseContext:(id)arg1 completion:(id /* block */)arg2;
- (void)requestIncrementalEvaluationForSource:(id)arg1 evaluationBlock:(id /* block */)arg2;
- (void)setCurrentDateOverride:(id)arg1;
- (unsigned long long)sourceCount;

@end
