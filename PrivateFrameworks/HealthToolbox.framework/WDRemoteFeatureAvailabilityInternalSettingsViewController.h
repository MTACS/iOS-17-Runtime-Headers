
@interface WDRemoteFeatureAvailabilityInternalSettingsViewController : HKTableViewController {
    NSSet * _conditions;
    int  _featureAvailabilityConditionsDidUpdateNotificationToken;
    NSUserDefaults * _userDefaults;
    NSDictionary * _userDefaultsContent;
    NSArray * _userDefaultsContentKeys;
}

@property (nonatomic, retain) NSSet *conditions;
@property (nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, retain) NSDictionary *userDefaultsContent;
@property (nonatomic, retain) NSArray *userDefaultsContentKeys;

- (void).cxx_destruct;
- (void)_featureAvailabilityConditionsDidUpdate;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (id)conditions;
- (id)currentlocaleCountryCode;
- (void)dealloc;
- (id)evaluateRulesForCondition:(id)arg1;
- (int)featureAvailabilityConditionsDidUpdateNotificationToken;
- (id)initWithConditions:(id)arg1;
- (id)jsonStringFromDictionary:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadUserDefaultsContent;
- (void)setConditions:(id)arg1;
- (void)setFeatureAvailabilityConditionsDidUpdateNotificationToken:(int)arg1;
- (void)setUserDefaultsContent:(id)arg1;
- (void)setUserDefaultsContentKeys:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)userDefaults;
- (id)userDefaultsContent;
- (id)userDefaultsContentKeys;
- (void)viewDidLoad;

@end
