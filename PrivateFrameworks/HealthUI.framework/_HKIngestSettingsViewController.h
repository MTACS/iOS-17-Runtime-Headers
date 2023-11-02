
@interface _HKIngestSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate> {
    NSMutableArray * _dataTypeNames;
    bool  _deviceEnabled;
    bool  _deviceFound;
    NSUUID * _deviceIdentifier;
    HKDisplayTypeController * _displayTypeController;
    HKHealthServicesManager * _healthServicesManager;
    HKHealthStore * _healthStore;
}

@property (nonatomic, copy) NSUUID *deviceIdentifier;
@property (nonatomic, retain) HKHealthStore *healthStore;

- (void).cxx_destruct;
- (id)_initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 useInsetStyling:(bool)arg3;
- (id)deviceIdentifier;
- (void)fetchEnabledStatusForPeripheral;
- (id)healthStore;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
