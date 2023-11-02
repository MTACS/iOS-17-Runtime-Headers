
@interface HDHRAFibBurdenControlServer : HDStandardTaskServer <HKHRAFibBurdenControlServer> {
    <HDHRAFibBurdenNotificationManaging> * _notificationManager;
    <HKHRAFibBurdenSevenDayAnalysisScheduling> * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_addTachogramsForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2 chanceOfAFib:(double)arg3 chanceOfWrite:(double)arg4 minutesBetweenSamples:(long long)arg5 startingHour:(long long)arg6 endingHour:(long long)arg7 completion:(id /* block */)arg8;
- (id)_clientRemoteObjectProxy;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 scheduler:(id)arg5 notificationManager:(id)arg6;
- (id)remoteInterface;
- (void)remote_addTachogramClassificationForSampleUUID:(id)arg1 hasAFib:(bool)arg2 completion:(id /* block */)arg3;
- (void)remote_addTachogramsForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2 chanceOfAFib:(id)arg3 chanceOfWrite:(id)arg4 minutesBetweenSamples:(id)arg5 startingHour:(id)arg6 endingHour:(id)arg7 completion:(id /* block */)arg8;
- (void)remote_deleteAllTachogramClassificationsWithCompletion:(id /* block */)arg1;
- (void)remote_deleteTachogramClassificationForSampleUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_determineIfAnalysisCanRunWithFeatureStatus:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_determineMajorityTimeZoneForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)remote_fetchSevenDayAnalysisBreadcrumbsWithCompletion:(id /* block */)arg1;
- (void)remote_injectBurdenValues:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_performAnalysisForWeekContainingDayIndex:(long long)arg1 completion:(id /* block */)arg2;
- (void)remote_queryAllTachogramClassificationsWithCompletion:(id /* block */)arg1;
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForTimeOfDayBucket:(long long)arg1 completion:(id /* block */)arg2;
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForWeekday:(long long)arg1 completion:(id /* block */)arg2;
- (void)remote_queryEligibleTachogramsForStartDayIndex:(long long)arg1 endDayIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)remote_queryTachogramClassificationForSampleUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_sendNotificationWithMode:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_triggerAnalysis;

@end
