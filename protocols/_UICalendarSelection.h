
@protocol _UICalendarSelection <NSObject>

@required

- (bool)canSelectDate:(NSDateComponents *)arg1;
- (void)didChangeAvailableDateRange:(NSDateInterval *)arg1;
- (void)didChangeCalendar:(NSCalendar *)arg1;
- (void)didChangeVisibleMonth:(NSDateComponents *)arg1;
- (void)didDeselectDate:(NSDateComponents *)arg1;
- (void)didSelectDate:(NSDateComponents *)arg1;
- (void)selectAllDatesAnimated:(bool)arg1;
- (void)setView:(UICalendarView *)arg1;
- (bool)shouldDeselectDate:(NSDateComponents *)arg1;
- (UICalendarView *)view;

@end
