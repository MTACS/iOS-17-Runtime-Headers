
@interface _UIAlertControllerModernTVActionBackgroundView : _UIAlertControllerTVBackgroundView {
    UIVisualEffectView * _effectView;
    bool  _shouldUseTintColorAsHighlightColor;
    NSMutableDictionary * _vibrancies;
}

@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic) bool shouldUseTintColorAsHighlightColor;

+ (struct CGSize { double x1; double x2; })backgroundInsetAmount;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_shadowOffset;
- (double)_shadowOpacity;
- (double)_shadowRadius;
- (void)_updateBackgroundColor;
- (id)effectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEffectView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setShouldUseTintColorAsHighlightColor:(bool)arg1;
- (void)setVibrantCompositing:(bool)arg1 forState:(unsigned long long)arg2;
- (bool)shouldUseTintColorAsHighlightColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCompositingForHighlighted:(bool)arg1;
- (bool)vibrantCompositing:(unsigned long long)arg1;

@end
