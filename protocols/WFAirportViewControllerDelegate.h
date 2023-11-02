
@protocol WFAirportViewControllerDelegate <NSObject, WFNetworkListDelegate>

@required

- (void)airportSettingsViewController:(WFAirportViewController *)arg1 setAskToJoinMode:(long long)arg2;
- (NSString *)airportSettingsViewController:(WFAirportViewController *)arg1 unconfiguredAccessoriesGroupHeaderTitle:(NSArray *)arg2;
- (long long)airportSettingsViewControllerAskToJoinMode:(WFAirportViewController *)arg1;
- (bool)airportSettingsViewControllerCurrentNetworkConnectionIsProblematic:(WFAirportViewController *)arg1;
- (void)airportSettingsViewControllerDidTapDataUsage:(WFAirportViewController *)arg1;
- (void)airportSettingsViewControllerDidTapDiagnosticsMode:(WFAirportViewController *)arg1 showNANUI:(bool)arg2;
- (void)airportSettingsViewControllerDidTapKnownNetworks:(WFAirportViewController *)arg1;
- (bool)airportSettingsViewControllerShouldShowDiagnosticsMode:(WFAirportViewController *)arg1;
- (bool)airportSettingsViewControllerShouldShowKnownNetworks:(WFAirportViewController *)arg1;
- (bool)airportSettingsViewControllerShouldShowNANUI:(WFAirportViewController *)arg1;
- (bool)networkListViewControllerLockdownModeActive:(UIViewController<WFNetworkListing> *)arg1;
- (bool)networkListViewControllerNetworkRestrictionActive:(UIViewController<WFNetworkListing> *)arg1;
- (bool)networkListViewControllerPowerModificationDisabled:(UIViewController<WFNetworkListing> *)arg1;
- (NSString *)passwordToDisplayForSSID:(NSString *)arg1;

@optional

- (void)airportSettingsViewControllerDidFinishEditingKnownNetworks:(WFAirportViewController *)arg1;
- (void)airportSettingsViewControllerDidStartEditingKnownNetworks:(WFAirportViewController *)arg1;

@end
