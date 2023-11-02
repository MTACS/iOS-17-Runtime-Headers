
@interface PSUIVoLTESwitchSpecifier : PSSpecifier {
    PSUICoreTelephonyCallCache * _callCache;
    PSUICoreTelephonyCapabilitiesCache * _capabilitiesCache;
    PSUICoreTelephonyCarrierBundleCache * _carrierBundleCache;
    PSListController * _listController;
    PSSpecifier * _parentSpecifier;
    PSConfirmationSpecifier * _phoneCallWillEndWarning;
    PSSimStatusCache * _simStatusCache;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

- (void).cxx_destruct;
- (void)addSpinnerIfNeededToCell:(id)arg1;
- (id)createCallCarrierAlertForContext:(id)arg1;
- (id)getLogger;
- (id)getVoLTEEnabled;
- (id)groupFooterText;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 callCache:(id)arg3 capabilitiesCache:(id)arg4 carrierBundleCache:(id)arg5 simStatusCache:(id)arg6;
- (bool)isVoLTEProvisioning;
- (void)reloadSelfInListController;
- (void)setUpPhoneCallWillEndWarningSpecifier;
- (void)setVoLTEEnabled:(bool)arg1;
- (void)setVoLTEEnabled:(id)arg1 specifier:(id)arg2;
- (void)setVoLTEOff;
- (bool)shouldEnableVoLTESwitchCell;
- (bool)shouldShowCallCarrierAlert;
- (bool)shouldShowCallWillEndWarning;
- (bool)shouldShowVoLTEUnsupportedWarning;
- (void)showCallCarrierAlert;
- (bool)showDisableVoLTEWarningsIfNeeded;
- (bool)showEnableVoLTEWarningsIfNeeded;
- (void)showPhoneCallWillEndWarning;
- (bool)showWarningsIfNeededForEnableState:(bool)arg1;

@end
