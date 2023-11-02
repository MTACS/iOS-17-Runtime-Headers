
@interface _DPDediscoReporter : _DPReportGenerator

+ (id)filterNonConformingDediscoRecordsFrom:(id)arg1;
+ (id)jsonReportFromObject:(id)arg1 replacing:(id)arg2 with:(id)arg3;

- (id)_commSafetyAccountCountryCode;
- (id)_commSafetyAgeGroup;
- (bool)_isCommSafetyEnabled;
- (id)defaultRecordsWithValues:(id)arg1 key:(id)arg2 properties:(id)arg3;
- (id)directlyUploadDediscoRecords:(id)arg1 forKey:(id)arg2 keyProperties:(id)arg3 storage:(id)arg4;
- (id)extendCommSafetyKey:(id)arg1;
- (id)keysWithDefaultValues;
- (bool)markSubmitted:(id)arg1 storage:(id)arg2;
- (bool)reportDediscoKeys:(id)arg1 storage:(id)arg2;
- (bool)reportDediscoRecords:(id)arg1;
- (id)reportToDediscoRecords:(id)arg1 forKey:(id)arg2 keyProperties:(id)arg3 storage:(id)arg4;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;

@end
