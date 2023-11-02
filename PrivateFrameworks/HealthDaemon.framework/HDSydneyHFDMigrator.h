
@interface HDSydneyHFDMigrator : NSObject <HDHFDataStoreDelegate, HDHFDataStoreMigrationTransaction> {
    bool  _corruptionRebuildCompleted;
    NSError * _migrationError;
    HDDatabaseMigrationTransaction * _transaction;
    NSError * _verificationError;
}

@property (nonatomic) bool corruptionRebuildCompleted;
@property (nonatomic, retain) NSError *migrationError;
@property (nonatomic, readonly) HDSQLiteDatabase *protectedDatabase;
@property (nonatomic, retain) HDDatabaseMigrationTransaction *transaction;
@property (nonatomic, copy) NSError *verificationError;

- (void).cxx_destruct;
- (void)HFDataStore:(id)arg1 detectedCorruptionOfType:(long long)arg2 code:(int)arg3 error:(id)arg4 shouldPromptUser:(bool)arg5 initialRebuildState:(long long)arg6 updatedRebuildState:(long long)arg7;
- (long long)HFDataStore:(id)arg1 integerForKey:(id)arg2;
- (void)HFDataStore:(id)arg1 setInteger:(long long)arg2 forKey:(id)arg3;
- (void)HFDataStoreDetectedOutOfSpace:(id)arg1;
- (void)HFDataStoreDidPerformRebuild:(id)arg1 didDecompressArchivedHFD:(bool)arg2 didOpenArchivedHFD:(bool)arg3 didOpenMovedAsideHFD:(bool)arg4 recoveryAnalytics:(id)arg5 duration:(double)arg6;
- (id)activeTransactionForCurrentThreadForHFDataStore:(id)arg1 forWriting:(bool)arg2;
- (id)allSeriesEntityClassesForDataStore:(id)arg1;
- (bool)allowHFDMigration:(id)arg1;
- (bool)corruptionRebuildCompleted;
- (void)didMigrateHFDataStore:(id)arg1 fromState:(long long)arg2 toState:(long long)arg3 success:(bool)arg4 error:(id)arg5;
- (id)initWithMigrationTransaction:(id)arg1;
- (bool)migrateDataForHFDataStore:(id)arg1 from:(const void*)arg2 to:(void*)arg3 recoveryAnalytics:(id)arg4 error:(id*)arg5;
- (bool)migrateDataForHFDataStore:(id)arg1 toSQLiteFrom:(const void*)arg2 error:(id*)arg3;
- (long long)migrateHFD:(id*)arg1;
- (id)migrationError;
- (id)protectedDatabase;
- (void)requestRebuildTransactionForHFDataStore:(id)arg1;
- (void)setCorruptionRebuildCompleted:(bool)arg1;
- (void)setMigrationError:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setVerificationError:(id)arg1;
- (id)transaction;
- (id)verificationError;

@end
