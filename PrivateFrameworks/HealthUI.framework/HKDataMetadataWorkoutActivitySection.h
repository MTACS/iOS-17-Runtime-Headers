
@interface HKDataMetadataWorkoutActivitySection : HKDataMetadataSection {
    NSDateComponentsFormatter * _dateFormatter;
    HKDisplayTypeController * _displayTypeController;
    HKWorkoutDurationNumberFormatter * _durationFormatter;
    HKUnitPreferenceController * _unitPreferenceController;
    HKWorkout * _workout;
}

@property (nonatomic, retain) NSDateComponentsFormatter *dateFormatter;
@property (nonatomic, retain) HKDisplayTypeController *displayTypeController;
@property (nonatomic, retain) HKWorkoutDurationNumberFormatter *durationFormatter;
@property (nonatomic, retain) HKUnitPreferenceController *unitPreferenceController;
@property (nonatomic, retain) HKWorkout *workout;

- (void).cxx_destruct;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)dateFormatter;
- (id)displayTypeController;
- (id)durationFormatter;
- (id)initWithSample:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;
- (void)setDateFormatter:(id)arg1;
- (void)setDisplayTypeController:(id)arg1;
- (void)setDurationFormatter:(id)arg1;
- (void)setUnitPreferenceController:(id)arg1;
- (void)setWorkout:(id)arg1;
- (id)unitPreferenceController;
- (id)workout;

@end
