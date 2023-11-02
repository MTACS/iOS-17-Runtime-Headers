
@protocol UICalendarSelectionSingleDateDelegate <NSObject>

@required

- (void)dateSelection:(UICalendarSelectionSingleDate *)arg1 didSelectDate:(NSDateComponents *)arg2;

@optional

- (bool)dateSelection:(UICalendarSelectionSingleDate *)arg1 canSelectDate:(NSDateComponents *)arg2;

@end
