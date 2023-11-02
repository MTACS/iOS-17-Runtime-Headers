
@protocol EKCalendarChooserDelegate <NSObject>

@optional

- (void)calendarChooserDidCancel:(EKCalendarChooser *)arg1;
- (void)calendarChooserDidFinish:(EKCalendarChooser *)arg1;
- (void)calendarChooserSelectionDidChange:(EKCalendarChooser *)arg1;

@end
