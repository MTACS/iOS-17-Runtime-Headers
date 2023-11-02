
@interface SFThemeColorEffectView : UIView {
    UIView * _darkeningView;
    UIVisualEffectView * _effectView;
    SFThemeColorBarTheme * _theme;
    double  _themeColorVisibility;
}

@property (setter=_setGroupName:, nonatomic, copy) NSString *_groupName;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, copy) UIVisualEffect *effect;
@property (nonatomic, retain) SFThemeColorBarTheme *theme;
@property (nonatomic) double themeColorVisibility;

- (void).cxx_destruct;
- (void)_applyTheme;
- (id)_groupName;
- (bool)_needsBlur;
- (void)_setGroupName:(id)arg1;
- (void)_updateFillColor;
- (id)contentView;
- (id)effect;
- (id)initWithEffect:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeColorVisibility:(double)arg1;
- (id)theme;
- (double)themeColorVisibility;

@end
