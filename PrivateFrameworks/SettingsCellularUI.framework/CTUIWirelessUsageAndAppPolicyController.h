
@interface CTUIWirelessUsageAndAppPolicyController : PSListController <CoreTelephonyClientSubscriberDelegate> {
    PSUIAppDataUsageGroup * _appDataUsageGroup;
    CoreTelephonyClient * _coreTelephonyClient;
    PSSpecifier * _groupSpecifier;
    bool  _shouldCalculateUsage;
}

@property (nonatomic, retain) PSUIAppDataUsageGroup *appDataUsageGroup;
@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property bool shouldCalculateUsage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCellularPlanChangedNotification:(id)arg1;
- (void)_handleNewCarrierNotification:(id)arg1;
- (void)_handleWirelessDataUsageChangedNotification:(id)arg1;
- (id)appDataUsageGroup;
- (id)coreTelephonyClient;
- (void)dealloc;
- (id)getLogger;
- (id)groupSpecifier;
- (id)init;
- (void)managedConfigurationProfileListDidChange;
- (void)managedConfigurationSettingsDidChange;
- (id)selectSpecifier:(id)arg1;
- (void)setAppDataUsageGroup:(id)arg1;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setShouldCalculateUsage:(bool)arg1;
- (bool)shouldCalculateUsage;
- (bool)shouldReloadSpecifiersOnResume;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)specifiers;

@end
