
@interface PSUIVoiceAndDataSpecifier : PSSpecifier {
    bool  _3GOverrideTo4G;
    bool  _LTEOverrideTo4G;
    PSUICoreTelephonyCallCache * _callCache;
    PSUICoreTelephonyCarrierBundleCache * _carrierBundleCache;
    CoreTelephonyClient * _ctClient;
    PSUIDeviceWiFiState * _deviceWifiState;
    PSListController * _drillDownController;
    PSListController * _hostController;
    PSSpecifier * _mobileDataGroup;
    PSUICoreTelephonyRegistrationCache * _regCache;
    CTServiceDescriptor * _serviceDescriptor;
    bool  _showLegacyRAT;
    PSSimStatusCache * _simStatusCache;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    NSArray * _supportedDataRates;
}

- (void).cxx_destruct;
- (void)acceptedRATSelectionDuringCall:(id)arg1;
- (void)canceledRATSelectionDuringCall;
- (id)createCallMayEndConfirmationSpecifierForTargetRATMode:(int)arg1 currentRATMode:(int)arg2;
- (id)getLocalizedStringFromRATMode:(int)arg1;
- (id)getLocalizedStringsFromDataRate:(long long)arg1;
- (id)getLogger;
- (id)getRATMode;
- (id)getRATModesFromDataRate:(long long)arg1;
- (id)getSmartDataModeState;
- (void)handleMaxDataRateChanged;
- (id)initWithHostController:(id)arg1 subscriptionContext:(id)arg2 groupSpecifierToUpdateFooterFor:(id)arg3;
- (id)initWithHostController:(id)arg1 subscriptionContext:(id)arg2 groupSpecifierToUpdateFooterFor:(id)arg3 serviceDescriptor:(id)arg4 coreTelephonyClient:(id)arg5 callCache:(id)arg6 registrationCache:(id)arg7 carrierBundleCache:(id)arg8 simStatusCache:(id)arg9 deviceWifiState:(id)arg10;
- (id)localizedRATModeStringForPrefix:(id)arg1 targetMode:(int)arg2;
- (id)localizedWarningStringForKey:(id)arg1 andRATMode:(int)arg2;
- (void)populateSpecifiers:(id)arg1 values:(id)arg2;
- (void)setMaxDataRateForRATMode:(int)arg1;
- (void)setRATMode:(id)arg1 specifier:(id)arg2;
- (void)setSmartDataModeState:(int)arg1;
- (void)setUpInternalState;
- (void)setUpRATSpecifers;
- (bool)shouldShowCallEndWarningForTargetRATMode:(int)arg1 currentRATMode:(int)arg2;
- (void)showCallMayEndWarningForTargetRATMode:(int)arg1 currentRATMode:(int)arg2;
- (void)startObservingNotifications;
- (id)suffixStringFromRATMode:(int)arg1;
- (int)warningRATModeForTargetMode:(int)arg1 currentMode:(int)arg2;

@end
