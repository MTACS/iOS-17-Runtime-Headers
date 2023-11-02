
@interface _UICalendarRangeSelection : UICalendarSelection {
    _UICalendarDateRange * _dateRange;
    <_UICalendarRangeSelectionDelegate> * _delegate;
    struct { 
        unsigned int canSelectDate : 1; 
        unsigned int didBeginSelection : 1; 
        unsigned int didEndSelection : 1; 
        unsigned int didSelectRange : 1; 
    }  _delegateImplements;
    NSDateComponents * _pendingStartDate;
}

@property (nonatomic, copy) _UICalendarDateRange *dateRange;
@property (nonatomic, readonly) <_UICalendarRangeSelectionDelegate> *delegate;

- (void).cxx_destruct;
- (void)_deselectDatesInRange:(id)arg1 animated:(bool)arg2;
- (id)_sanitizedDateRange:(id)arg1 calendar:(id)arg2;
- (bool)canSelectDate:(id)arg1;
- (id)dateRange;
- (id)delegate;
- (void)didChangeAvailableDateRange:(id)arg1;
- (void)didChangeCalendar:(id)arg1;
- (void)didChangeVisibleMonth:(id)arg1;
- (void)didDeselectDate:(id)arg1;
- (void)didMoveToCalendarView;
- (void)didSelectDate:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)selectAllDatesAnimated:(bool)arg1;
- (void)setDateRange:(id)arg1;
- (void)setDateRange:(id)arg1 animated:(bool)arg2;
- (bool)shouldDeselectDate:(id)arg1;
- (void)willMoveToCalendarView:(id)arg1;

@end
