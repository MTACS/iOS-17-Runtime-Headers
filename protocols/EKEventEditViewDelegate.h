
@protocol EKEventEditViewDelegate <NSObject>

@required

- (void)eventEditViewController:(EKEventEditViewController *)arg1 didCompleteWithAction:(long long)arg2;

@optional

- (EKCalendar *)eventEditViewControllerDefaultCalendarForNewEvents:(EKEventEditViewController *)arg1;

@end
