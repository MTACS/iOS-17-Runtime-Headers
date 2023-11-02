
@protocol SBLockScreenSpotlightPresenting <NSObject>

@required

- (void)presentOrDismissCoverSheetSpotlightAnimated:(bool)arg1;
- (bool)shouldPresentOrDismissCoverSheetSpotlight;
- (void)updateScaleViewWithScale:(double)arg1 withDuration:(double)arg2;

@end
