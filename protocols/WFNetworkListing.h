
@protocol WFNetworkListing <NSObject>

@required

- (<WFNetworkListRecord> *)currentNetwork;
- (float)currentNetworkScaledRSSI;
- (long long)currentNetworkState;
- (void)powerStateDidChange:(bool)arg1;
- (void)refresh;
- (void)setCurrentNetwork:(id <WFNetworkListRecord>)arg1;
- (void)setCurrentNetworkScaledRSSI:(float)arg1;
- (void)setCurrentNetworkState:(long long)arg1;
- (void)setListDelegate:(id <WFNetworkListDelegate>)arg1;
- (void)setNetworks:(NSSet *)arg1;
- (void)setShowOtherNetwork:(bool)arg1;
- (bool)showOtherNetwork;

@optional

- (unsigned long long)currentNetworkSignalBars;
- (NSString *)currentNetworkSubtitle;
- (long long)deviceCapability;
- (bool)disabled;
- (void)managedAppleIDStateChange:(bool)arg1;
- (void)networkListDelegateDidPresentAccessoryViewController:(UIViewController<WFAccessoryViewController> *)arg1;
- (void)networkListDelegateWillPresentAccessoryViewController:(UIViewController<WFAccessoryViewController> *)arg1;
- (void)powerModificationStateDidChange:(bool)arg1;
- (void)powerStateDidChangeToggle:(unsigned long long)arg1;
- (void)reloadCellsForNetworkNames:(NSSet *)arg1;
- (void)setAskToJoinMode:(long long)arg1;
- (void)setAutoInstantHotspotJoinOption:(long long)arg1;
- (void)setCurrentNetwork:(id <WFNetworkListRecord>)arg1 previousNetwork:(id <WFNetworkListRecord>)arg2 reason:(unsigned long long)arg3;
- (void)setCurrentNetworkSignalBars:(unsigned long long)arg1;
- (void)setCurrentNetworkSubtitle:(NSString *)arg1;
- (void)setDeviceCapability:(long long)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setScanning:(bool)arg1;
- (void)setUserAutoJoinEnabled:(bool)arg1;
- (bool)shouldPromptWhenCarPlaySessionIsActive;
- (bool)shouldPromptWhenPersonalHotspotIsEnabled;
- (bool)supportsHealthRecommendations;
- (bool)supportsWiFiPasswordSharing;
- (void)updateViewsForNetworks:(NSSet *)arg1;
- (bool)userAutoJoinEnabled;

@end
