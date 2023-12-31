
@protocol PGPictureInPictureViewController <NSObject>

@optional

- (void)actionButtonTapped;
- (void)didAnimatePictureInPictureStart;
- (void)didAnimatePictureInPictureStop;
- (bool)shouldShowAlternateActionButtonImage;
- (bool)shouldShowLoadingIndicator;
- (void)viewDidResize;
- (void)viewWillResize;
- (void)willAnimatePictureInPictureStart;
- (void)willAnimatePictureInPictureStop;

@end
