
@interface HDSyncAnchorEntity : HDHealthEntity

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateSyncAnchorsForStoreID:(long long)arg1 database:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)getMinimumSyncAnchorsOfType:(long long)arg1 anchorMap:(id)arg2 updatedSince:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)getRequestedVersion:(id*)arg1 entityIdentifier:(id)arg2 store:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (bool)getSyncAnchorsOfType:(long long)arg1 anchorMap:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)prepareSyncAnchorsForEntityIdentifiers:(id)arg1 store:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;
+ (bool)resetAllSyncAnchorsOfType:(long long)arg1 syncProvenances:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)resetNextAnchorsIfNeededForStore:(id)arg1 profile:(id)arg2 minimumElapsedTime:(double)arg3 error:(id*)arg4;
+ (bool)resetSyncAnchorsOfType:(long long)arg1 store:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)resetSyncStore:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)setAcknowledgedAnchorsWithMap:(id)arg1 store:(id)arg2 resetNext:(bool)arg3 resetInvalid:(bool)arg4 profile:(id)arg5 error:(id*)arg6;
+ (long long)syncAnchorOfType:(long long)arg1 entityIdentifier:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)uniquedColumns;
+ (bool)updateLocalVersion:(int)arg1 entityIdentifier:(id)arg2 store:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (bool)updateReceivedVersion:(int)arg1 entityIdentifier:(id)arg2 store:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (bool)updateRequestedVersion:(int)arg1 entityIdentifier:(id)arg2 store:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (bool)updateSyncAnchor:(long long)arg1 type:(long long)arg2 entityIdentifier:(id)arg3 store:(id)arg4 updatePolicy:(long long)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)updateSyncAnchor:(long long)arg1 type:(long long)arg2 updateDate:(id)arg3 entityIdentifier:(id)arg4 store:(id)arg5 updatePolicy:(long long)arg6 profile:(id)arg7 error:(id*)arg8;
+ (bool)updateSyncAnchorsWithMap:(id)arg1 type:(long long)arg2 store:(id)arg3 updatePolicy:(long long)arg4 resetInvalid:(bool)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)updateSyncAnchorsWithMap:(id)arg1 type:(long long)arg2 updateDate:(id)arg3 store:(id)arg4 updatePolicy:(long long)arg5 resetInvalid:(bool)arg6 profile:(id)arg7 error:(id*)arg8;

// Image: /System/Library/PrivateFrameworks/HealthDiagnosticExtensionCore.framework/HealthDiagnosticExtensionCore

+ (void)hde_reportSyncAnchorsForSyncProvenance:(long long)arg1 diagnosticOperation:(id)arg2 database:(id)arg3;

@end
