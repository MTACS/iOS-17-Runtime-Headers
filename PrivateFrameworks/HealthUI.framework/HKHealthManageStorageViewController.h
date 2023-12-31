
@interface HKHealthManageStorageViewController : PSListController {
    HKCloudSyncControl * _cloudSyncControl;
    HKHealthStore * _healthStore;
    UIProgressHUD * _spinnerView;
    long long  _status;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;

- (void).cxx_destruct;
- (void)_disableAndDelete:(id)arg1;
- (void)_loadCloudSyncStorageStatus;
- (void)confirmDisable:(id)arg1;
- (id)healthStore;
- (void)hideSpinner;
- (id)init;
- (void)showSpinnerMessage:(id)arg1;
- (id)specifiers;
- (void)viewWillAppear:(bool)arg1;

@end
