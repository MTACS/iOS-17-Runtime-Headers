
@interface ICQInternetPrivacyDetailSpecifierProvider : NSObject <AAUISpecifierProvider> {
    AIDAAccountManager * _accountManager;
    NSArray * _banners;
    <AAUISpecifierProviderDelegate> * _delegate;
    <ICQInternetPrivacyDetailDelegate> * _detailDelegate;
    PSSpecifier * _enableSwitchSpecifer;
    UIViewController * _presenter;
    NSArray * _specifiers;
    ICQInternetPrivacyViewModel * _viewModel;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (nonatomic, retain) NSArray *banners;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <ICQInternetPrivacyDetailDelegate> *detailDelegate;
@property (nonatomic, retain) PSSpecifier *enableSwitchSpecifer;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presenter;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICQInternetPrivacyViewModel *viewModel;

- (void).cxx_destruct;
- (id)_IPAddressLocationSpecifier;
- (void)_IPAddressLocationSpecifierWasTapped:(id)arg1;
- (id)_bannerSpecifiers;
- (id)_explanationSpecifiers;
- (void)_openSystemStatusSpecifierWasTapped;
- (void)_pausePrivateRelay;
- (void)_refreshStatusAndPostNotification;
- (void)_reloadSpecifiers;
- (id)_serviceEnabledForSpecifier:(id)arg1;
- (id)_serviceEnabledSpecifier;
- (void)_setServiceEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)_startFetchingBannerModels;
- (id)_switchOffAlert;
- (id)_switchOffUnsupportedCellularAlert;
- (id)_switchOffUnsupportedWifiAlert;
- (void)_turnOffCellularSpecifierWasTapped;
- (id)_turnOffUnsupportedCellularAlert;
- (id)_turnOffUnsupportedWifiAlert;
- (void)_turnOffWifiSpecifierWasTapped;
- (void)_turnOnCellularSpecifierWasTapped;
- (id)_turnOnDNSAlert;
- (void)_turnOnDNSSpecifierWasTapped;
- (id)_turnOnSafariAlert;
- (void)_turnOnSafariSpecifierWasTapped;
- (void)_turnOnWifiSpecifierWasTapped;
- (void)_unsupportedCellularLearnMoreSpecifierWasTapped;
- (void)_unsupportedRegionLearnMoreSpecifierWasTapped;
- (void)_unsupportedWiFiLearnMoreSpecifierWasTapped;
- (void)_updateEnableStatusTo:(bool)arg1;
- (id)accountManager;
- (id)banners;
- (id)delegate;
- (id)detailDelegate;
- (id)enableSwitchSpecifer;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithViewModel:(id)arg1 accountManager:(id)arg2;
- (void)presentIncompatibleSitesHelp;
- (id)presenter;
- (void)setAccountManager:(id)arg1;
- (void)setBanners:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailDelegate:(id)arg1;
- (void)setEnableSwitchSpecifer:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)specifiers;
- (id)viewModel;

@end
