
@protocol CNSharingProfileOnboardingPosePickerControllerDelegate <NSObject>

@required

- (void)posePickerController:(CNSharingProfileOnboardingPosePickerController *)arg1 didFinishWithProviderItem:(CNPhotoPickerProviderItem *)arg2;
- (void)posePickerControllerDidSelectBack:(CNSharingProfileOnboardingPosePickerController *)arg1;
- (void)posePickerControllerDidSelectSetupLater:(CNSharingProfileOnboardingPosePickerController *)arg1;

@end
