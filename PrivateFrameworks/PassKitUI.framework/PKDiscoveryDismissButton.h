
@interface PKDiscoveryDismissButton : UIButton {
    long long  _style;
}

@property (nonatomic, readonly) long long style;

+ (long long)_blurEffectStyleForUserInterfaceStyle:(long long)arg1;
+ (id)_tintColorForUserInterfaceStyle:(long long)arg1;
+ (id)buttonWithStyle:(long long)arg1 primaryAction:(id)arg2;

- (id)_backingEffect;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_tintColor;
- (void)_updateStyleWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)updateStyleWithStyle:(long long)arg1 animated:(bool)arg2;

@end
