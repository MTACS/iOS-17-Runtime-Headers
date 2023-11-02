
@interface SBLockScreenTimerDialView : UIView <SBUILegibility> {
    SBUILegibilityView * _dialView;
    UIFont * _font;
    _UILegibilitySettings * _legibilitySettings;
    double  _strength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newDialViewConfiguredForSettingsAndFont;
- (id)font;
- (id)initWithSymbolFont:(id)arg1;
- (id)legibilitySettings;
- (void)setFont:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;

@end
