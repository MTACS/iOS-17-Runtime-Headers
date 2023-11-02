
@protocol EKEventDetailTitleCellDelegate

@required

- (void)editButtonPressed;
- (bool)minimalMode;
- (UIViewController *)owningViewController;
- (void)predictionWasActedOn;
- (NSDate *)proposedTime;
- (void)refreshForHeightChange;
- (bool)shouldShowEditButtonInline;
- (bool)showsDetectedConferenceItem;
- (void)titleCell:(EKEventDetailTitleCell *)arg1 requestPresentShareSheetWithActivityItems:(NSArray *)arg2 withPopoverSourceView:(UIView *)arg3;
- (bool)titleCellShouldPresentShareSheet:(EKEventDetailTitleCell *)arg1;

@end
