
@interface WFTimeOfDayTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTimeOffsetPickerViewControllerDelegate, WFTimeTriggerDayOfWeekCellDelegate> {
    unsigned long long  _timeOfDayInterval;
    <_CDUserContext> * _userContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool showingPicker;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timeOfDayInterval;
@property (nonatomic, readonly) <_CDUserContext> *userContext;

- (void).cxx_destruct;
- (id)allDaysOfWeek;
- (id)calendarFooterText;
- (id)currentDayOfMonth;
- (id)currentSunriseTime;
- (id)currentSunsetTime;
- (id)customSections;
- (id)dateComponentsFromTriggerDays;
- (void)dayOfWeekPickerCell:(id)arg1 didChangeSelectedRecurrences:(id)arg2;
- (void)dismissKeyboard;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentOffsetPickerViewControllerForEvent:(unsigned long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setTimeOfDayInterval:(unsigned long long)arg1;
- (bool)showingPicker;
- (id)subtitleForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (unsigned long long)timeOfDayInterval;
- (void)timeOffsetPickerViewController:(id)arg1 didSelectOffset:(unsigned long long)arg2;
- (void)timeOffsetPickerViewControllerDidCancel:(id)arg1;
- (void)timePickerUpdated:(id)arg1;
- (id)titleForIndexPath:(id)arg1;
- (void)updateCalendarDayIfNeeded;
- (void)updateCalendarFooterText;
- (void)updateTriggerCalendarDayFromDate:(id)arg1;
- (void)updateTriggerTimeFromDate:(id)arg1;
- (id)userContext;
- (void)viewWillAppear:(bool)arg1;

@end
