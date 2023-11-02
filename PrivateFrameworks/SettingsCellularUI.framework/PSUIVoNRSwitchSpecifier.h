
@interface PSUIVoNRSwitchSpecifier : PSSpecifier {
    PSUICoreTelephonyCallCache * _callCache;
    PSUICoreTelephonyCapabilitiesCache * _capabilitiesCache;
    PSUICoreTelephonyCarrierBundleCache * _carrierBundleCache;
    NSString * _instance;
    PSListController * _listController;
    PSSpecifier * _parentSpecifier;
    PSConfirmationSpecifier * _phoneCallWillEndWarning;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

- (void).cxx_destruct;
- (id)getLogger;
- (id)getVoNREnabled;
- (id)groupFooterText;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 callCache:(id)arg3 capabilitiesCache:(id)arg4 carrierBundleCache:(id)arg5;
- (void)reloadSelfInListController;
- (void)setUpPhoneCallWillEndWarningSpecifier;
- (void)setVoNREnabled:(bool)arg1;
- (void)setVoNREnabled:(id)arg1 specifier:(id)arg2;
- (void)setVoNROff;
- (bool)shouldAddVoNRUnoptimizedWarning;
- (bool)shouldEnableVoNRSwitchCell;
- (bool)shouldShowCallWillEndWarning;
- (bool)showDisableVoNRWarningsIfNeeded;
- (void)showPhoneCallWillEndWarning;

@end
