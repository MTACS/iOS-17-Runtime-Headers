
@interface MCUIListController : MCURLListenerListController <DMCAccountSpecifierProviderDelegate, MCUISpecifierProviderDelegate, UITableViewDelegate> {
    MCUIBridgeSpecifierProvider * _bridgeSpecifierProvider;
    DMCEnrollmentInterface * _dmcEnrollmentInterface;
    NSArray * _managedAccountSpecifiers;
    MCUIMCSpecifierProvider * _mcSpecifierProvider;
    bool  _needsToReloadManageAccountSpecifiers;
    int  _provisioningProfileInstalledToken;
    int  _provisioningProfileRemovedToken;
    NSArray * _vpnBundleControllers;
    NSArray * _vpnSpecifiers;
}

@property (nonatomic, retain) MCUIBridgeSpecifierProvider *bridgeSpecifierProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DMCEnrollmentInterface *dmcEnrollmentInterface;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *managedAccountSpecifiers;
@property (nonatomic, retain) MCUIMCSpecifierProvider *mcSpecifierProvider;
@property (nonatomic) bool needsToReloadManageAccountSpecifiers;
@property (nonatomic) int provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *vpnBundleControllers;
@property (nonatomic, retain) NSArray *vpnSpecifiers;

- (void).cxx_destruct;
- (void)_cleanCacheAndReloadSpecifiers;
- (void)_handleDeferredPush;
- (void)_loadManagedAccountSpecifiersWithCompletionHandler:(id /* block */)arg1;
- (void)_loadVPNSpecifiersWithCompletionHandler:(id /* block */)arg1;
- (void)_mcuiUpdated;
- (void)_showAccountDetailsPaneWithUsername:(id)arg1 completion:(id /* block */)arg2;
- (id)_specifiersForPhone;
- (void)_watchFetchFailed:(id)arg1;
- (void)accountCellWasTapped:(id)arg1;
- (id)bridgeSpecifierProvider;
- (void)dealloc;
- (id)dmcEnrollmentInterface;
- (void)handleURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)managedAccountSpecifiers;
- (id)mcSpecifierProvider;
- (id)mcuiViewController;
- (bool)needsToReloadManageAccountSpecifiers;
- (bool)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(bool*)arg3;
- (int)provisioningProfileInstalledToken;
- (int)provisioningProfileRemovedToken;
- (void)reloadAccountSpecifiersForProvider:(id)arg1;
- (void)setBridgeSpecifierProvider:(id)arg1;
- (void)setDmcEnrollmentInterface:(id)arg1;
- (void)setManagedAccountSpecifiers:(id)arg1;
- (void)setMcSpecifierProvider:(id)arg1;
- (void)setNeedsToReloadManageAccountSpecifiers:(bool)arg1;
- (void)setProvisioningProfileInstalledToken:(int)arg1;
- (void)setProvisioningProfileRemovedToken:(int)arg1;
- (void)setVpnBundleControllers:(id)arg1;
- (void)setVpnSpecifiers:(id)arg1;
- (bool)shouldDeferPushForSpecifierID:(id)arg1;
- (id)specifiers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)vpnBundleControllers;
- (id)vpnSpecifiers;

@end
