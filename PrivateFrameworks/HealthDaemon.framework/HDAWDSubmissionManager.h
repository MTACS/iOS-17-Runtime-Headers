
@interface HDAWDSubmissionManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDDiagnosticObject, HDProfileReadyObserver> {
    NSMutableArray * _actions;
    _HDAWDPeriodicAction * _fitnessDailyAction;
    int  _fitnessDailyCollectionEnabledNotifyToken;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _serverConnectionsByComponentId;
    bool  _started;
    id /* block */  _testHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ testHandler;

- (void).cxx_destruct;
- (id)_activitySummaryForActivityCacheIndex:(long long)arg1 error:(id*)arg2;
- (long long)_int64ForKeyPrefix:(id)arg1 profile:(id)arg2 date:(id*)arg3 error:(id*)arg4;
- (long long)_manuallyEnteredTypesCountWithTransaction:(id)arg1 error:(id*)arg2;
- (long long)_nonAppleSourcesWithDataSince:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)_setInt64:(long long)arg1 keyPrefix:(id)arg2 profile:(id)arg3 date:(id)arg4 error:(id*)arg5;
- (id)_updateDeltaToInt64:(long long)arg1 forKey:(id)arg2 profile:(id)arg3 currentDate:(id)arg4 timeInterval:(double)arg5 error:(id*)arg6;
- (bool)aggregateDatabaseSizeStats:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (bool)isFitnessDailyCollectionEnabled;
- (id)motionToken;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(id /* block */)arg2;
- (void)resetTask:(id)arg1;
- (bool)runTask:(id)arg1 error:(id*)arg2;
- (void)setTestHandler:(id /* block */)arg1;
- (id /* block */)testHandler;
- (void)updateFitnessDailyCollectionEnabled;

@end
