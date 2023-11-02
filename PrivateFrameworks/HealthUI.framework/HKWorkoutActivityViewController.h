
@interface HKWorkoutActivityViewController : HKTableViewController {
    HKWorkoutActivity * _activity;
    HKDisplayTypeController * _displayTypeController;
    NSMutableArray * _sections;
    HKUnitPreferenceController * _unitPreferenceController;
}

@property (nonatomic, retain) HKWorkoutActivity *activity;
@property (nonatomic, retain) HKDisplayTypeController *displayTypeController;
@property (nonatomic, retain) NSMutableArray *sections;
@property (nonatomic, retain) HKUnitPreferenceController *unitPreferenceController;

- (void).cxx_destruct;
- (void)_addSectionIfNotNil:(id)arg1;
- (void)_loadSections;
- (id)activity;
- (id)displayTypeController;
- (id)initWithActivity:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sections;
- (void)setActivity:(id)arg1;
- (void)setDisplayTypeController:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setUnitPreferenceController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)unitPreferenceController;

@end
