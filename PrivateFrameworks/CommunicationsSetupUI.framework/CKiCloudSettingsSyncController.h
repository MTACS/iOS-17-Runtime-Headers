
@interface CKiCloudSettingsSyncController : NSObject <IMCloudKitEventHandler> {
    long long  _currentSyncState;
    unsigned long long  _messagesToUploadCount;
    id /* block */  _syncStatusHandler;
    NSString * _syncSummary;
    bool  _syncing;
}

@property (nonatomic) long long currentSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long messagesToUploadCount;
@property (nonatomic, readonly) bool micAccountsMatch;
@property (getter=isMiCEnabled, nonatomic, readonly) bool micEnabled;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ syncStatusHandler;
@property (nonatomic, retain) NSString *syncSummary;
@property (getter=isSyncing, nonatomic) bool syncing;

- (void).cxx_destruct;
- (void)_loadInitialState;
- (id)_syncSummaryForSyncState:(id)arg1;
- (void)_wrapperInit;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
- (long long)currentSyncState;
- (id)initWithSyncStatusHandler:(id /* block */)arg1;
- (bool)isMiCEnabled;
- (bool)isSyncing;
- (unsigned long long)messagesToUploadCount;
- (bool)micAccountsMatch;
- (void)setCurrentSyncState:(long long)arg1;
- (void)setMessagesToUploadCount:(unsigned long long)arg1;
- (void)setSyncStatusHandler:(id /* block */)arg1;
- (void)setSyncSummary:(id)arg1;
- (void)setSyncing:(bool)arg1;
- (void)startSync;
- (long long)syncStateForIMCloudKitSyncJobState:(unsigned long long)arg1;
- (id /* block */)syncStatusHandler;
- (id)syncSummary;

@end
