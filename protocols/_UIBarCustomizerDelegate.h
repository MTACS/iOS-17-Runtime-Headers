
@protocol _UIBarCustomizerDelegate <NSObject>

@required

- (UIView *)barCustomizer:(_UIBarCustomizer *)arg1 containerViewForSession:(_UIBarCustomizationSession *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })barCustomizer:(_UIBarCustomizer *)arg1 customizationAreaBoundsForSession:(_UIBarCustomizationSession *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })barCustomizer:(_UIBarCustomizer *)arg1 overflowControlBoundsForSession:(_UIBarCustomizationSession *)arg2;
- (UIView *)barCustomizer:(_UIBarCustomizer *)arg1 parentTraitEnvironmentForSession:(_UIBarCustomizationSession *)arg2;
- (void)barCustomizer:(_UIBarCustomizer *)arg1 willEndSession:(_UIBarCustomizationSession *)arg2 didReset:(bool)arg3;

@end
