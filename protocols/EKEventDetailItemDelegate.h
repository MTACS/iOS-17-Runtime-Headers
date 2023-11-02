
@protocol EKEventDetailItemDelegate <NSObject>

@optional

- (<CUIKEditor> *)editorForEventDetailItem:(EKEventDetailItem *)arg1;
- (void)eventDetailItem:(EKEventDetailItem *)arg1 requestPresentShareSheetWithActivityItems:(NSArray *)arg2 withPopoverSourceView:(UIView *)arg3;
- (void)eventDetailItemAccessoryButtonTapped:(EKEventDetailItem *)arg1;
- (bool)eventDetailItemShouldPresentShareSheet:(EKEventDetailItem *)arg1;
- (void)eventDetailItemWantsRefeshForHeightChange;
- (void)eventDetailItemWantsRefresh:(EKEventDetailItem *)arg1;
- (UIScrollView *)eventDetailsScrollView;
- (UIViewController *)eventDetailsViewController;
- (void)eventItem:(EKEventDetailItem *)arg1 wantsViewControllerPresented:(UIViewController *)arg2;
- (void)eventItemDidCommit:(EKEventDetailItem *)arg1;
- (void)eventItemDidEndEditing:(EKEventDetailItem *)arg1;
- (void)eventItemDidSave:(EKEventDetailItem *)arg1;
- (void)eventItemDidStartEditing:(EKEventDetailItem *)arg1;
- (bool)minimalMode;
- (bool)noninteractivePlatterMode;
- (bool)showsDetectedConferenceItem;
- (UIViewController *)viewControllerForEventItem:(EKEventDetailItem *)arg1;

@end
