
@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol, _OSInactivityPredictionProtocol_Private> {
    NSXPCConnection * _connection;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backedUpData;
- (void)backedUpDataWithHandler:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (id)deviceUsageDiagnosis;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)arg1;
- (id)fixModelOutput:(id)arg1;
- (void)fixModelOutput:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)hasEnoughInactivityHistory;
- (void)hasEnoughInactivityHistoryWithHandler:(id /* block */)arg1;
- (id)inactivityHistoryDiagnosis;
- (void)inactivityHistoryDiagnosisWithHandler:(id /* block */)arg1;
- (id)init;
- (id)longInactivityPredictionResultAtDate:(id)arg1 withTimeSinceInactive:(double)arg2 withOptions:(long long)arg3 withError:(id*)arg4;
- (void)longInactivityPredictionResultAtDate:(id)arg1 withTimeSinceInactive:(double)arg2 withOptions:(long long)arg3 withHandler:(id /* block */)arg4;
- (id)longInactivityPredictionResultWithError:(id*)arg1;
- (void)longInactivityPredictionResultWithHandler:(id /* block */)arg1;
- (id)longInactivityPredictionResultWithOptions:(long long)arg1 withError:(id*)arg2;
- (void)longInactivityPredictionResultWithOptions:(long long)arg1 withHandler:(id /* block */)arg2;
- (id)modelDescription;
- (void)modelDescriptionWithHandler:(id /* block */)arg1;
- (id)modelMetadata;
- (void)modelMetadataWithHandler:(id /* block */)arg1;
- (bool)overrideRecommendedWaitTimeTo:(double)arg1;
- (void)overrideRecommendedWaitTimeTo:(double)arg1 withHandler:(id /* block */)arg2;
- (double)recommendedWaitTime;
- (void)recommendedWaitTimeWithHandler:(id /* block */)arg1;
- (bool)restoreInactivityModel;
- (void)restoreInactivityModelWithHandler:(id /* block */)arg1;
- (bool)restoreRecommendedWaitTime;
- (void)restoreRecommendedWaitTimeWithHandler:(id /* block */)arg1;
- (id)unfixModelOutput;
- (void)unfixModelOutputWithHandler:(id /* block */)arg1;

@end
