
@interface HealthExperienceUI.FeatureOnboardingBulletListItemView : UIView {
    void button;
    void buttonConfiguration;
    void descriptionLabel;
    void imageAndTextSideBySideConstraints;
    void imageAndTextStackedConstraints;
    void imageView;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)buttonWasTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateConstraints;

@end
