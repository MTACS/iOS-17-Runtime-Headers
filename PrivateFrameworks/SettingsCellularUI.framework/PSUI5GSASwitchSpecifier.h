
@interface PSUI5GSASwitchSpecifier : PSSpecifier {
    PSUICoreTelephonyCarrierBundleCache * _carrierBundleCache;
    NSString * _instance;
    PSListController * _listController;
    CTNRStatus * _nrStatus;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

- (void).cxx_destruct;
- (void)checkNRStatusAndDisableIfNeeded;
- (id)getLogger;
- (id)groupFooterText;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 carrierBundleCache:(id)arg3;
- (id)is5GSAEnabled;
- (void)refreshSpecifiersInHostController;
- (void)set5GSAEnabled:(bool)arg1;
- (void)set5GSASwitch:(id)arg1 specifier:(id)arg2;
- (bool)shouldAddCoverageExtensionFooterText;
- (bool)shouldAddDefaultOffCarrierFooterText;

@end
