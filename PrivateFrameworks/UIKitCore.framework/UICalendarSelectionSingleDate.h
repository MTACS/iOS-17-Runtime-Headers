
@interface UICalendarSelectionSingleDate : UICalendarSelection {
    bool  __selectionFollowsMonthSelection;
    <UICalendarSelectionSingleDateDelegate> * _delegate;
    struct { 
        unsigned int canSelect : 1; 
        unsigned int didSelect : 1; 
    }  _delegateImplements;
    NSDateComponents * _selectedDate;
}

@property (nonatomic) bool _selectionFollowsMonthSelection;
@property (nonatomic, readonly) <UICalendarSelectionSingleDateDelegate> *delegate;
@property (nonatomic, copy) NSDateComponents *selectedDate;

- (void).cxx_destruct;
- (bool)_selectionFollowsMonthSelection;
- (void)_sendDelegateForSelectedDateChange;
- (bool)canSelectDate:(id)arg1;
- (id)delegate;
- (void)didChangeAvailableDateRange:(id)arg1;
- (void)didChangeCalendar:(id)arg1;
- (void)didChangeVisibleMonth:(id)arg1;
- (void)didDeselectDate:(id)arg1;
- (void)didMoveToCalendarView;
- (void)didSelectDate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)selectAllDatesAnimated:(bool)arg1;
- (id)selectedDate;
- (void)setSelectedDate:(id)arg1;
- (void)setSelectedDate:(id)arg1 animated:(bool)arg2;
- (void)set_selectionFollowsMonthSelection:(bool)arg1;
- (bool)shouldDeselectDate:(id)arg1;
- (void)willMoveToCalendarView:(id)arg1;

@end
