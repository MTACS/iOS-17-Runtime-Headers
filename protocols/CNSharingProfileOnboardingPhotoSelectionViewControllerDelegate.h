
@protocol CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate <NSObject>

@required

- (void)photoSelectionViewControllerDidFinishWithResult:(CNSharingProfileOnboardingPhotoSelectionResult *)arg1;

@optional

- (void)photoSelectionViewControllerDidTapSetupLater:(CNSharingProfileOnboardingPhotoSelectionViewController *)arg1;

@end
