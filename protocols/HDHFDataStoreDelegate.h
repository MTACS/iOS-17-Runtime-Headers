
@protocol HDHFDataStoreDelegate

@required

- (void)HFDataStore:(HDHFDataStore *)arg1 detectedCorruptionOfType:(long long)arg2 code:(int)arg3 error:(NSError *)arg4 shouldPromptUser:(bool)arg5 initialRebuildState:(long long)arg6 updatedRebuildState:(long long)arg7;
- (long long)HFDataStore:(HDHFDataStore *)arg1 integerForKey:(NSString *)arg2;
- (void)HFDataStore:(HDHFDataStore *)arg1 setInteger:(long long)arg2 forKey:(NSString *)arg3;
- (void)HFDataStoreDetectedOutOfSpace:(HDHFDataStore *)arg1;
- (void)HFDataStoreDidPerformRebuild:(HDHFDataStore *)arg1 didDecompressArchivedHFD:(bool)arg2 didOpenArchivedHFD:(bool)arg3 didOpenMovedAsideHFD:(bool)arg4 recoveryAnalytics:(NSDictionary *)arg5 duration:(double)arg6;
- (<HDHFDataStoreMigrationTransaction> *)activeTransactionForCurrentThreadForHFDataStore:(HDHFDataStore *)arg1 forWriting:(bool)arg2;
- (NSArray *)allSeriesEntityClassesForDataStore:(HDHFDataStore *)arg1;
- (bool)allowHFDMigration:(HDHFDataStore *)arg1;
- (void)didMigrateHFDataStore:(HDHFDataStore *)arg1 fromState:(long long)arg2 toState:(long long)arg3 success:(bool)arg4 error:(NSError *)arg5;
- (bool)migrateDataForHFDataStore:(HDHFDataStore *)arg1 from:(const void*)arg2 to:(void*)arg3 recoveryAnalytics:(NSMutableDictionary *)arg4 error:(id*)arg5;
- (bool)migrateDataForHFDataStore:(HDHFDataStore *)arg1 toSQLiteFrom:(const void*)arg2 error:(id*)arg3;
- (void)requestRebuildTransactionForHFDataStore:(HDHFDataStore *)arg1;

@end
