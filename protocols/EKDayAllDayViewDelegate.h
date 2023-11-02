
@protocol EKDayAllDayViewDelegate <NSObject, EKUIAppReviewPrompter>

@required

- (EKCalendarDate *)allDayViewRequestsCurrentDisplayDate:(EKDayAllDayView *)arg1;
- (UIViewController *)presentationControllerForEditMenu;
- (NSArray *)selectedEventsForEditMenu;

@optional

- (void)allDayView:(EKDayAllDayView *)arg1 didSelectEvent:(EKEvent *)arg2 userInitiated:(bool)arg3;
- (bool)allDayViewContentShouldDrawSynchronously:(EKDayAllDayView *)arg1;
- (void)allDayViewDidLayoutSubviews:(EKDayAllDayView *)arg1;

@end
