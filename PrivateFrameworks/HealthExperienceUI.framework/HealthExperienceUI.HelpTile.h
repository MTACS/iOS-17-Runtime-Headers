
@interface HealthExperienceUI.HelpTile : UIView {
    void accessibilityConstraints;
    void actionButton;
    void actionHandler;
    void bodyLabel;
    void dismissButton;
    void imageView;
    void nonAccessibilityConstraints;
    void separatorView;
    void titleLabel;
    void viewModel;
}

- (void).cxx_destruct;
- (void)actionTapped;
- (void)dismissTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
