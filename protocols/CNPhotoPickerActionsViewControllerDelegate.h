
@protocol CNPhotoPickerActionsViewControllerDelegate <NSObject>

@required

- (void)photoPickerActionsViewController:(CNPhotoPickerActionsViewController *)arg1 didPerformAction:(long long)arg2 withProviderItem:(CNPhotoPickerProviderItem *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)photoPickerActionsViewControllerDidFinish:(CNPhotoPickerActionsViewController *)arg1;

@end
