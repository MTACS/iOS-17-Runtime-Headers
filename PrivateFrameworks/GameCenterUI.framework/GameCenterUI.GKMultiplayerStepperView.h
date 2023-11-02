
@interface GameCenterUI.GKMultiplayerStepperView : UIView {
    void backgroundView;
    void downButton;
    void isStepperHidden;
    void label;
    void model;
    void upButton;
}

@property (nonatomic, readonly) UIButton *accessibilityDownButton;
@property (nonatomic, readonly) UIButton *accessibilityUpButton;

- (void).cxx_destruct;
- (id)accessibilityDownButton;
- (id)accessibilityUpButton;
- (void)accessibilityUpdateStepperWithValue:(long long)arg1;
- (void)didTapDown:(id)arg1;
- (void)didTapUp:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;

@end
