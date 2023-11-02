
@interface TVRUIHintsStyle : NSObject {
    bool  _hasHomeButton;
}

@property (nonatomic) bool hasHomeButton;

+ (id)styleProviderForUserInterfaceIdiom:(long long)arg1 hasHomeButton:(bool)arg2;

- (double)activationAnimationDismissalDelay;
- (double)activationAnimationDuration;
- (double)animationDuration;
- (double)animationPresentationDelay;
- (bool)hasHomeButton;
- (id)initWithHomeButton:(bool)arg1;
- (double)maximumSymbolPointSize;
- (double)preferredTipWidth;
- (void)setHasHomeButton:(bool)arg1;
- (bool)shouldShowSiriHint;
- (bool)shouldShowVolumeHint;
- (id)siriHintTipContext;
- (long long)userInterfaceStyle;

@end
