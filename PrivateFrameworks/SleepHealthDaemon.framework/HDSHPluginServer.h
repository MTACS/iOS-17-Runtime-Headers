
@interface HDSHPluginServer : HDStandardTaskServer <HDDiagnosticObject, HDSleepHealthDaemonPluginServerInterface> {
    HDHealthStoreClient * _client;
    HDProfile * _profile;
    HDSHProfileExtension * _profileExtension;
    NSObject<OS_dispatch_queue> * _serializer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)_cloudSyncFuture;
- (bool)_deleteSamples:(id)arg1 error:(id*)arg2;
- (bool)_insertSamplesWithClientSource:(id)arg1 error:(id*)arg2;
- (id)_nanoSyncFutureWithAccessibilityAssertion:(id)arg1;
- (bool)_populateSamplesToInsert:(id)arg1 samplesToDelete:(id)arg2 forSleepDurationGoal:(id)arg3 error:(id*)arg4;
- (bool)_populateSamplesToInsert:(id)arg1 samplesToDelete:(id)arg2 forSleepSchedules:(id)arg3 error:(id*)arg4;
- (bool)_replaceSamples:(id)arg1 withSamples:(id)arg2 error:(id*)arg3;
- (void)_saveSleepTrackingSamplesAfterFirstUnlock:(id)arg1 completion:(id /* block */)arg2;
- (void)connectionInvalidated;
- (id)diagnosticDescription;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_saveSleepTrackingSamples:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_startSleepTrackingSession;
- (void)remote_stopSleepTrackingSession;
- (void)remote_updateCurrentSleepSchedules:(id)arg1 sleepDurationGoal:(id)arg2 completion:(id /* block */)arg3;

@end
