
@protocol EKDayViewControllerDataSource <NSObject>

@required

- (CUIKOccurrencesCollection *)dayViewController:(EKDayViewController *)arg1 eventsForStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
- (bool)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(EKDayViewController *)arg1;
- (EKCalendar *)defaultCalendarForNewEvents;
- (CUIKPasteboardManager *)pasteboardManagerForDayViewController:(EKDayViewController *)arg1;

@end
