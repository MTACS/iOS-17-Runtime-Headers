
@protocol PUActivityViewControllerDelegate <NSObject>

@optional

- (void)activityViewControllerDidChangeToSharingStyleExpanded:(PUActivityViewController *)arg1;
- (bool)activityViewControllerShouldCancelAfterPreparationCanceled:(PUActivityViewController *)arg1;
- (void)activityViewControllerWillDisappear:(PUActivityViewController *)arg1;

@end
