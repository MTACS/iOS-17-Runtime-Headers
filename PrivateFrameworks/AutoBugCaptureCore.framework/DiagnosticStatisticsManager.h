
@interface DiagnosticStatisticsManager : NSObject {
    DiagnosticCaseUsageAnalytics * _caseUsageSpace;
    NSObject<OS_dispatch_queue> * _queue;
    AnalyticsWorkspace * _workspace;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (double)_calculateAverageCasesPerDayFromDailyAggregatedStatistics;
- (void)_checkFileWritingLimits:(id)arg1;
- (id)_createDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)arg1;
- (long long)_removeDiagnosticCaseUsageMatchingDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4;
- (id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4;
- (id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 onOrAfter:(id)arg5 create:(bool)arg6;
- (void)_updateCaseStatisticsWith:(id)arg1;
- (void)_updateDailyCaseStatisticsWith:(id)arg1;
- (void)_updateDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 lastSeen:(id)arg5 dampeningType:(bool)arg6;
- (void)cleanupDiagnosticCaseUsage;
- (void)getDiagnosticCaseUsageStatistics:(id /* block */)arg1;
- (id)initWithWorkspace:(id)arg1 queue:(id)arg2;
- (id)queue;
- (void)resetDiagnosticCaseUsage;
- (void)updateCaseStatisticsWith:(id)arg1;

@end
