
@interface HDMCPluginServer : HDStandardTaskServer <HDDiagnosticObject, HDMenstrualCyclesPluginServerInterface> {
    HDHealthStoreClient * _client;
    HDProfile * _profile;
    HDMCProfileExtension * _profileExtension;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (bool)_queue_deleteSamplesOfType:(id)arg1 onDayIndex:(long long)arg2 calendarCache:(id)arg3 error:(id*)arg4;
- (bool)_queue_insertSamplesWithClientSource:(id)arg1 creationDate:(id)arg2 error:(id*)arg3;
- (bool)_queue_insertSamplesWithClientSource:(id)arg1 error:(id*)arg2;
- (id)_queue_mostRecentMenstrualFlowSampleWithError:(id*)arg1 requiringBeforeDay:(long long)arg2 calendarCache:(id)arg3;
- (bool)_queue_reconcileSamplesToDeriveDaySummary:(id)arg1 analysis:(id)arg2 canOverrideCreationDate:(bool)arg3 error:(id*)arg4;
- (bool)_queue_saveIntermenstrualBleedingByDayIndex:(id)arg1 calendarCache:(id)arg2 error:(id*)arg3;
- (bool)_queue_saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x1; long long x2; })arg1 calendarCache:(id)arg2 error:(id*)arg3;
- (bool)_queue_saveMenstrualFlow:(long long)arg1 forEachDayInRange:(struct { long long x1; long long x2; })arg2 calendarCache:(id)arg3 error:(id*)arg4;
- (bool)_queue_saveMenstrualFlowByDayIndex:(id)arg1 calendarCache:(id)arg2 error:(id*)arg3;
- (bool)_queue_saveMenstrualFlowUpdatingAdjacentDays:(long long)arg1 dayIndex:(long long)arg2 calendarCache:(id)arg3 error:(id*)arg4;
- (bool)_queue_savePeriodStartedOnDayIndex:(long long)arg1 endedOnDayIndex:(long long)arg2 calendarCache:(id)arg3 error:(id*)arg4;
- (void)_queue_updateLastLoggedInExperienceDate;
- (bool)_queue_updateStartOfCycleMetadataForModifiedDayIndex:(long long)arg1 calendarCache:(id)arg2 canOverrideCreationDate:(bool)arg3 error:(id*)arg4;
- (bool)_queue_updateUnderlyingSamplesToReplaceDaySummary:(id)arg1 withDaySummary:(id)arg2 calendarCache:(id)arg3 canOverrideCreationDate:(bool)arg4 error:(id*)arg5;
- (id)_samplesToInsertForUpdateFromDaySummary:(id)arg1 toDaySummary:(id)arg2 typesToDelete:(id*)arg3 calendarCache:(id)arg4;
- (void)_submitPredictionAccuracyAnalyticWithDayIndex:(long long)arg1 oldMenstrualFlow:(long long)arg2 newMenstrualFlow:(long long)arg3 analysis:(id)arg4 isLoggingMultipleDays:(bool)arg5;
- (void)_triggerImmediateSync;
- (void)connectionInvalidated;
- (id)diagnosticDescription;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 profileExtension:(id)arg5;
- (id)remoteInterface;
- (void)remote_confirmAndSaveDeviationWithMenstrualFlowByDayIndex:(id)arg1 intermenstrualBleedingByDayIndex:(id)arg2 addedCycleFactors:(id)arg3 initialAnalysisWindow:(struct { long long x1; long long x2; })arg4 completion:(id /* block */)arg5;
- (void)remote_fetchScheduledNotificationsWithCompletion:(id /* block */)arg1;
- (void)remote_saveDaySummaries:(id)arg1 canOverrideCreationDate:(bool)arg2 completion:(id /* block */)arg3;
- (void)remote_saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x1; long long x2; })arg1 completion:(id /* block */)arg2;
- (void)remote_saveMenstrualFlow:(long long)arg1 dayIndex:(long long)arg2 updateAdjacentDays:(bool)arg3 completion:(id /* block */)arg4;
- (void)remote_saveMenstrualFlowByDayIndex:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_savePeriodEndedOnDayIndex:(long long)arg1 completion:(id /* block */)arg2;
- (void)remote_savePeriodNotYetEndedWithCompletion:(id /* block */)arg1;
- (void)remote_savePeriodNotYetStartedWithCompletion:(id /* block */)arg1;
- (void)remote_savePeriodStartedOnDayIndex:(long long)arg1 completion:(id /* block */)arg2;
- (void)remote_savePeriodStartedOnDayIndex:(long long)arg1 endedOnDayIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)remote_triggerAnalysisForDebugReason:(id)arg1 completion:(id /* block */)arg2;

@end
