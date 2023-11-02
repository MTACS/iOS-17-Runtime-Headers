
@protocol UICalendarSelectionMultiDateDelegate <NSObject>

@required

- (void)multiDateSelection:(UICalendarSelectionMultiDate *)arg1 didDeselectDate:(NSDateComponents *)arg2;
- (void)multiDateSelection:(UICalendarSelectionMultiDate *)arg1 didSelectDate:(NSDateComponents *)arg2;

@optional

- (bool)multiDateSelection:(UICalendarSelectionMultiDate *)arg1 canDeselectDate:(NSDateComponents *)arg2;
- (bool)multiDateSelection:(UICalendarSelectionMultiDate *)arg1 canSelectDate:(NSDateComponents *)arg2;

@end
