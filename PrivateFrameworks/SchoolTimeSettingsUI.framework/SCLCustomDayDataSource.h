
@interface SCLCustomDayDataSource : SCLSpecifierDataSource <SCLCustomDayViewControllerDelegate> {
    SCLTimeIntervalsFormatter * _formatter;
    PSSpecifier * _groupSpecifier;
    NSArray * _weekdaySpecifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SCLTimeIntervalsFormatter *formatter;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *weekdaySpecifiers;

- (void).cxx_destruct;
- (void)customDayViewControllerWillDismiss:(id)arg1;
- (long long)dayForSpecifier:(id)arg1;
- (id)formatter;
- (id)groupSpecifier;
- (id)initWithListController:(id)arg1 viewModel:(id)arg2;
- (id)scheduleIntervalForSpecifier:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setWeekdaySpecifiers:(id)arg1;
- (void)showEditorForSpecifier:(id)arg1;
- (id)specifierForDay:(long long)arg1;
- (void)updateSpecifiersWithCurrentCalendar;
- (id)weekdaySpecifiers;

@end
