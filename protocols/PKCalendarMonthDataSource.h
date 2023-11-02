
@protocol PKCalendarMonthDataSource <NSObject>

@required

- (NSCalendar *)calendar;
- (NSDate *)calendarMonthStartDate;
- (bool)canSelectDate:(NSDate *)arg1;
- (bool)isDateSelected:(NSDate *)arg1;
- (unsigned long long)numberOfDaysInWeek;
- (unsigned long long)numberOfWeeks;
- (bool)shouldShowDate:(NSDate *)arg1;
- (NSString *)stringForDay:(NSDate *)arg1;
- (NSString *)stringForWeekday:(NSDate *)arg1;

@end
