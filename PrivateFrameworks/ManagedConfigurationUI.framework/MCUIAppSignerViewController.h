
@interface MCUIAppSignerViewController : MCUITableViewController {
    MCUIAppSigner * _appSigner;
    bool  _isNetworkReachable;
    NSObject<OS_dispatch_group> * _trustActionGroup;
    <MCUIAppSignerUninstaller> * _uninstaller;
}

@property (nonatomic, readonly) MCUIAppSigner *appSigner;
@property (nonatomic) bool isNetworkReachable;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *trustActionGroup;
@property (nonatomic, retain) <MCUIAppSignerUninstaller> *uninstaller;

- (void).cxx_destruct;
- (void)_appSignerWasAddedOnlineRequired:(bool)arg1;
- (void)_appSignerWasRemoved;
- (void)_appSignersUpdated:(id)arg1;
- (bool)_isEnterpriseAppTrustAllowed;
- (bool)_isTrustPreventedByLockdownMode;
- (void)_presentAppRemovalAlert;
- (void)_presentNetworkRequiredAlert;
- (void)_presentTrustAlert;
- (void)_presentVerifyAppAlert;
- (void)_removeAppSignerApps;
- (void)_setup;
- (bool)_showTrustUntrustRow;
- (bool)_showVerifyRowIncludeAlmostUntrustedApps:(bool)arg1;
- (void)_trustActionGroupVerifyAppsAndTrustSigner:(bool)arg1;
- (void)_trustAppSigner;
- (void)_verifyApps;
- (id)appSigner;
- (void)dealloc;
- (id)initWithAppSigner:(id)arg1;
- (id)initWithAppSigner:(id)arg1 uninstaller:(id)arg2;
- (bool)isFreeDeveloper;
- (bool)isNetworkReachable;
- (void)networkReachabilityChanged:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAppSigner:(id)arg1;
- (void)setIsNetworkReachable:(bool)arg1;
- (void)setTrustActionGroup:(id)arg1;
- (void)setUninstaller:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)trustActionGroup;
- (id)uninstaller;

@end
