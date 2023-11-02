
@interface HKMenstrualCyclesStore : NSObject <HKMenstrualCyclesStoreInterface, _HKXPCExportable> {
    HKCloudSyncControl * _cloudSyncControl;
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (nonatomic, readonly) HKCloudSyncControl *cloudSyncControl;
@property (nonatomic, retain) NSDate *cycleFactorsLastReviewedDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, retain) NSNumber *lastMenstrualPeriodDismissalDay;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *unconfirmedDeviationDismissalDay;
@property (nonatomic, retain) NSNumber *unconfirmedDeviationSubmissionDay;

- (void).cxx_destruct;
- (id)_appProtectedSyncedKeyValueDomain;
- (id)_deviationDetectionAnalyticsDomain;
- (id)_syncedProtectedKeyValueDomain;
- (void)_triggerImmediateSyncWithReason:(id)arg1;
- (id)cloudSyncControl;
- (void)confirmAndSaveDeviationWithMenstrualFlowByDayIndex:(id)arg1 intermenstrualBleedingByDayIndex:(id)arg2 addedCycleFactors:(id)arg3 initialAnalysisWindow:(struct { long long x1; long long x2; })arg4 completion:(id /* block */)arg5;
- (void)connectionInvalidated;
- (id)cycleFactorsLastReviewedDate;
- (id)deviationDetectedIndicesForDeviationType:(long long)arg1 error:(id*)arg2;
- (id)exportedInterface;
- (void)fetchScheduledNotificationsWithCompletion:(id /* block */)arg1;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)lastMenstrualPeriodDismissalDay;
- (id)remoteInterface;
- (void)saveDaySummaries:(id)arg1 canOverrideCreationDate:(bool)arg2 completion:(id /* block */)arg3;
- (void)saveDaySummaries:(id)arg1 completion:(id /* block */)arg2;
- (void)saveDaySummary:(id)arg1 completion:(id /* block */)arg2;
- (void)saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x1; long long x2; })arg1 completion:(id /* block */)arg2;
- (void)saveMenstrualFlow:(long long)arg1 dayIndex:(long long)arg2 updateAdjacentDays:(bool)arg3 completion:(id /* block */)arg4;
- (void)saveMenstrualFlowByDayIndex:(id)arg1 completion:(id /* block */)arg2;
- (void)savePeriodEndedOnDayIndex:(long long)arg1 completion:(id /* block */)arg2;
- (void)savePeriodNotYetEndedWithCompletion:(id /* block */)arg1;
- (void)savePeriodNotYetStartedWithCompletion:(id /* block */)arg1;
- (void)savePeriodStartedOnDayIndex:(long long)arg1 completion:(id /* block */)arg2;
- (void)savePeriodStartedOnDayIndex:(long long)arg1 endedOnDayIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)setCycleFactorsLastReviewedDate:(id)arg1;
- (bool)setDeviationDetectedIfNeededForDeviations:(id)arg1;
- (void)setIsEligibleForCycleFactorsReminder:(bool)arg1;
- (void)setLastMenstrualPeriodDismissalDay:(id)arg1;
- (void)setUnconfirmedDeviationDismissalDay:(id)arg1;
- (void)setUnconfirmedDeviationSubmissionDay:(id)arg1;
- (void)triggerAnalysisForDebugReason:(id)arg1 completion:(id /* block */)arg2;
- (id)unconfirmedDeviationDismissalDay;
- (id)unconfirmedDeviationSubmissionDay;

@end
