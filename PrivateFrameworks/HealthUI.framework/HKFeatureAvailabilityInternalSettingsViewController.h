
@interface HKFeatureAvailabilityInternalSettingsViewController : HKTableViewController {
    HKFeatureAvailabilityInternalSettingsConfiguration * _configuration;
    bool  _deletingSamples;
    HKHealthStore * _healthStore;
    NPSManager * _syncManager;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) HKFeatureAvailabilityInternalSettingsConfiguration *configuration;
@property (getter=isDeletingSamples, nonatomic) bool deletingSamples;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) NPSManager *syncManager;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)_buttonCellForTableView:(id)arg1;
- (void)_disableOverride:(bool)arg1;
- (bool)_disabledOverriden;
- (void)_enableFeature:(bool)arg1;
- (bool)_featureEnabled;
- (long long)_offsetSectionForSection:(long long)arg1;
- (id)configuration;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2;
- (bool)isDeletingSamples;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDeletingSamples:(bool)arg1;
- (id)syncManager;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)userDefaults;
- (void)viewDidLoad;

@end
