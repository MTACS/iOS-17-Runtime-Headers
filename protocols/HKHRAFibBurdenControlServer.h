
@protocol HKHRAFibBurdenControlServer <NSObject>

@required

- (void)remote_addTachogramClassificationForSampleUUID:(void *)arg1 hasAFib:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_addTachogramsForStartDayIndex:(void *)arg1 endDayIndex:(void *)arg2 chanceOfAFib:(void *)arg3 chanceOfWrite:(void *)arg4 minutesBetweenSamples:(void *)arg5 startingHour:(void *)arg6 endingHour:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 14: long long, long long, NSNumber *, NSNumber *, NSNumber *, NSNumber *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_deleteAllTachogramClassificationsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_deleteTachogramClassificationForSampleUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_determineIfAnalysisCanRunWithFeatureStatus:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKFeatureStatus *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_determineMajorityTimeZoneForStartDayIndex:(void *)arg1 endDayIndex:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_fetchSevenDayAnalysisBreadcrumbsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKHRAFibBurdenSevenDayAnalysisBreadcrumbs *, NSError *, void*
- (void)remote_injectBurdenValues:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_performAnalysisForWeekContainingDayIndex:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKHRAFibBurdenSevenDayAnalysisResults *, NSError *, void*
- (void)remote_queryAllTachogramClassificationsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKHRSampleClassificationCollection *, NSError *, void*
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForTimeOfDayBucket:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKHRSampleClassificationCollectionCollection *, NSError *, void*
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForWeekday:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKHRSampleClassificationCollectionCollection *, NSError *, void*
- (void)remote_queryEligibleTachogramsForStartDayIndex:(void *)arg1 endDayIndex:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKHRSampleClassificationCollectionCollection *, NSError *, void*
- (void)remote_queryTachogramClassificationForSampleUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKHRSampleClassification *, NSError *, void*
- (void)remote_sendNotificationWithMode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKHRAFibBurdenNotificationMode *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_triggerAnalysis;

@end
