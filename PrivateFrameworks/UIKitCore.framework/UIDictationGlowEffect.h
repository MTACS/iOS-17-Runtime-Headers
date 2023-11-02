
@interface UIDictationGlowEffect : NSObject {
    double  _blurRadius;
    bool  _cachedDarkMode;
    UIColor * _cachedTintColor;
    TUIGlowEffect * _glowEffect;
    UIView * _glowEffectView;
    UIColor * _tintColor;
}

@property (nonatomic) double blurRadius;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (double)blurRadius;
- (id)initWithView:(id)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintColor:(id)arg1 animated:(bool)arg2 duration:(double)arg3 autoreverses:(bool)arg4 repeatCount:(double)arg5;
- (id)tintColor;
- (void)updateColorWithUserInterfaceStyleChange;

@end
