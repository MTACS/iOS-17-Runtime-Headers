
@interface UICalendarSelection : NSObject <_UICalendarSelection> {
    UICalendarView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UICalendarView *view;

- (void).cxx_destruct;
- (id)_init;
- (bool)canSelectDate:(id)arg1;
- (void)didChangeAvailableDateRange:(id)arg1;
- (void)didChangeCalendar:(id)arg1;
- (void)didChangeVisibleMonth:(id)arg1;
- (void)didDeselectDate:(id)arg1;
- (void)didMoveToCalendarView;
- (void)didSelectDate:(id)arg1;
- (bool)highlightsToday;
- (void)selectAllDatesAnimated:(bool)arg1;
- (void)setView:(id)arg1;
- (bool)shouldDeselectDate:(id)arg1;
- (void)updateSelectableDates;
- (id)view;
- (void)willMoveToCalendarView:(id)arg1;

@end
