
@interface ACUISettingsController : PSListController <ACUISettingsPluginParentProtocol, ACUIViewControllerAccountChangeObserver> {
    PSSpecifier * _accountGroupSpecifier;
    NSArray * _accountSpecifiers;
    ACMonitoredAccountStore * _accountStore;
    NSArray * _accounts;
    PSSpecifier * _addAccountSpecifier;
    NSString * _filteredDataclass;
    bool  _isInHandleURL;
    bool  _isLazyLoadingPluginSpecifiers;
    NSArray * _lazyLoadedSpecifiers;
    NSArray * _loadingInProgressSpecifiers;
    NSMutableDictionary * _pluginToSpecifiersMap;
    ACUISettingsPluginManager * _settingsPluginManager;
    bool  _shouldSkipEffectiveSettingChangedNotification;
    NSObject<OS_dispatch_group> * _specifierLoadGroup;
    PSViewController * _viewControllerPushedByControllerLoadActionDuringHandleURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountCellWasTappedWithSpecifier:(id)arg1;
- (id)_accountGroupIdentifier:(id)arg1 ignoringGroups:(id)arg2;
- (id)_accountStore;
- (void)_accountStoreDidChange;
- (void)_accountsWithCompletion:(id /* block */)arg1;
- (id)_addAccountSpecifier;
- (void)_effectiveSettingsChangedNotification:(id)arg1;
- (void)_fetchLazyLoadedSpecifiers;
- (void)_filterAccounts:(id)arg1 toTopLevel:(id)arg2 grouped:(id)arg3 ignoringGroups:(id)arg4;
- (bool)_isAccount:(id)arg1 inList:(id)arg2;
- (bool)_isAccountList:(id)arg1 identicalToAccountList:(id)arg2;
- (bool)_isAccountModificationDisabledByRestrictions;
- (void)_loadAccountsWithCompletion:(id /* block */)arg1;
- (void)_lowPowerModeChangedNotification:(id)arg1;
- (void)_scheduleSettingsCellWasTappedWithSpecifier:(id)arg1;
- (id)_scheduleSettingsModeForSpecifier:(id)arg1;
- (id)_settingsPluginManager;
- (id)_specifierForAccount:(id)arg1;
- (id)_specifierForCollectionCellLinkingToAccounts:(id)arg1 withGroupIdentifier:(id)arg2 underParentGroup:(id)arg3;
- (id)_specifierForScheduleSettings;
- (void)_specifiersForAccountsGroupWithCompletion:(id /* block */)arg1;
- (id)_specifiersForLoadingMessage;
- (id)_specifiersForSettingsProvidedByPlugin:(id)arg1;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (void)dealloc;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)navigationItem;
- (bool)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(bool*)arg3 withCompletion:(id /* block */)arg4;
- (void)setSpecifier:(id)arg1;
- (id)specifiers;
- (void)specifiersDidChangeForPlugin:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewController:(id)arg1 didFinishRemovingAccountWithSuccess:(bool)arg2;

@end
