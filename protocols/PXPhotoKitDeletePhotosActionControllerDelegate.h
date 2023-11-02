
@protocol PXPhotoKitDeletePhotosActionControllerDelegate <NSObject>

@required

- (void)deletePhotosActionController:(PXPhotoKitDeletePhotosActionController *)arg1 presentConfirmationViewController:(UIViewController *)arg2;

@optional

- (void)deletePhotosActionController:(PXPhotoKitDeletePhotosActionController *)arg1 dismissConfirmationViewController:(UIViewController *)arg2;
- (long long)preferredAlertControllerStyleForDeletePhotosActionController:(PXPhotoKitDeletePhotosActionController *)arg1;

@end
