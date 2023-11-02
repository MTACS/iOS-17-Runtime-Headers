
@interface HDCloudSyncDiagnosticOperation : HDDiagnosticOperation

- (void)_reportCloudSyncDescriptionWithHealthStore:(id)arg1;
- (void)_reportCloudSyncErrors;
- (void)_reportCloudSyncJournalStats;
- (void)_reportCloudSyncKeyValuesWithDatabase:(id)arg1;
- (bool)_reportCloudSyncStatusWithHealthStore:(id)arg1;
- (void)_reportCloudSyncStoreDetailsWithDatabase:(id)arg1;
- (void)_reportCloudSyncStoreDetailsWithSyncProvenance:(long long)arg1 storeUUID:(id)arg2 database:(id)arg3;
- (void)_reportCurrentSyncIdentityWithDatabase:(id)arg1;
- (id)reportFilename;
- (void)run;

@end
