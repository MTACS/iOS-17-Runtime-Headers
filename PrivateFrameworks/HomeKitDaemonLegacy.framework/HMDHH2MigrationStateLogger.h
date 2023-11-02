
@interface HMDHH2MigrationStateLogger : HMFObject {
    NSDictionary * _logEventRecord;
    long long  _totalTimeTakenForMigration;
}

@property (getter=isAutoMigration, nonatomic, readonly) bool autoMigration;
@property (nonatomic, retain) NSDictionary *logEventRecord;
@property (getter=isMigrationSuccessful, nonatomic, readonly) bool migrationSuccessful;
@property (nonatomic, readonly) long long totalTimeTakenForMigration;

+ (void)_addInfoFromCoreDataError:(id)arg1 logEvent:(id)arg2;
+ (id)allowedValues;
+ (id)autoMigrationAttempt;
+ (void)commitMigrationLogEventToDisk:(id)arg1;
+ (void)commitMigrationLogEventToDiskWithKey:(id)arg1 value:(id)arg2;
+ (bool)doesLogEventExistOnDisk;
+ (void)incrementAutoMigrationAttempt;
+ (void)incrementMigrationAttempt;
+ (long long)migrationAttempt;
+ (id)migrationLogEventRecord;
+ (void)recordIsDryRun:(bool)arg1;
+ (void)recordMigrationEnd:(bool)arg1;
+ (void)recordMigrationEndTimeWithValue:(unsigned long long)arg1;
+ (void)recordMigrationFailedWithError:(id)arg1 withReason:(id)arg2;
+ (void)recordMigrationStart:(bool)arg1 isDryRun:(bool)arg2;
+ (void)recordMigrationStartTimeWithValue:(unsigned long long)arg1;
+ (void)removeMigrationLogEventRecordFromDisk;
+ (void)setAutoMigration:(bool)arg1;
+ (void)setMigrationSuccessful:(bool)arg1;

- (void).cxx_destruct;
- (id)init;
- (bool)isAutoMigration;
- (bool)isDryRun;
- (bool)isMigrationSuccessful;
- (id)logEventRecord;
- (id)migrationDetailsLogEventFromDisk;
- (id)migrationEndLogEventFromDisk;
- (long long)migrationEndTime;
- (id)migrationError;
- (long long)migrationStartTime;
- (void)populateTotalMigrationTime;
- (void)resetStoredMigrationState;
- (void)setLogEventRecord:(id)arg1;
- (bool)shouldSubmitLogEvent;
- (long long)totalTimeTakenForMigration;

@end
