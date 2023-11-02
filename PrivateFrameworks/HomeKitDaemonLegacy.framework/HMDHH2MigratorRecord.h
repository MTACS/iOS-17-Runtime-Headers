
@interface HMDHH2MigratorRecord : HMFObject <HMFLogging> {
    unsigned int  _currentMigrationAttempt;
    bool  _dryRun;
    bool  _forceMigrationFailureForTesting;
    NSString * _hh2MigratorRecordDataStorePath;
    bool  _isMigrationInProgress;
    bool  _migrateFromTestDirectory;
    bool  _shouldSkipKeyRollOperations;
}

@property (nonatomic) unsigned int currentMigrationAttempt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dryRun;
@property (nonatomic) bool forceMigrationFailureForTesting;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *hh2MigratorRecordDataStorePath;
@property (nonatomic) bool isMigrationInProgress;
@property (nonatomic) bool migrateFromTestDirectory;
@property (nonatomic) bool shouldSkipKeyRollOperations;
@property (readonly) Class superclass;

+ (id)archiveMigratorDict:(id)arg1;
+ (id)lastMigrationFailure;
+ (id)logCategory;
+ (id)prepareDictionary:(id)arg1;
+ (id)prepareDictionary:(bool)arg1 attempt:(unsigned int)arg2 skipKeyRoll:(bool)arg3 forceFailForTesting:(bool)arg4 migrateFromTestDirectory:(bool)arg5 dryRun:(bool)arg6;
+ (bool)recordMigrationFailureWithError:(id)arg1;
+ (void)removeMigrationFailureRecord;
+ (id)singleRecord;
+ (id)unarchiveMigratorDict:(id)arg1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (bool)beginMigration;
- (unsigned int)currentMigrationAttempt;
- (bool)dryRun;
- (bool)finishMigration;
- (bool)forceMigrationFailureForTesting;
- (id)hh2MigratorRecordDataStorePath;
- (id)initWithLocalStorePath:(id)arg1;
- (bool)isMaximumMigrationAttemptReached;
- (bool)isMigrationInProgress;
- (bool)migrateFromTestDirectory;
- (void)readMigratorRecord;
- (void)setCurrentMigrationAttempt:(unsigned int)arg1;
- (void)setDryRun:(bool)arg1;
- (void)setForceMigrationFailureForTesting:(bool)arg1;
- (void)setHh2MigratorRecordDataStorePath:(id)arg1;
- (void)setIsMigrationInProgress:(bool)arg1;
- (void)setMigrateFromTestDirectory:(bool)arg1;
- (void)setShouldSkipKeyRollOperations:(bool)arg1;
- (bool)shouldSkipKeyRollOperations;
- (void)unarchiveRecordFromData:(id)arg1;
- (void)updateValuesFromDict:(id)arg1;
- (bool)writeMigratorRecord:(id)arg1;
- (bool)writeNewMigrationRecord;
- (bool)writeToDisk;

@end
