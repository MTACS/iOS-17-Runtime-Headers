
@interface PXFocusSettings : PXSettings {
    double  _focusAnimationPadding;
    long long  _focusAnimationStyle;
    double  _pressedAnimationPadding;
    long long  _pressedAnimationStyle;
}

@property (nonatomic) double focusAnimationPadding;
@property (nonatomic) long long focusAnimationStyle;
@property (nonatomic) double pressedAnimationPadding;
@property (nonatomic) long long pressedAnimationStyle;

+ (id)sharedInstance;

- (double)focusAnimationPadding;
- (long long)focusAnimationStyle;
- (id)parentSettings;
- (double)pressedAnimationPadding;
- (long long)pressedAnimationStyle;
- (void)setDefaultValues;
- (void)setFocusAnimationPadding:(double)arg1;
- (void)setFocusAnimationStyle:(long long)arg1;
- (void)setPressedAnimationPadding:(double)arg1;
- (void)setPressedAnimationStyle:(long long)arg1;

@end
