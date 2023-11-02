
@interface TVRUIHintsStylePad : TVRUIHintsStyle <TVRUIHintsStyleProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)activationAnimationDismissalDelay;
- (double)activationAnimationDuration;
- (double)animationDuration;
- (double)animationPresentationDelay;
- (id)backgroundColor;
- (id)backgroundFilters;
- (double)buttonOutlineWidth;
- (id)description;
- (double)imageMargin;
- (double)maximumSymbolPointSize;
- (double)preferredTipWidth;
- (id)primaryTintColor;
- (bool)shouldShowSiriHint;
- (bool)shouldShowVolumeHint;
- (double)siriHintContainerWidth;
- (id)siriHintTipContext;
- (id)siriImage;
- (long long)userInterfaceStyle;
- (double)volumeHintContainerWidth;
- (id)volumeImage;

@end
