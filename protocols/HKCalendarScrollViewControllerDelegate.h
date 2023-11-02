
@protocol HKCalendarScrollViewControllerDelegate <NSObject>

@required

- (void)calendarScrollViewController:(HKCalendarScrollViewController *)arg1 didSelectDate:(NSDate *)arg2;
- (void)calendarScrollViewController:(HKCalendarScrollViewController *)arg1 didUpdateCenteredMonth:(NSDate *)arg2;

@optional

- (void)calendarScrollViewController:(void *)arg1 accessoryViewForDate:(void *)arg2 accessoryViewCompletion:(void *)arg3; // needs 3 arg types, found 8: HKCalendarScrollViewController *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIView *, void*

@end
