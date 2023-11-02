
@protocol EKDayOccurrenceViewDelegate <NSObject, EKUIAppReviewPrompter>

@required

- (void)dayOccurrenceViewSelected:(EKDayOccurrenceView *)arg1 source:(unsigned long long)arg2;
- (UIViewController *)presentationControllerForEditMenu;
- (NSArray *)selectedEventsForEditMenu;

@optional

- (UIView *)selectedCopyViewForDayOccurrenceView:(EKDayOccurrenceView *)arg1;

@end
