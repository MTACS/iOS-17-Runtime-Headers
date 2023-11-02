
@interface HKDataMetadataDetailSection : HKDataMetadataSimpleSection <HKDataMetadataDetailSectionDataReceiver> {
    HKCalendarCache * _calendarCache;
    HKDisplayTypeController * _displayTypeController;
    HKDataMetadataDataSource * _metadataDataSource;
    NSObject<HKDataMetadataObject> * _object;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, readonly) HKCalendarCache *calendarCache;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) NSObject<HKDataMetadataObject> *object;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (void)_addDetailValues;
- (void)_addMetadataDataSourceDetailValues;
- (void)addSampleDetailValues;
- (id)calendarCache;
- (id)displayTypeController;
- (id)initWithSample:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (id)initWithWorkoutActivity:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (id)initWithWorkoutEvent:(id)arg1;
- (id)object;
- (id)sectionFooter;
- (id)unitController;

@end
