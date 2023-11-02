
@protocol PXCMMViewControllerDelegate <NSObject>

@optional

- (void)completeMyMomentViewController:(PXCMMViewController *)arg1 showPhotoPickerForSession:(PXCMMSession *)arg2;
- (void)didCancelCompleteMyMomentViewController:(PXCMMViewController *)arg1;
- (void)startPreloadingTasksForCompleteMyMomentViewController:(PXCMMViewController *)arg1;

@end
