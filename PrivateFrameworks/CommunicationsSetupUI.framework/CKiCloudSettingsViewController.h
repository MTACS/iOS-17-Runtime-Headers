
@interface CKiCloudSettingsViewController : ACUIDataclassConfigurationViewController <CKiCloudSettingsViewModelDelegate> {
    AIDAAccountManager * _accountManager;
    ICQAppCloudStorage * _appCloudStorage;
    bool  _cloudSyncingEnabled;
    bool  _storageUsedRequestInProgress;
    CKiCloudSettingsViewModel * _viewModel;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (nonatomic, retain) ICQAppCloudStorage *appCloudStorage;
@property (getter=isCloudSyncingEnabled, nonatomic) bool cloudSyncingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStorageUsedRequestInProgress, nonatomic) bool storageUsedRequestInProgress;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKiCloudSettingsViewModel *viewModel;

- (void).cxx_destruct;
- (id)_fetchKeepMessagesPreference:(id)arg1;
- (id)_fetchStorageUsed:(id)arg1;
- (id)_fetchSyncStatusText:(id)arg1;
- (id)_headerGroupSpecifiers;
- (void)_internalInit;
- (id)_messagesInCloudCount:(id)arg1;
- (void)_navigateToMessagesSettings;
- (void)_presentAlertForAccountMismatchFromSpecifier:(id)arg1;
- (void)_presentScreenForSpecifier:(id)arg1;
- (void)_startObservingAccountStoreChanges;
- (void)_stopObservingAccountStoreChanges;
- (id)_syncDetailsSpecifiers;
- (id)_syncSpecifiers;
- (id)account;
- (id)accountManager;
- (id)appCloudStorage;
- (void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2;
- (void)dealloc;
- (void)iCloudSettingsViewModelDidUpdateState:(id)arg1;
- (id)init;
- (bool)isCloudSyncingEnabled;
- (bool)isStorageUsedRequestInProgress;
- (void)navigateToSettingsWithURLString:(id)arg1 forSpecifier:(id)arg2;
- (void)setAccountManager:(id)arg1;
- (void)setAppCloudStorage:(id)arg1;
- (void)setCloudSyncingEnabled:(bool)arg1;
- (void)setStorageUsedRequestInProgress:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (id)specifiers;
- (void)startSync:(id)arg1;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;

@end
