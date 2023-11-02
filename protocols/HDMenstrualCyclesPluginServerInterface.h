
@protocol HDMenstrualCyclesPluginServerInterface <NSObject>

@required

- (void)remote_confirmAndSaveDeviationWithMenstrualFlowByDayIndex:(void *)arg1 intermenstrualBleedingByDayIndex:(void *)arg2 addedCycleFactors:(void *)arg3 initialAnalysisWindow:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSDictionary *, NSDictionary *, NSArray *, struct { long long x1; long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_fetchScheduledNotificationsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_saveDaySummaries:(void *)arg1 canOverrideCreationDate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_saveLastMenstrualPeriodWithDayIndexRange:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: struct { long long x1; long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_saveMenstrualFlow:(void *)arg1 dayIndex:(void *)arg2 updateAdjacentDays:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: long long, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_saveMenstrualFlowByDayIndex:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_savePeriodEndedOnDayIndex:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_savePeriodNotYetEndedWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_savePeriodNotYetStartedWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_savePeriodStartedOnDayIndex:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_savePeriodStartedOnDayIndex:(void *)arg1 endedOnDayIndex:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_triggerAnalysisForDebugReason:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
