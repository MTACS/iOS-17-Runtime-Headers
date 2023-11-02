
@interface STCustomizeDailyScheduleListController : PSListController <PSDateTimePickerCellDelegate> {
    STBlueprintScheduleCustomDayItem * _dailySchedule;
    PSSpecifier * _dailyScheduleGroupSpecifier;
    PSSpecifier * _endTimePickerSpecifier;
    PSSpecifier * _endTimeSpecifier;
    NSDateComponents * _minimumStartTime;
    PSSpecifier * _startTimePickerSpecifier;
    PSSpecifier * _startTimeSpecifier;
    bool  _weekdayEnabled;
    unsigned long long  _weekdayIndex;
}

@property (copy) STBlueprintScheduleCustomDayItem *dailySchedule;
@property (readonly) PSSpecifier *dailyScheduleGroupSpecifier;
@property (readonly) PSSpecifier *endTimePickerSpecifier;
@property (readonly) PSSpecifier *endTimeSpecifier;
@property (readonly, copy) NSDateComponents *minimumStartTime;
@property (readonly) PSSpecifier *startTimePickerSpecifier;
@property (readonly) PSSpecifier *startTimeSpecifier;
@property (getter=isWeekdayEnabled) bool weekdayEnabled;
@property (readonly) unsigned long long weekdayIndex;

- (void).cxx_destruct;
- (void)_didEndEditingDailySchedule:(bool)arg1;
- (id)_endTime:(id)arg1;
- (id)_getWeekdayEnabled:(id)arg1;
- (void)_setWeekdayEnabled:(id)arg1 specifier:(id)arg2;
- (id)_startTime:(id)arg1;
- (void)_updateTimeSpecifierDetailTextLabelColors:(bool)arg1 selectedSpecifier:(id)arg2 unselectedSpecifier:(id)arg3;
- (bool)canBeShownFromSuspendedState;
- (id)dailySchedule;
- (id)dailyScheduleGroupSpecifier;
- (void)datePickerChanged:(id)arg1;
- (id)datePickerForSpecifier:(id)arg1;
- (id)endTimePickerSpecifier;
- (id)endTimeSpecifier;
- (id)initWithDailySchedule:(id)arg1 weekdayIndex:(unsigned long long)arg2 weekdayName:(id)arg3 minimumStartTime:(id)arg4;
- (bool)isWeekdayEnabled;
- (id)minimumStartTime;
- (void)setDailySchedule:(id)arg1;
- (void)setWeekdayEnabled:(bool)arg1;
- (id)specifiers;
- (id)startTimePickerSpecifier;
- (id)startTimeSpecifier;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillDisappear:(bool)arg1;
- (unsigned long long)weekdayIndex;
- (void)willResignActive;

@end
