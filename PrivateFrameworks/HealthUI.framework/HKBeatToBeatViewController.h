
@interface HKBeatToBeatViewController : HKTableViewController {
    NSArray * _bpmPoints;
    HKDisplayTypeController * _displayTypeController;
    HKHealthStore * _healthStore;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, retain) NSArray *bpmPoints;
@property (nonatomic, retain) HKDisplayTypeController *displayTypeController;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (void)_addHeartbeatSeriesSample:(id)arg1;
- (id)_displayStringForInstantaneousBPM:(double)arg1;
- (id)_displayStringForTime:(double)arg1;
- (id)_initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (id)bpmPoints;
- (id)displayTypeController;
- (id)healthStore;
- (id)initWithHRVSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (id)initWithHeartbeatSeriesSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setBpmPoints:(id)arg1;
- (void)setDisplayTypeController:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setUnitController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)unitController;
- (void)viewDidLoad;

@end
