
@interface STDeviceBedtimeListController : PSListController <PSDateTimePickerCellDelegate> {
    STUIUser * _affectedUser;
    PSSpecifier * _atBedtimeGroupSpecifier;
    PSSpecifier * _atBedtimeSpecifier;
    STDeviceBedtime * _bedtime;
    bool  _canAskForMoreTime;
    NSObject<STRootViewModelCoordinator> * _coordinator;
    PSSpecifier * _customizeDaysSpecifier;
    <STDeviceBedtimeListControllerDelegate> * _delegate;
    PSSpecifier * _deviceBedtimeSpecifier;
    PSSpecifier * _downTimeGroupSpecifier;
    NSTimer * _downtimeScheduleRefreshTimer;
    PSSpecifier * _endTimePickerSpecifier;
    PSSpecifier * _endTimeSpecifier;
    PSSpecifier * _everyDaySpecifier;
    PSSpecifier * _informativeTextGroupSpecifier;
    bool  _isEditingSimple;
    NSArray * _orderedLocalizedWeekdayNames;
    NSArray * _orderedWeekdayIndexes;
    PSSpecifier * _scheduleSwitchGroupSpecifier;
    PSSpecifier * _scheduleTypeGroupSpecifier;
    PSSpecifier * _scheduledSwitchSpecifier;
    PSSpecifier * _selectedTimeSpecifier;
    PSSpecifier * _startTimePickerSpecifier;
    PSSpecifier * _startTimeSpecifier;
    PSSpecifier * _timeGroupSpecifier;
    NSArray * _weekdaySpecifiers;
}

@property (nonatomic, retain) STUIUser *affectedUser;
@property (nonatomic, retain) PSSpecifier *atBedtimeGroupSpecifier;
@property (nonatomic, retain) PSSpecifier *atBedtimeSpecifier;
@property (nonatomic, copy) STDeviceBedtime *bedtime;
@property (nonatomic) bool canAskForMoreTime;
@property (nonatomic, retain) NSObject<STRootViewModelCoordinator> *coordinator;
@property (retain) PSSpecifier *customizeDaysSpecifier;
@property (nonatomic) <STDeviceBedtimeListControllerDelegate> *delegate;
@property (nonatomic, retain) PSSpecifier *deviceBedtimeSpecifier;
@property (nonatomic, retain) PSSpecifier *downTimeGroupSpecifier;
@property (nonatomic, retain) NSTimer *downtimeScheduleRefreshTimer;
@property (nonatomic, retain) PSSpecifier *endTimePickerSpecifier;
@property (nonatomic, retain) PSSpecifier *endTimeSpecifier;
@property (retain) PSSpecifier *everyDaySpecifier;
@property (nonatomic, retain) PSSpecifier *informativeTextGroupSpecifier;
@property (nonatomic) bool isEditingSimple;
@property (readonly) NSArray *orderedLocalizedWeekdayNames;
@property (readonly) NSArray *orderedWeekdayIndexes;
@property (nonatomic, retain) PSSpecifier *scheduleSwitchGroupSpecifier;
@property (nonatomic, retain) PSSpecifier *scheduleTypeGroupSpecifier;
@property (nonatomic, retain) PSSpecifier *scheduledSwitchSpecifier;
@property (nonatomic, retain) PSSpecifier *selectedTimeSpecifier;
@property (nonatomic, retain) PSSpecifier *startTimePickerSpecifier;
@property (nonatomic, retain) PSSpecifier *startTimeSpecifier;
@property (nonatomic, retain) PSSpecifier *timeGroupSpecifier;
@property (retain) NSArray *weekdaySpecifiers;

- (void).cxx_destruct;
- (void)_actuallyToggleDowntimeEnabled;
- (id)_createDefaultCustomScheduleFromSimpleSchedule:(id)arg1;
- (id)_customScheduleTime:(id)arg1;
- (id)_deviceBedtimeSpecifierWithBedtime:(id)arg1 downtimeGroupSpecifier:(id)arg2;
- (void)_didEndEditingDailySchedule:(id)arg1;
- (void)_didFinishEditingBedtime;
- (void)_renderDeviceBedtimeSpecifierWithBedtime:(id)arg1;
- (void)_showCustomizeDailyScheduleListController:(id)arg1;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)arg1;
- (id)_simpleEndTime:(id)arg1;
- (id)_simpleStartTime:(id)arg1;
- (void)_toggleDowntimeEnabled;
- (id)affectedUser;
- (id)askForMoreTime:(id)arg1;
- (id)atBedtimeGroupSpecifier;
- (id)atBedtimeSpecifier;
- (id)atDowntimeFooterText;
- (id)bedtime;
- (bool)canAskForMoreTime;
- (bool)canBeShownFromSuspendedState;
- (id)coordinator;
- (id)customizeDaysSpecifier;
- (void)datePickerChanged:(id)arg1;
- (id)datePickerForSpecifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)deviceBedtimeEnabled:(id)arg1;
- (id)deviceBedtimeSpecifier;
- (id)downTimeGroupSpecifier;
- (id)downtimeScheduleRefreshTimer;
- (id)endTimePickerSpecifier;
- (id)endTimeSpecifier;
- (id)everyDaySpecifier;
- (id)informativeTextGroupSpecifier;
- (id)init;
- (bool)isEditingSimple;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)orderedLocalizedWeekdayNames;
- (id)orderedWeekdayIndexes;
- (void)scheduleDowntimeRefreshAndReloadSpecifiers;
- (void)scheduleDowntimeRefreshIfNeeded;
- (id)scheduleSwitchGroupSpecifier;
- (id)scheduleTypeGroupSpecifier;
- (id)scheduledSwitchSpecifier;
- (id)selectedTimeSpecifier;
- (void)setAffectedUser:(id)arg1;
- (void)setAskForMoreTime:(id)arg1 specifier:(id)arg2;
- (void)setAtBedtimeGroupSpecifier:(id)arg1;
- (void)setAtBedtimeSpecifier:(id)arg1;
- (void)setBedtime:(id)arg1;
- (void)setCanAskForMoreTime:(bool)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setCustomizeDaysSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceBedtimeEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDeviceBedtimeSpecifier:(id)arg1;
- (void)setDownTimeGroupSpecifier:(id)arg1;
- (void)setDowntimeScheduleRefreshTimer:(id)arg1;
- (void)setEndTimePickerSpecifier:(id)arg1;
- (void)setEndTimeSpecifier:(id)arg1;
- (void)setEveryDaySpecifier:(id)arg1;
- (void)setInformativeTextGroupSpecifier:(id)arg1;
- (void)setIsEditingSimple:(bool)arg1;
- (void)setScheduleSwitchGroupSpecifier:(id)arg1;
- (void)setScheduleTypeGroupSpecifier:(id)arg1;
- (void)setScheduledSwitchSpecifier:(id)arg1;
- (void)setSelectedTimeSpecifier:(id)arg1;
- (void)setStartTimePickerSpecifier:(id)arg1;
- (void)setStartTimeSpecifier:(id)arg1;
- (void)setTimeGroupSpecifier:(id)arg1;
- (void)setWeekdaySpecifiers:(id)arg1;
- (id)specifiers;
- (id)startTimePickerSpecifier;
- (id)startTimeSpecifier;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)timeFooterText;
- (id)timeGroupSpecifier;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)weekdaySpecifiers;
- (void)willResignActive;

@end
