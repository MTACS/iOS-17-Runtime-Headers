
@interface GameCenterUI.RoundedTitledButton : GameCenterUI.DynamicTypeButton {
    void height;
    void tapHandler;
    void usesCapsuleRounding;
    void visualEffectView;
}

@property (nonatomic) double _cornerRadius;
@property (nonatomic) bool enabled;

- (void).cxx_destruct;
- (double)_cornerRadius;
- (void)_setCornerRadius:(double)arg1;
- (void)didTapButton:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
