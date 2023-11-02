
@interface _DPDiagnosticDataReporter : NSObject

+ (id)IOTrackingPrefix;
+ (void)addValue:(long long)arg1 forDPKey:(id)arg2 scalarKeyPrefix:(id)arg3;
+ (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
+ (id)blacklistFileCreationKey;
+ (id)blacklistFileRemovalKey;
+ (id)budgetUpdateKey;
+ (void)clearDPKey:(id)arg1 scalarKeyPrefix:(id)arg2;
+ (void)clearScalarKey:(id)arg1;
+ (id)daReportSubmissionKey;
+ (id)diagnosticReportKeyFor:(id)arg1 scalerKeyPrefix:(id)arg2;
+ (id)parsecReportSubmissionKey;
+ (void)setValue:(long long)arg1 forDPKey:(id)arg2 scalarKeyPrefix:(id)arg3;
+ (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
+ (id)staleRecordRemovalKey;
+ (id)staleReportFileRemovalKey;
+ (id)submittedRecordRemovalKey;

@end
