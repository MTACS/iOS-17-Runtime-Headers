
@interface HDDatabaseDiagnosticOperation : HDDiagnosticOperation

- (bool)_captureUnprotectedDatabaseAtURL:(id)arg1 protectedDatabaseAtURL:(id)arg2 reason:(id)arg3;
- (void)_reportJournalStatisticsInSubdirectory:(id)arg1 profileDirectory:(id)arg2;
- (void)_reportMedicalIDStatistics;
- (void)_reportMissingSourceOrderEntriesWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2;
- (void)_reportSizeForHFDAtURL:(id)arg1;
- (bool)_reportStatisticsForUnprotectedDatabaseAtURL:(id)arg1 protectedDatabaseAtURL:(id)arg2;
- (bool)allowsSensitiveAttachments;
- (id)reportFilename;
- (void)run;

@end
