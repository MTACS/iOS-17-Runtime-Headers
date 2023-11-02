
@interface HKDataMetadataOxygenSaturationSection : HKDataMetadataSection <HKDataMetadataViewControllerDelegate> {
    HKDataMetadataSimpleTableViewCell * _cell;
    HKDisplayTypeController * _displayTypeController;
    HKHealthStore * _healthStore;
    HKQuantitySample * _heartRateSample;
    HKSample * _sample;
    <HKDataMetadataSubsampleDelegate> * _subsampleDelegate;
    HKUnitPreferenceController * _unitController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)displayNameForSampleType:(id)arg1 displayTypeController:(id)arg2;
- (id)displayTypeController;
- (id)formattedHeartRateFromSample:(id)arg1;
- (id)healthStore;
- (id)heartRateFromSample:(id)arg1;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 subsampleDelegate:(id)arg5;
- (unsigned long long)numberOfRowsInSection;
- (void)queryForData;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;
- (id)unitController;

@end
