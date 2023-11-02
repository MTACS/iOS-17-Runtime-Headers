
@protocol TVRUIHintsStyleProvider <NSObject>

@required

- (double)activationAnimationDismissalDelay;
- (double)activationAnimationDuration;
- (double)animationDuration;
- (double)animationPresentationDelay;
- (UIColor *)backgroundColor;
- (NSArray *)backgroundFilters;
- (double)buttonOutlineWidth;
- (double)imageMargin;
- (double)maximumSymbolPointSize;
- (double)preferredTipWidth;
- (UIColor *)primaryTintColor;
- (bool)shouldShowSiriHint;
- (bool)shouldShowVolumeHint;
- (double)siriHintContainerWidth;
- (NSString *)siriHintTipContext;
- (UIImage *)siriImage;
- (long long)userInterfaceStyle;
- (double)volumeHintContainerWidth;
- (UIImage *)volumeImage;

@end
