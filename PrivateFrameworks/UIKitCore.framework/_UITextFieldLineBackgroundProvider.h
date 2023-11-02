
@interface _UITextFieldLineBackgroundProvider : _UITextFieldDrawingBackgroundProvider

+ (id)lineStyleMetricsProvider;

- (long long)associatedBorderStyle;
- (void)drawInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)enabledDidChangeAnimated:(bool)arg1;
- (id)preferredMetricsProvider;

@end
