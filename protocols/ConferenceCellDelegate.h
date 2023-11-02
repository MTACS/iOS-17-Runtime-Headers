
@protocol ConferenceCellDelegate <NSObject>

@required

- (void)conferenceCell:(EKEventDetailConferenceCell *)arg1 requestPresentShareSheetWithActivityItems:(NSArray *)arg2 withPopoverSourceView:(UIView *)arg3;
- (bool)conferenceCellShouldPresentShareSheet:(EKEventDetailConferenceCell *)arg1;
- (void)conferenceCellUpdated:(EKEventDetailConferenceCell *)arg1;
- (UIViewController *)owningViewController;

@end
