
@interface HKHRAFibBurdenControl : NSObject <HKHRAFibBurdenControlClient, _HKXPCExportable> {
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addTachogramClassificationForSampleUUID:(id)arg1 hasAFib:(bool)arg2 completion:(id /* block */)arg3;
- (void)addTachogramsForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2 chanceOfAFib:(id)arg3 chanceOfWrite:(id)arg4 minutesBetweenSamples:(id)arg5 startingHour:(id)arg6 endingHour:(id)arg7 completion:(id /* block */)arg8;
- (void)connectionInvalidated;
- (void)deleteAllTachogramClassificationsWithCompletion:(id /* block */)arg1;
- (void)deleteTachogramClassificationForSampleUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)determineIfAnalysisCanRunWithFeatureStatus:(id)arg1 error:(id*)arg2;
- (void)determineMajorityTimeZoneForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2 completion:(id /* block */)arg3;
- (id)exportedInterface;
- (void)fetchLastAnalysisDateWithCompletion:(id /* block */)arg1;
- (void)fetchSevenDayAnalysisBreadcrumbsWithCompletion:(id /* block */)arg1;
- (id)fetchSevenDayAnalysisBreadcrumbsWithError:(id*)arg1;
- (id)initWithHealthStore:(id)arg1;
- (void)injectBurdenValues:(id)arg1 completion:(id /* block */)arg2;
- (id)performAnalysisForWeekContainingDayIndex:(long long)arg1 error:(id*)arg2;
- (void)queryAllTachogramClassificationsWithCompletion:(id /* block */)arg1;
- (void)queryEligibleTachogramsForPreviousSixWeeksForTimeOfDayBucket:(long long)arg1 completion:(id /* block */)arg2;
- (void)queryEligibleTachogramsForPreviousSixWeeksForWeekday:(long long)arg1 completion:(id /* block */)arg2;
- (void)queryEligibleTachogramsForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)queryTachogramClassificationForSampleUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteInterface;
- (void)sendNotificationForCurrentValue:(id)arg1 previousValue:(id)arg2 shouldForwardToWatch:(bool)arg3 completion:(id /* block */)arg4;
- (void)sendNotificationWithMode:(id)arg1 completion:(id /* block */)arg2;
- (void)setLastAnalysisDate:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerAnalysis;

@end
