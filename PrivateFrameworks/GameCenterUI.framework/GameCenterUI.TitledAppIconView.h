
@interface GameCenterUI.TitledAppIconView : UIView {
    void iconView;
    void titleLabel;
}

@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;

- (void).cxx_destruct;
- (id)accessibilityTitleLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
