
@protocol _UIFieldEditorHostingViewRequirements <UITraitEnvironment, UITextInput>

@required

- (UIView *)_backgroundView;
- (long long)_blurEffectStyleForAppearance;
- (UIView *)_contentView;
- (bool)_fieldEditorAttached;
- (bool)_hasContent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
