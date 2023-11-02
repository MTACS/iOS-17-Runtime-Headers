
@interface WBSCloudBookmarksMigrationCoordinator : NSObject {
    bool  _didDetermineReadyToMigrate;
    <WBSLogger> * _keyActionsLogger;
    <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> * _localDataProvider;
    bool  _migrationEnabled;
    NSObject<OS_dispatch_queue> * _processingQueue;
    long long  _skipReason;
    <WBSSafariBookmarksSyncAgentProtocol> * _syncAgent;
}

@property (nonatomic, retain) <WBSLogger> *keyActionsLogger;
@property (nonatomic, readonly) <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> *localDataProvider;
@property (getter=isMigrationEnabled, nonatomic) bool migrationEnabled;
@property (nonatomic, readonly) <WBSSafariBookmarksSyncAgentProtocol> *syncAgent;

- (void).cxx_destruct;
- (void)_beginMigrationIfPossible;
- (void)_considerOverridingOtherMigratingDevice;
- (void)_determineCourseOfActionFromRemoteMigrationState;
- (void)_determineCourseOfActionFromSyncAgentMigrationState;
- (void)_logErrorAsKeyAction:(id)arg1;
- (void)_logKeyAction:(id)arg1;
- (id)init;
- (id)initWithSyncAgent:(id)arg1 localDataProvider:(id)arg2;
- (bool)isMigrationEnabled;
- (id)keyActionsLogger;
- (id)localDataProvider;
- (void)setKeyActionsLogger:(id)arg1;
- (void)setMigrationEnabled:(bool)arg1;
- (void)startCoordinatingMigration;
- (id)syncAgent;

@end
