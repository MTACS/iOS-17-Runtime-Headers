
@interface CKiCloudSettingsViewModel : NSObject {
    <CKiCloudSettingsViewModelDelegate> * _delegate;
    id  _iCloudMessagingObserverToken;
    CKKeepMessagesPreferenceManager * _keepMessagesPreferenceManager;
    NSUserDefaults * _madridUserDefaults;
    CKiCloudSettingsSyncController * _syncController;
    CKiCloudSyncStateModel * _syncStateModel;
    ICQInAppAction * _upgradeICloudAction;
}

@property (nonatomic) <CKiCloudSettingsViewModelDelegate> *delegate;
@property (nonatomic, readonly) NSString *footerHyperlinkUrl;
@property (nonatomic, retain) id iCloudMessagingObserverToken;
@property (nonatomic, readonly) NSString *keepMessagesPreference;
@property (nonatomic, retain) CKKeepMessagesPreferenceManager *keepMessagesPreferenceManager;
@property (nonatomic, retain) NSUserDefaults *madridUserDefaults;
@property (nonatomic, readonly) NSString *messagesInCloudCount;
@property (nonatomic, readonly) bool micAccountsMatch;
@property (getter=isSyncAvailable, nonatomic, readonly) bool syncAvailable;
@property (nonatomic, retain) CKiCloudSettingsSyncController *syncController;
@property (nonatomic, readonly) long long syncState;
@property (nonatomic, retain) CKiCloudSyncStateModel *syncStateModel;
@property (nonatomic, readonly) NSString *syncStatus;
@property (nonatomic, readonly) NSString *syncStatusFooterSubstringForHyperlink;
@property (nonatomic, readonly) NSString *syncStatusFooterText;
@property (getter=isSyncing, nonatomic, readonly) bool syncing;
@property (nonatomic) ICQInAppAction *upgradeICloudAction;

- (void).cxx_destruct;
- (id)_currentKeepMessagesPreference;
- (void)_internalInit;
- (id)_lastSyncedDateFromDefaults;
- (id)_stateModelForSyncState:(long long)arg1;
- (void)_syncedSettingsDidChange:(id)arg1;
- (void)_updateActionForICQInAppMessage:(id)arg1;
- (void)_updateStateModelForSyncState:(long long)arg1 isSyncing:(bool)arg2 needsViewReload:(bool)arg3;
- (void)_updateStateModelForSyncStateWithICQUIReason:(id)arg1;
- (id)delegate;
- (id)footerHyperlinkUrl;
- (id)iCloudMessagingObserverToken;
- (id)init;
- (bool)isSyncAvailable;
- (bool)isSyncing;
- (id)keepMessagesPreference;
- (id)keepMessagesPreferenceManager;
- (id)madridUserDefaults;
- (id)messagesInCloudCount;
- (bool)micAccountsMatch;
- (void)setDelegate:(id)arg1;
- (void)setICloudMessagingObserverToken:(id)arg1;
- (void)setKeepMessagesPreferenceManager:(id)arg1;
- (void)setMadridUserDefaults:(id)arg1;
- (void)setSyncController:(id)arg1;
- (void)setSyncStateModel:(id)arg1;
- (void)setUpgradeICloudAction:(id)arg1;
- (void)showICloudUpsellIfAvailable;
- (void)stopObservers;
- (void)syncButtonPressed;
- (id)syncController;
- (long long)syncState;
- (id)syncStateModel;
- (id)syncStatus;
- (id)syncStatusFooterSubstringForHyperlink;
- (id)syncStatusFooterText;
- (id)upgradeICloudAction;

@end
