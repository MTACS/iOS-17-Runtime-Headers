
@interface HKHRAFibBurdenSevenDayAnalysisScheduler : NSObject <HKHRAFibBurdenSevenDayAnalysisSchedulerAlarmDelegate, HKHRAFibBurdenSevenDayAnalysisScheduling, HKHRDatabaseAnalysisSchedulerDelegate> {
    <HKHRAFibBurdenSevenDayAnalysisSchedulerAlarm> * _alarm;
    HKHRAFibBurdenSevenDayAnalysisManager * _analysisManager;
    <HDHRAFibBurdenSevenDayAnalysisBreadcrumbManaging> * _breadcrumbManager;
    <HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate> * _delegate;
    <HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting> * _featureStatusInspector;
    HKFeatureStatusManager * _featureStatusManager;
    HDProfile * _profile;
    <HKHRDatabaseAnalysisScheduler> * _scheduler;
    HDKeyValueDomain * _syncedKeyValueDomain;
}

@property (nonatomic) <HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_determineIfAnotherAnalysisRunIsNecessaryWithAnalysisResult:(long long)arg1;
- (void)_forceAnalysis;
- (void)_logAnalysisResult:(long long)arg1 error:(id)arg2;
- (id)_performAnalysisWithFeatureStatus:(id)arg1 error:(id*)arg2;
- (void)_reportAnalysisResultsToDelegate:(id)arg1 featureStatus:(id)arg2;
- (void)_saveLastAnalysisCompletedDateForResult:(id)arg1;
- (bool)_shouldAllowFeatureStatus:(id)arg1;
- (void)analysisSchedulerDidFire:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2 featureStatusManager:(id)arg3 featureStatusInspector:(id)arg4 alarm:(id)arg5 scheduler:(id)arg6 breadcrumbManager:(id)arg7 syncedKeyValueDomain:(id)arg8;
- (id)initWithProfile:(id)arg1 featureStatusManager:(id)arg2 onboardingEligibilityDeterminer:(id)arg3 analyzer:(id)arg4;
- (void)initialAnalysisAlarmDidFireWithAlarm:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
