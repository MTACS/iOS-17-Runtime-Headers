
@protocol EKDayViewDataSource <NSObject>

@required

- (CUIKOccurrencesCollection *)dayView:(EKDayView *)arg1 eventsForStartDate:(EKCalendarDate *)arg2 endDate:(EKCalendarDate *)arg3;

@end
