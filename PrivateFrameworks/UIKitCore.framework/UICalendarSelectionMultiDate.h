
@interface UICalendarSelectionMultiDate : UICalendarSelection {
    <UICalendarSelectionMultiDateDelegate> * _delegate;
    struct { 
        unsigned int canSelect : 1; 
        unsigned int canDeselect : 1; 
        unsigned int didSelect : 1; 
        unsigned int didDeselect : 1; 
    }  _delegateImplements;
    NSMutableArray * _selectedDates;
}

@property (nonatomic, readonly) <UICalendarSelectionMultiDateDelegate> *delegate;
@property (nonatomic, copy) NSArray *selectedDates;

- (void).cxx_destruct;
- (id)_removeSelectedDatesSatisfyingPredicate:(id /* block */)arg1;
- (id)_sanitizeDateComponents:(id)arg1 calendar:(id)arg2;
- (bool)canSelectDate:(id)arg1;
- (id)delegate;
- (void)didChangeAvailableDateRange:(id)arg1;
- (void)didChangeCalendar:(id)arg1;
- (void)didChangeVisibleMonth:(id)arg1;
- (void)didDeselectDate:(id)arg1;
- (void)didMoveToCalendarView;
- (void)didSelectDate:(id)arg1;
- (bool)highlightsToday;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)selectAllDatesAnimated:(bool)arg1;
- (id)selectedDates;
- (void)setSelectedDates:(id)arg1;
- (void)setSelectedDates:(id)arg1 animated:(bool)arg2;
- (bool)shouldDeselectDate:(id)arg1;
- (void)willMoveToCalendarView:(id)arg1;

@end
