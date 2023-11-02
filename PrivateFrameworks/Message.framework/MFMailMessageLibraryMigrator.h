
@interface MFMailMessageLibraryMigrator : NSObject <EFContentProtectionObserver, EFLoggable> {
    NSObject<OS_dispatch_queue> * _contentProtectionQueue;
    <MFMailMessageLibraryMigratorDelegate> * _delegate;
    NSConditionLock * _migrationState;
    bool  _needsRebuildMessageInfoIndex;
    bool  _needsRebuildTriggers;
    bool  _needsSpotlightReindex;
    NSMutableArray * _postMigrationBlocks;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <MFMailMessageLibraryMigratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSConditionLock *migrationState;
@property (readonly) Class superclass;

+ (int)currentVersion;
+ (id)log;

- (void).cxx_destruct;
- (long long)_checkContentProtectionState;
- (bool)_checkForeignKeysWithConnection:(id)arg1;
- (long long)_runMigrationStepsFromVersion:(int)arg1 connection:(id)arg2 schema:(id)arg3;
- (void)addPostMigrationBlock:(id /* block */)arg1;
- (long long)attachProtectedDatabaseWithConnection:(id)arg1;
- (id)contentProtectionQueue;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (id)delegate;
- (void)detachProtectedDatabaseWithConnection:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)migrateWithDatabaseConnection:(id)arg1 schema:(id)arg2;
- (id)migrationState;
- (bool)needsRebuildMessageInfoIndex;
- (bool)needsRebuildTriggers;
- (bool)needsSpotlightReindex;
- (void)noteNeedsRebuildTriggers;
- (void)noteNeedsSpotlightReindex;
- (void)noteRebuildMessageInfoIndex;
- (void)resetTTRPromptAndForceReindex;
- (void)runPostMigrationBlocksWithConnection:(id)arg1;

@end
