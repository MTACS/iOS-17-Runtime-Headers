
@interface SFPrivacyReportIconView : UIView {
    UIImageView * _mask;
}

@property (nonatomic, readonly) CAGradientLayer *gradientLayer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateColors;
- (void)_updateSymbolConfiguration;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;

@end
