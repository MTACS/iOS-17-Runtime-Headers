
@protocol EKDayViewContentDelegate <NSObject, EKUIAppReviewPrompter>

@required

- (void)dayViewContent:(EKDayViewContent *)arg1 didTapInEmptySpaceOnDay:(double)arg2;
- (void)dayViewContent:(EKDayViewContent *)arg1 didTapPinnedOccurrence:(EKEvent *)arg2;
- (UIViewController *)presentationControllerForEditMenu;
- (NSArray *)selectedEventsForEditMenu;

@optional

- (void)dayViewContent:(EKDayViewContent *)arg1 didCreateOccurrenceViews:(NSArray *)arg2;
- (void)dayViewContent:(EKDayViewContent *)arg1 didSelectEvent:(EKEvent *)arg2 userInitiated:(bool)arg3;
- (UIView *)dayViewContent:(EKDayViewContent *)arg1 selectedCopyViewForOccurrenceView:(EKDayOccurrenceView *)arg2;
- (void)dayViewContentDidLayout:(EKDayViewContent *)arg1;
- (bool)dayViewContentShouldDrawSynchronously:(EKDayViewContent *)arg1;

@end
