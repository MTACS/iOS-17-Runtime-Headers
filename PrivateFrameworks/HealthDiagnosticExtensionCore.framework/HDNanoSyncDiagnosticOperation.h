
@interface HDNanoSyncDiagnosticOperation : HDDiagnosticOperation

- (void)_collectNanoSyncMessageDatabase;
- (long long)_countOfMessagesForDeviceIdentifier:(id)arg1 description:(id)arg2 predicateSQL:(id)arg3 date:(id)arg4 database:(id)arg5;
- (id)_reportDetailsForDevice:(id)arg1 database:(id)arg2;
- (void)_reportIDSSummaryForDeviceIdentifier:(id)arg1 database:(id)arg2;
- (void)_reportMostRecentMessageDateWithDeviceIdentifier:(id)arg1 description:(id)arg2 field:(id)arg3 predicateSQL:(id)arg4 database:(id)arg5;
- (void)_reportMostRecentMessageErrorsWithDeviceIdentifier:(id)arg1 database:(id)arg2;
- (void)_reportQuickSwitchSummaryWithDevicesByPairingID:(id)arg1;
- (void)_reportSummaryWithDevices:(id)arg1;
- (id)_sortedPairedDevices;
- (id)nanoSyncDatabaseURL;
- (id)reportFilename;
- (void)run;

@end
