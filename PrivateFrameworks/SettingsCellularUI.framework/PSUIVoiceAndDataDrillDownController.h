
@interface PSUIVoiceAndDataDrillDownController : PSListItemsController <CoreTelephonyClientCapabilitiesDelegate, UIAlertViewDelegate> {
    PSUICoreTelephonyCarrierBundleCache * _cbCache;
    CoreTelephonyClient * _ctClient;
    int  _currentRATMode;
    PSUI5GStandaloneCache * _saCache;
    CTServiceDescriptor * _serviceDescriptor;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory * _switchFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)RATModeForSpecifier:(id)arg1;
- (void)airplaneModeChanged;
- (void)configure5GRATModeSpecifiersEnabledState;
- (void)configureSpecifiers;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (id)getLogger;
- (id)getSwitchSpecifiers;
- (void)handleMaxDataRateChanged;
- (id)identifierForRATMode:(int)arg1;
- (id)init;
- (id)initWithCTClient:(id)arg1 switchFactory:(id)arg2 carrierBundleCache:(id)arg3 standaloneCache:(id)arg4;
- (void)listItemSelected:(id)arg1;
- (void)nrDisableStatusChanged:(id)arg1 status:(id)arg2;
- (void)prepareSpecifiers:(id)arg1;
- (void)reloadSpecifier:(id)arg1;
- (void)set5GRATModeSpecifierEnabledState:(id)arg1;
- (void)setRATGroupFooterText;
- (void)setSpecifier:(id)arg1;
- (void)setUpRATModeSpecifierIdentifiers:(id)arg1;
- (bool)shouldEnable5GRATModeSpecifiers;
- (bool)shouldShow5GReliabilityWarning;
- (bool)shouldShow5GSABatteryLifeReliabilityWarning;
- (bool)shouldShow5GSASwitch;
- (bool)shouldShowFooterTextWithVoiceExplanation;
- (bool)shouldShowVoLTESwitch;
- (bool)shouldShowVoNRSwitch;
- (id)specifiers;
- (void)startObservingNotifications;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateCurrentRATModeFromSpecifier:(id)arg1;

@end
