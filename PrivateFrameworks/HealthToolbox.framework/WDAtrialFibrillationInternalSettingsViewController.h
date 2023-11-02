
@interface WDAtrialFibrillationInternalSettingsViewController : HKTableViewController {
    bool  _deletingSamples;
    HKHealthStore * _healthStore;
    HKKeyValueDomain * _keyValueDomain;
    NSArray * _sections;
}

@property (nonatomic) bool deletingSamples;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKKeyValueDomain *keyValueDomain;
@property (nonatomic, retain) NSArray *sections;

- (void).cxx_destruct;
- (void)_addNewSample;
- (id)_buttonCellForTableView:(id)arg1 text:(id)arg2;
- (void)_deleteAllNotifications;
- (void)_deleteAllNotificationsAndTachograms;
- (void)_fakeNewAnalyzedSample;
- (id)_featureAvailabilityStatusString;
- (id)_featureAvailabilityStringForFeatureName:(id)arg1 onboardedCountryCodeSupportedState:(id)arg2;
- (void)_resetOnboarding;
- (void)_showFeatureStateViewControllerForFeatureIdentifier:(id)arg1;
- (bool)deletingSamples;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)keyValueDomain;
- (id)makeFeatureStateViewControllerForFeatureIdentifier:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sections;
- (void)setDeletingSamples:(bool)arg1;
- (void)setSections:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;

@end
