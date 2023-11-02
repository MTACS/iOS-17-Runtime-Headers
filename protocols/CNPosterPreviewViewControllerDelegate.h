
@protocol CNPosterPreviewViewControllerDelegate

@required

- (void)posterPreviewViewController:(CNPosterPreviewViewController *)arg1 didFinishWithPosterConfiguration:(CNPRSPosterConfiguration *)arg2;
- (void)posterPreviewViewControllerDidSelectCustomizeLater:(CNPosterPreviewViewController *)arg1;
- (void)posterPreviewViewControllerDidSelectUseDifferentPoster:(CNPosterPreviewViewController *)arg1;

@end
