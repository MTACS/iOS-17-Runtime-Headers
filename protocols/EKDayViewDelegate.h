
@protocol EKDayViewDelegate <NSObject, EKUIAppReviewPrompter>

@required

- (UIViewController *)presentationControllerForEditMenu;
- (NSArray *)selectedEventsForEditMenu;

@optional

- (void)dayView:(EKDayView *)arg1 didCreateOccurrenceViews:(NSArray *)arg2;
- (void)dayView:(EKDayView *)arg1 didScaleDayViewWithScale:(double)arg2;
- (void)dayView:(EKDayView *)arg1 didSelectEvent:(EKEvent *)arg2;
- (void)dayView:(EKDayView *)arg1 didSelectEvent:(EKEvent *)arg2 userInitiated:(bool)arg3;
- (void)dayView:(EKDayView *)arg1 didUpdateScrollPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)dayView:(EKDayView *)arg1 firstVisibleSecondChanged:(unsigned long long)arg2;
- (void)dayView:(EKDayView *)arg1 isPinchingDayViewWithScale:(double)arg2;
- (void)dayView:(EKDayView *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
- (UIView *)dayView:(EKDayView *)arg1 selectedCopyViewForOccurrence:(EKDayOccurrenceView *)arg2;
- (void)dayViewDidCompleteAsyncLoadAndLayout:(EKDayView *)arg1;
- (void)dayViewDidFinishScrollingToOccurrence:(EKDayView *)arg1;
- (void)dayViewDidTapEmptySpace:(EKDayView *)arg1;
- (void)dayViewDidTapEmptySpace:(EKDayView *)arg1 onDate:(EKCalendarDate *)arg2;
- (bool)dayViewShouldDrawSynchronously:(EKDayView *)arg1;

@end
