
@interface _UIPointerEffectTintView : UIVisualEffectView <_UILumaTrackingBackdropViewDelegate> {
    bool  _disabled;
    unsigned long long  _luminance;
    bool  _pressed;
    id /* block */  _tintColorMatrixProvider;
}

@property (getter=isDisabled, nonatomic) bool disabled;
@property (getter=isPressed, nonatomic) bool pressed;

- (void).cxx_destruct;
- (void)_updateAlpha;
- (void)_updateBackgroundEffects;
- (void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2;
- (id)initWithTintColorMatrixProvider:(id /* block */)arg1;
- (bool)isDisabled;
- (bool)isPressed;
- (void)setDisabled:(bool)arg1;
- (void)setPressed:(bool)arg1;

@end
