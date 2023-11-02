
@interface VUIAccountSettingsViewController : PSListController <UITableViewDataSource, UITextFieldDelegate> {
    NSNumber * __syncMySportsEnabled;
    NSURL * _addFundsUrl;
    bool  _authenticationInProgress;
    long long  _connectedWatchListAppCount;
    long long  _installedWatchListAppCount;
    long long  _notifAuthStatus;
    NSTimer * _syncMySportsDebouncer;
    PSSpecifier * _syncMySportsSpecifier;
}

@property (nonatomic, retain) NSNumber *_syncMySportsEnabled;
@property (nonatomic, retain) NSURL *addFundsUrl;
@property (nonatomic) bool authenticationInProgress;
@property (nonatomic) long long connectedWatchListAppCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long installedWatchListAppCount;
@property (nonatomic) long long notifAuthStatus;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *syncMySportsDebouncer;
@property (nonatomic, retain) PSSpecifier *syncMySportsSpecifier;

- (void).cxx_destruct;
- (id)_accountSpecifiers;
- (void)_addPrivacyFooterToGroup:(id)arg1;
- (long long)_alertStyle;
- (void)_checkConnectedAppsWithDispatchGroup:(id)arg1;
- (void)_checkExternalLinksWithDispatchGroup:(id)arg1;
- (id)_clearHistorySpecifiers;
- (void)_clearPlayHistory:(id)arg1;
- (id)_createAxIdFromTableCell:(id)arg1;
- (id)_dialogMetricsData;
- (void)_didSelectSpecifier:(id)arg1;
- (void)_dismissViewController;
- (id)_externalSpecifiers;
- (id)_getConnectedAppsCountString;
- (void)_handleAccountSettingsEventWithAmsWebView:(id)arg1;
- (void)_handleAccountSettingsEventWithAmsWebView:(id)arg1 storeServicesBagKey:(id)arg2 storeServicesUrl:(id)arg3;
- (void)_handleAccountSettingsEventWithUrl:(id)arg1 amsBagKey:(id)arg2 useAMSWebView:(bool)arg3;
- (void)_handleNotificationsOff;
- (void)_loadDynamicIdentifiers;
- (id)_mySportsSpecifiers;
- (id)_notificationGroupSpecifierIdentifier;
- (id)_notificationSpecifiers;
- (void)_parseUrl:(id)arg1;
- (void)_promptForNotificationsAuth;
- (void)_recordDialogClick:(id)arg1;
- (void)_setSyncMySportsEnabled:(id)arg1;
- (void)_showPrivacySheet:(id)arg1;
- (id)_signOutSpecifiers;
- (id)_sourcesSpecifiers;
- (id)_syncMySportsEnabled;
- (void)_syncMySportsSettingDidChange:(id)arg1;
- (id)addFundsUrl;
- (bool)authenticationInProgress;
- (long long)connectedWatchListAppCount;
- (id)init;
- (long long)installedWatchListAppCount;
- (long long)notifAuthStatus;
- (void)setAddFundsUrl:(id)arg1;
- (void)setAuthenticationInProgress:(bool)arg1;
- (void)setConnectedWatchListAppCount:(long long)arg1;
- (void)setInstalledWatchListAppCount:(long long)arg1;
- (void)setNotifAuthStatus:(long long)arg1;
- (void)setSyncMySportsDebouncer:(id)arg1;
- (void)setSyncMySportsSpecifier:(id)arg1;
- (void)set_syncMySportsEnabled:(id)arg1;
- (id)specifiers;
- (id)syncMySportsDebouncer;
- (id)syncMySportsSpecifier;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
