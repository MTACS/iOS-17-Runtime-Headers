
@protocol PXVisualDiagnosticsDrawTextConfiguration

@required

- (NSAttributedString *)attributedText;
- (UIColor *)backgroundColor;
- (UIFont *)font;
- (double)fontSize;
- (struct CGPoint { double x1; double x2; })relativePosition;
- (void)setAttributedText:(NSAttributedString *)arg1;
- (void)setBackgroundColor:(UIColor *)arg1;
- (void)setFont:(UIFont *)arg1;
- (void)setFontSize:(double)arg1;
- (void)setRelativePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setText:(NSString *)arg1;
- (void)setTextColor:(UIColor *)arg1;
- (NSString *)text;
- (UIColor *)textColor;

@end
