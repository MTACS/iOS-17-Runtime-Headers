
@interface PSUIDataModeSpecifier : PSSpecifier <Loggable> {
    CoreTelephonyClient * _ctClient;
    PSListController * _hostController;
    CTServiceDescriptor * _serviceDescriptor;
    unsigned long long  _showDataMode;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long showDataMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataModeFromNumber:(id)arg1;
- (id)getDataMode:(id)arg1;
- (id)getLogger;
- (id)initWithCTClient:(id)arg1 hostController:(id)arg2 parentSpecifier:(id)arg3;
- (id)interfaceCostFromBool:(bool)arg1;
- (bool)isHighDataModeSupported;
- (id)isInterfaceCostExpensive:(id)arg1;
- (id)isLowDataModeEnabled:(id)arg1;
- (bool)isLowDataModeSupported;
- (id)lowDataModeFromBool:(bool)arg1;
- (id)lowDataModeGroupSpecifier;
- (void)populateDrillDownSpecifiers;
- (void)prepareDataModeDrillDown;
- (void)prepareLowDataModeSwitch;
- (void)setDataMode:(id)arg1 specifier:(id)arg2;
- (void)setFooterText;
- (void)setInterfaceCostExpensive:(id)arg1 specifier:(id)arg2;
- (void)setLowDataMode:(id)arg1 specifier:(id)arg2;
- (void)setShowDataMode:(unsigned long long)arg1;
- (unsigned long long)showDataMode;

@end
