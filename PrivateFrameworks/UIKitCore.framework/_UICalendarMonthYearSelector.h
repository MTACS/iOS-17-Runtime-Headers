
@interface _UICalendarMonthYearSelector : UIView {
    _UICalendarDataModel * _dataModel;
    UIDatePicker * _datePicker;
    <_UICalendarMonthYearSelectorDelegate> * _delegate;
}

@property (nonatomic, retain) _UICalendarDataModel *dataModel;
@property (nonatomic) <_UICalendarMonthYearSelectorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_didSelectDate:(id)arg1;
- (void)_setupViewHierarchy;
- (id)dataModel;
- (id)delegate;
- (void)didUpdateCalendar;
- (void)didUpdateLocale;
- (void)didUpdateTimeZone;
- (void)didUpdateVisibleMonth;
- (id)initWithDataModel:(id)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setDataModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedMonth:(id)arg1;
- (void)setSelectedMonth:(id)arg1 animated:(bool)arg2;

@end
