
@interface _DPPrioReporter : _DPReportGenerator

- (id)defaultRecordsWithValues:(id)arg1 key:(id)arg2 properties:(id)arg3;
- (void)deleteRecordsForKey:(id)arg1 storage:(id)arg2;
- (id)jsonReportFromObject:(id)arg1;
- (id)keysWithDefaultValues;
- (id)reportPrioKeys:(id)arg1 storage:(id)arg2;
- (id)reportPrioRecords:(id)arg1;
- (id)reportToPrioRecords:(id)arg1 forKey:(id)arg2 parameters:(id)arg3 storage:(id)arg4;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;

@end
