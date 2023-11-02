
@interface HKSourceAuthorizationFamilyViewController : HKTableViewController {
    HKClinicalSourceAuthorizationController * _clinicalAuthorizationController;
    UIViewController * _clinicalAuthorizationSettingsViewController;
    HKSourceAuthorizationController * _healthDataAuthorizationController;
    UIViewController * _healthDataAuthorizationSettingsViewController;
    HKHealthStore * _healthStore;
    HKSource * _source;
}

@property (nonatomic, retain) HKClinicalSourceAuthorizationController *clinicalAuthorizationController;
@property (nonatomic, retain) UIViewController *clinicalAuthorizationSettingsViewController;
@property (nonatomic, retain) HKSourceAuthorizationController *healthDataAuthorizationController;
@property (nonatomic, retain) UIViewController *healthDataAuthorizationSettingsViewController;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly, copy) HKSource *source;

- (void).cxx_destruct;
- (id)_createFamilyCell;
- (void)_reloadAuthorizationSettings;
- (id)_valueStringForAnyCategoryEnabled:(bool)arg1;
- (id)clinicalAuthorizationController;
- (id)clinicalAuthorizationSettingsViewController;
- (id)healthDataAuthorizationController;
- (id)healthDataAuthorizationSettingsViewController;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1 source:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setClinicalAuthorizationController:(id)arg1;
- (void)setClinicalAuthorizationSettingsViewController:(id)arg1;
- (void)setHealthDataAuthorizationController:(id)arg1;
- (void)setHealthDataAuthorizationSettingsViewController:(id)arg1;
- (id)source;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
