
@protocol WFNetworkListDelegate <NSObject>

@required

- (void)networkListViewController:(UIViewController<WFNetworkListing> *)arg1 didTapRecord:(id <WFNetworkListRecord>)arg2;
- (void)networkListViewController:(UIViewController<WFNetworkListing> *)arg1 setAutoInstantOption:(long long)arg2;
- (void)networkListViewController:(UIViewController<WFNetworkListing> *)arg1 setWAPIEnabled:(bool)arg2;
- (void)networkListViewController:(UIViewController<WFNetworkListing> *)arg1 showSettingsForNetwork:(id <WFNetworkListRecord>)arg2;
- (void)networkListViewController:(UIViewController<WFNetworkListing> *)arg1 showSettingsForNetwork:(id <WFNetworkListRecord>)arg2 context:(long long)arg3;
- (void)networkListViewController:(UIViewController<WFNetworkListing> *)arg1 userDidChangePower:(bool)arg2;
- (void)networkListViewController:(UIViewController<WFNetworkListing> *)arg1 userDidChangePowerToggle:(unsigned long long)arg2;
- (long long)networkListViewControllerAutoInstantHotspotOption:(UIViewController<WFNetworkListing> *)arg1;
- (bool)networkListViewControllerCurrentPowerState:(UIViewController<WFNetworkListing> *)arg1;
- (unsigned long long)networkListViewControllerCurrentPowerStateToggle:(UIViewController<WFNetworkListing> *)arg1;
- (void)networkListViewControllerDidAppear:(UIViewController<WFNetworkListing> *)arg1;
- (void)networkListViewControllerDidDisappear:(UIViewController<WFNetworkListing> *)arg1;
- (void)networkListViewControllerDidFinish:(UIViewController<WFNetworkListing> *)arg1;
- (void)networkListViewControllerDidTapOtherNetwork:(UIViewController<WFNetworkListing> *)arg1;
- (bool)networkListViewControllerIsAutoUnlockEnabled:(UIViewController<WFNetworkListing> *)arg1;
- (bool)networkListViewControllerIsManagedAppleID:(UIViewController<WFNetworkListing> *)arg1;
- (bool)networkListViewControllerLockdownModeActive:(UIViewController<WFNetworkListing> *)arg1;
- (bool)networkListViewControllerNetworkRestrictionActive:(UIViewController<WFNetworkListing> *)arg1;
- (bool)networkListViewControllerPowerModificationDisabled:(UIViewController<WFNetworkListing> *)arg1;
- (bool)networkListViewControllerWAPIEnabled:(UIViewController<WFNetworkListing> *)arg1;

@optional

- (NSSet *)editableKnownNetworks;
- (NSSet *)managedKnownNetworks;
- (long long)networkListViewControllerOverrideDeviceCapability:(UIViewController<WFNetworkListing> *)arg1;
- (bool)removeKnownNetworks:(NSArray *)arg1;
- (void)setShouldShowDetailTapOnCurrentNetwork:(bool)arg1;

@end
