
@interface SCLDaySettingsSpecifierSource : SCLSpecifierDataSource <SCLTimeIntervalDataSourceDelegate> {
    NSArray * _currentSpecifiers;
    SCLCustomDayDataSource * _customDayDataSource;
    PSSpecifier * _groupSpecifier;
    SCLTimeIntervalDataSource * _repeatedDaySource;
}

@property (nonatomic, retain) NSArray *currentSpecifiers;
@property (nonatomic, retain) SCLCustomDayDataSource *customDayDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SCLTimeIntervalDataSource *repeatedDaySource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentSpecifiers;
- (id)customDayDataSource;
- (void)dealloc;
- (id)groupSpecifier;
- (id)initWithListController:(id)arg1 viewModel:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)repeatScheduleForRepeatingScheduleType:(unsigned long long)arg1;
- (id)repeatedDaySource;
- (void)setCurrentSpecifiers:(id)arg1;
- (void)setCustomDayDataSource:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setRepeatedDaySource:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 specifier:(id)arg3;
- (void)timeIntervalDataSource:(id)arg1 didUpdateTimeIntervals:(id)arg2;
- (void)updateScheduleType:(unsigned long long)arg1;

@end
