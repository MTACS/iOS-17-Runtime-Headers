
@interface PXStoryTVInfoPanelButton : UIView {
    UIVisualEffectView * _backgroundEffectView;
    _UIFloatingContentView * _floatingContentView;
    UIView * _focusView;
    UILabel * _label;
}

@property (nonatomic, copy) NSString *text;

+ (double)widthForText:(id)arg1;

- (void).cxx_destruct;
- (void)_updateAppearance;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (unsigned long long)elementControlState;
- (id)elementTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setControlState:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)updateFocusState:(id)arg1;

@end
