
@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKDateTimeCellDelegate> {
    UITableViewCell * _customCell;
    NSString * _customRepeatDescription;
    EKDateTimeCell * _endDateCell;
    UIDatePicker * _endDatePicker;
    EKUITableViewCell * _endDatePickerCell;
    NSDate * _originalRepeatEnd;
    long long  _originalRepeatType;
    NSDate * _repeatEnd;
    long long  _repeatType;
    bool  _showingDatePicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_neverLocalizedString;

- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_datePickerChanged:(id)arg1;
- (id)_newDatePicker;
- (void)_updateMinRecurrenceEndDate;
- (bool)_validateRecurrenceType:(id)arg1;
- (id)bestInitialEndDate;
- (bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)dateTimeCell:(id)arg1 dateChanged:(id)arg2;
- (void)dateTimeCellBeganEditing:(id)arg1;
- (void)dateTimeCellDateTapped:(id)arg1;
- (void)dateTimeCellEndedEditing:(id)arg1;
- (void)dateTimeCellTimeTapped:(id)arg1;
- (void)dealloc;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)endRepeatPopupMenu;
- (bool)forceRefreshStartAndEndDatesOnSave;
- (unsigned long long)indexForSubitem:(unsigned long long)arg1;
- (id)init;
- (id)minRecurrenceEndDate;
- (unsigned long long)numberOfSubitems;
- (void)presentCustomRecurrenceVC;
- (id)recurrenceDate;
- (id)recurrenceRuleFromRepeatType:(long long)arg1;
- (id)recurrenceTimeZone;
- (void)refreshFromCalendarItemAndStore;
- (id)repeatPopupMenu;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (void)saveNewRepeatEndDate:(id)arg1;
- (id)stringForDate:(id)arg1;
- (unsigned long long)subitemAtIndex:(unsigned long long)arg1;

@end
